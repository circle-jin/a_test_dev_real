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

#include <cinttypes>
#include <memory>
#include <stdio.h>

#include <ethosu_log.h>
#include <mailbox.hpp>

#if defined(MHU_V2)
#include <mhu_v2.hpp>
#elif defined(MHU_JUNO)
#include <mhu_juno.hpp>
#else
#include <mhu_dummy.hpp>
#endif

#include "inference_runner.hpp"
#include "message_handler.hpp"
#include "remoteproc.hpp"

/*****************************************************************************
 * TFLM arena
 *****************************************************************************/

// Number of parallell inference tasks. Typically one per NPU.
#if defined(ETHOSU) && defined(ETHOSU_NPU_COUNT) && ETHOSU_NPU_COUNT > 0
constexpr size_t NUM_PARALLEL_TASKS = ETHOSU_NPU_COUNT;
#else
constexpr size_t NUM_PARALLEL_TASKS = 1;
#endif

#ifndef TENSOR_ARENA_SIZE
#define TENSOR_ARENA_SIZE 2000000
#endif

// TensorArena static initialisation
constexpr size_t arenaSize = TENSOR_ARENA_SIZE;

/*****************************************************************************
 * Resource table
 *****************************************************************************/

extern "C" {
__attribute__((section(".resource_table"))) ResourceTable resourceTable(8, arenaSize *NUM_PARALLEL_TASKS);
}

/*****************************************************************************
 * Mailbox
 *****************************************************************************/

namespace {

#ifdef MHU_V2
Mailbox::MHUv2 mailbox(MHU_TX_BASE_ADDRESS, MHU_RX_BASE_ADDRESS); // txBase, rxBase
#elif defined(MHU_JUNO)
Mailbox::MHUJuno mailbox(MHU_BASE_ADDRESS);
#else
Mailbox::MHUDummy mailbox;
#endif

#ifdef MHU_IRQ
void mailboxIrqHandler() {
    LOG_DEBUG("");
    mailbox.handleMessage();
}
#endif

} // namespace

/*****************************************************************************
 * main
 *****************************************************************************/

int main() {
    printf("Ethos-U Message Handler OpenAMP\n");

    auto mem            = std::make_shared<MetalIO>();
    auto rproc          = std::make_shared<RProc>(mailbox, resourceTable.table, sizeof(resourceTable), *mem);
    auto messageHandler = std::make_shared<MessageHandler>(*rproc, "ethos-u-0.0");

    printf("TFLM arena. pa=%" PRIx32 ", da=%" PRIx32 ", len=%" PRIx32 "\n",
           resourceTable.carveout.da,
           resourceTable.carveout.pa,
           resourceTable.carveout.len);

    std::array<std::shared_ptr<InferenceRunner>, NUM_PARALLEL_TASKS> inferenceRunner;

    for (size_t i = 0; i < NUM_PARALLEL_TASKS; i++) {
        auto tensorArena = static_cast<uint8_t *>(messageHandler->physicalToVirtual(resourceTable.carveout.pa));

        inferenceRunner[i] = std::make_shared<InferenceRunner>(&tensorArena[arenaSize * i],
                                                               arenaSize,
                                                               messageHandler->getInferenceQueue(),
                                                               messageHandler->getResponseQueue());
    }

#ifdef MHU_IRQ
    // Register mailbox interrupt handler
    NVIC_SetVector((IRQn_Type)MHU_IRQ, (uint32_t)&mailboxIrqHandler);
    NVIC_EnableIRQ((IRQn_Type)MHU_IRQ);
#endif

    // Start Scheduler
    vTaskStartScheduler();

    return 0;
}
