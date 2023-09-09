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

#include <ethosu_core_rpmsg.h>
#include <mailbox.hpp>

#include "queue.hpp"
#include "remoteproc.hpp"

/*****************************************************************************
 * Messages
 *****************************************************************************/

struct Message {
    Message() {}

    Message(const uint32_t _src,
            const EthosU::ethosu_core_msg_type _type = EthosU::ETHOSU_CORE_MSG_MAX,
            const uint64_t msgId                     = 0,
            const uint32_t _length                   = 0) :
        src(_src),
        length(_length) {
        rpmsg.header.magic  = ETHOSU_CORE_MSG_MAGIC;
        rpmsg.header.type   = _type;
        rpmsg.header.msg_id = msgId;
    }

    uint32_t src    = 0;
    uint32_t length = 0;
    EthosU::ethosu_core_rpmsg rpmsg;
};

/*****************************************************************************
 * MessageHandler
 *****************************************************************************/

class MessageHandler : public Rpmsg {
public:
    using InferenceQueue = Queue<Message *>;
    using ResponseQueue  = Queue<Message *>;

    MessageHandler(RProc &rproc, const char *const name);
    virtual ~MessageHandler();

    InferenceQueue &getInferenceQueue() {
        return inferenceQueue;
    }

    InferenceQueue &getResponseQueue() {
        return responseQueue;
    }

protected:
    // Handle incoming rpmsg
    int handleMessage(void *data, size_t len, uint32_t src) override;

    // Outgoing messages
    void sendError(const uint32_t src, const EthosU::ethosu_core_err_type type, const char *message);
    void sendPong(const uint32_t src, const uint64_t msgId);
    void sendVersionRsp(const uint32_t src, const uint64_t msgId);
    void sendCapabilitiesRsp(const uint32_t src, const uint64_t msgId);
    void sendNetworkInfoRsp(const uint32_t src, const uint64_t msgId, EthosU::ethosu_core_network_buffer &network);
    void forwardInferenceReq(const uint32_t src,
                             const uint64_t msgId,
                             const EthosU::ethosu_core_msg_inference_req &inference);
    void sendInferenceRsp(const uint32_t src, const uint64_t msgId, const EthosU::ethosu_core_status status);
    void sendCancelInferenceRsp(const uint32_t src, const uint64_t msgId, const EthosU::ethosu_core_status status);

    EthosU::ethosu_core_msg_capabilities_rsp getCapabilities() const;
    bool getNetwork(const EthosU::ethosu_core_network_buffer &buffer, void *&data, size_t &size);

    // Tasks returning response messages
    static void responseTask(void *param);

private:
    bool bufferToVirtual(EthosU::ethosu_core_buffer &buffer);
    bool networkToVirtual(EthosU::ethosu_core_network_buffer &buffer);

    InferenceQueue inferenceQueue;
    ResponseQueue responseQueue;
    EthosU::ethosu_core_msg_capabilities_rsp capabilities;

    // FreeRTOS
    TaskHandle_t taskHandle;
};
