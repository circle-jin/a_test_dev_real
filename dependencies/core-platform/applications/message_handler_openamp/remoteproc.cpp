/*
 * SPDX-FileCopyrightText: Copyright 2022-2023 Arm Limited and/or its affiliates <open-source-office@arm.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use _this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*****************************************************************************
 * Includes
 *****************************************************************************/

#include "remoteproc.hpp"

#include <cinttypes>

#include <ethosu_log.h>

/*****************************************************************************
 * MetalIO
 *****************************************************************************/

extern "C" {

__attribute__((weak)) void *ethosu_phys_to_virt(const uint64_t pa) {
    return reinterpret_cast<void *>(pa);
}
}

MetalIO::MetalIO() :
    ops{.read           = nullptr,
        .write          = nullptr,
        .block_read     = nullptr,
        .block_write    = nullptr,
        .block_set      = nullptr,
        .close          = nullptr,
        .offset_to_phys = nullptr,
        .phys_to_offset = physToOffset} {
    remoteproc_init_mem(&mem, "shm", 0, 0, 0xffffffff, &region);

    metal_io_init(&region,
                  reinterpret_cast<void *>(0), /* virt */
                  &mem.pa,                     /* physmap */
                  0xffffffff,                  /* size */
                  -1L,                         /* pagemask */
                  0,                           /* attributes */
                  &ops);                       /* ops */
}

remoteproc_mem *MetalIO::operator&() {
    return &mem;
}

unsigned long MetalIO::physToOffset(metal_io_region *io, metal_phys_addr_t pa) {
    auto offset = reinterpret_cast<unsigned long>(ethosu_phys_to_virt(pa));
    LOG_DEBUG("Translate PA to offset. pa=%lx, offset=%lx", pa, offset);
    return offset;
}

/*****************************************************************************
 * RProc
 *****************************************************************************/

RProc::RProc(Mailbox::Mailbox &_mailbox, resource_table &table, size_t tableSize, MetalIO &_mem) :
    mailbox(_mailbox), mem(_mem),
    ops{
        .init       = init,    // initialize the remoteproc instance
        .remove     = remove,  // remove the remoteproc instance
        .mmap       = nullptr, // memory mapped the memory with physical address as input
        .handle_rsc = nullptr, // handle the vendor specific resource
        .config     = nullptr, // configure the remoteproc to make it ready to load and run executable
        .start      = nullptr, // kick the remoteproc to run application
        .stop = nullptr, // stop the remoteproc from running application, the resource such as memory may not be off.
        .shutdown = nullptr, // shutdown the remoteproc and release its resources.
        .notify   = notify,  // notify the remote
        .get_mem  = nullptr, // get remoteproc memory I/O region.
    },
    vdev(nullptr), notifySemaphore(xSemaphoreCreateBinary()) {
    mailbox.registerCallback(mailboxCallback, static_cast<void *>(this));

    if (!remoteproc_init(&rproc, &ops, this)) {
        LOG_ERR("Failed to intialize remoteproc");
        abort();
    }

    int ret = remoteproc_set_rsc_table(&rproc, &table, tableSize);
    if (ret) {
        LOG_ERR("Failed to set resource table. ret=%d", ret);
        abort();
    }

    vdev = remoteproc_create_virtio(&rproc, 0, VIRTIO_DEV_DEVICE, nullptr);
    if (!vdev) {
        LOG_ERR("Failed to create vdev");
        abort();
    }

    BaseType_t taskret = xTaskCreate(notifyTask, "notifyTask", 1024, this, 2, &notifyHandle);
    if (taskret != pdPASS) {
        LOG_ERR("Failed to create remoteproc notify task");
        abort();
    }
}

RProc::~RProc() {
    mailbox.deregisterCallback(mailboxCallback, static_cast<void *>(this));
    vTaskDelete(notifyHandle);
}

remoteproc *RProc::getRProc() {
    return &rproc;
}

