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

#pragma once

/*****************************************************************************
 * Includes
 *****************************************************************************/

#include <FreeRTOS.h>
#include <queue.h>
#include <semphr.h>

#include <metal/alloc.h>
#include <openamp/open_amp.h>
#include <openamp/remoteproc.h>

#include <mailbox.hpp>

/*****************************************************************************
 * Resource table
 *****************************************************************************/

struct ResourceTable {
    static constexpr uint32_t VERSION       = 1;
    static constexpr uint32_t NUM_RESOURCES = 2;
    static constexpr uint32_t NUM_VRINGS    = 2;
    static constexpr uint32_t VRING_ALIGN   = 0x100;
    //    static constexpr uint32_t VRING_SIZE = 0x10;
    static constexpr uint32_t RESERVED = 0;

    resource_table table;
    uint32_t offset[NUM_RESOURCES];
    fw_rsc_vdev vdev;
    fw_rsc_vdev_vring vring[NUM_VRINGS];
    fw_rsc_carveout carveout;

    // clang-format off
    constexpr ResourceTable(const uint32_t vringSize = 0x100, const uint32_t carveoutSize = 0) :
        table {
            VERSION,
            NUM_RESOURCES,
            { RESERVED, RESERVED },
            {}
        }, 
        offset {
            offsetof(ResourceTable, vdev),
            offsetof(ResourceTable, carveout),
        },
        vdev {
            RSC_VDEV,
             VIRTIO_ID_RPMSG,
             2, // Notify ID
             1 << VIRTIO_RPMSG_F_NS,
             0,
             0,
             0,
             NUM_VRINGS,
             { 0, RESERVED },
             {}
        },
        vring {
            {
                FW_RSC_U32_ADDR_ANY,
                VRING_ALIGN,
                vringSize,
                1,
                RESERVED
            },
            {
                FW_RSC_U32_ADDR_ANY,
                VRING_ALIGN,
                vringSize,
                2,
                RESERVED
            }
        },
        carveout {
            RSC_CARVEOUT,
            FW_RSC_U32_ADDR_ANY,
            FW_RSC_U32_ADDR_ANY,
            carveoutSize,
            0,
            RESERVED,
            "TFLM arena"
        }
        {}
    // clang-format off
} __attribute__((packed));

/*****************************************************************************
 * MetalIO
 *****************************************************************************/

class MetalIO {
public:
    MetalIO();

    remoteproc_mem *operator&();

private:
    static metal_phys_addr_t offsetToPhys(metal_io_region *io, unsigned long offset);
    static unsigned long physToOffset(metal_io_region *io, metal_phys_addr_t phys);

    metal_io_ops ops;
    metal_io_region region;
    remoteproc_mem mem;
};

/*****************************************************************************
 * RProc
 *****************************************************************************/

class RProc {
public:
    RProc(Mailbox::Mailbox &_mailbox, resource_table &table, size_t tableSize, MetalIO &_mem);
    ~RProc();

    remoteproc *getRProc();
    virtio_device *getVDev();

private:
    // IRQ notification callback
    static void mailboxCallback(void *userArg);

    // Notification task handling virtio messages
    static void notifyTask(void *param);

    // Remote proc ops
    static struct remoteproc *init(remoteproc *rproc, const remoteproc_ops *ops, void *arg);
    static void remove(remoteproc *rproc);
    static void *mmap(remoteproc *rproc,
                      metal_phys_addr_t *pa,
                      metal_phys_addr_t *da,
                      size_t size,
                      unsigned int attribute,
                      metal_io_region **io);
    static int notify(remoteproc *rproc, uint32_t id);
    static struct remoteproc_mem *getMem(remoteproc *rproc,
                                         const char *name,
                                         metal_phys_addr_t pa,
                                         metal_phys_addr_t da,
                                         void *va,
                                         size_t size,
                                         remoteproc_mem *buf);

    // IRQ notification
    Mailbox::Mailbox &mailbox;

    // Remoteproc
    MetalIO &mem;
    remoteproc rproc;
    remoteproc_ops ops;
    virtio_device *vdev;

    // FreeRTOS
    SemaphoreHandle_t notifySemaphore;
    TaskHandle_t notifyHandle;
};

/*****************************************************************************
 * Rpmsg
 *****************************************************************************/

class Rpmsg {
public:
    Rpmsg(RProc &rproc, const char *const name);

    int send(void *data, size_t len, uint32_t dst = 0);
    void *physicalToVirtual(metal_phys_addr_t pa);

protected:
    virtual int handleMessage(void *data, size_t len, uint32_t src);

private:
    // RPMsg ops
    static void rpmsgNsBind(rpmsg_device *rdev, const char *name, uint32_t dest);
    static void nsUnbindCallback(rpmsg_endpoint *ept);
    static int endpointCallback(rpmsg_endpoint *ept, void *data, size_t len, uint32_t src, void *priv);

    // RPMsg
    rpmsg_virtio_device rvdev;
    rpmsg_device *rdev;
    rpmsg_endpoint endpoint;
};