virtio_device *RProc::getVDev() {
    return vdev;
}

void RProc::mailboxCallback(void *userArg) {
    auto _this = static_cast<RProc *>(userArg);

    xSemaphoreGiveFromISR(_this->notifySemaphore, nullptr);
}

void RProc::notifyTask(void *param) {
    LOG_DEBUG("Starting message notify task");

    auto _this = static_cast<RProc *>(param);

    while (true) {
        // Wait for event
        xSemaphoreTake(_this->notifySemaphore, portMAX_DELAY);

        // Read virtio queue and notify all rpmsg clients
        rproc_virtio_notified(_this->vdev, RSC_NOTIFY_ID_ANY);
    }
}

struct remoteproc *RProc::init(remoteproc *rproc, const remoteproc_ops *ops, void *arg) {
    LOG_DEBUG("");

    auto _this = static_cast<RProc *>(arg);

    rproc->ops  = ops;
    rproc->priv = arg;
    remoteproc_add_mem(rproc, &_this->mem);

    return rproc;
}

void RProc::remove(remoteproc *rproc) {
    LOG_DEBUG("");
}

int RProc::notify(remoteproc *rproc, uint32_t id) {
    LOG_DEBUG("");

    auto *_this = static_cast<RProc *>(rproc->priv);
    _this->mailbox.sendMessage();
    return 0;
}

/*****************************************************************************
 * Rpmsg
 *****************************************************************************/

Rpmsg::Rpmsg(RProc &rproc, const char *const name) {

    metal_io_region *region = remoteproc_get_io_with_name(rproc.getRProc(), "shm");
    if (!region) {
        LOG_ERR("Failed to get shared mem region");
        abort();
    }

    if (rpmsg_init_vdev(&rvdev, rproc.getVDev(), nullptr, region, nullptr)) {
        LOG_ERR("Failed to initialize rpmsg vdev");
        abort();
    }

    rdev = rpmsg_virtio_get_rpmsg_device(&rvdev);
    if (!rdev) {
        LOG_ERR("Failed to get rpmsg dev");
        abort();
    }

    int ret =
        rpmsg_create_ept(&endpoint, rdev, name, RPMSG_ADDR_ANY, RPMSG_ADDR_ANY, endpointCallback, nsUnbindCallback);
    if (ret != RPMSG_SUCCESS) {
        LOG_ERR("Failed to create rpmsg endpoint. ret=%d", ret);
        abort();
    }

    endpoint.priv = static_cast<void *>(this);
}

int Rpmsg::send(void *data, size_t len, uint32_t dst) {
    LOG_DEBUG("Sending rpmsg. dst=%" PRIu32 ", len=%zu", dst, len);

    int ret = rpmsg_sendto(&endpoint, data, len, dst);
    return ret;
}

void *Rpmsg::physicalToVirtual(metal_phys_addr_t pa) {
    return metal_io_phys_to_virt(rvdev.shbuf_io, pa);
}

void Rpmsg::rpmsgNsBind(rpmsg_device *rdev, const char *name, uint32_t dest) {
    LOG_DEBUG("");
}

void Rpmsg::nsUnbindCallback(rpmsg_endpoint *ept) {
    LOG_DEBUG("");
}

int Rpmsg::endpointCallback(rpmsg_endpoint *ept, void *data, size_t len, uint32_t src, void *priv) {
    LOG_DEBUG("src=%" PRIX32 ", len=%zu", src, len);

    auto _this = static_cast<Rpmsg *>(priv);
    _this->handleMessage(data, len, src);

    return 0;
}

int Rpmsg::handleMessage(void *data, size_t len, uint32_t src) {
    LOG_DEBUG("Receiving rpmsg. src=%" PRIu32 ", len=%zu", src, len);

    auto c = static_cast<char *>(data);
    for (size_t i = 0; i < len; i++) {
        printf("%c", c[i]);
    }
    printf("\n");

    return 0;
}
