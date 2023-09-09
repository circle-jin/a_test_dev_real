/*
 * SPDX-FileCopyrightText: Copyright 2023, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*********************    Autogenerated file. DO NOT EDIT *******************
 * Generated from gen_audio_cpp.py tool  file.
 * Date: 2023-09-06 06:13:27.936101
 ***************************************************************************/

#include "InputFiles.hpp"

static const char* audioClipFilenames[] = {
    "yes_no_go_stop.wav",
};

static const int16_t* audioClipArrays[] = {
    audio0
};


static const size_t audioClipSizes[NUMBER_OF_FILES] = {
    64000
};

const char* GetFilename(const uint32_t idx)
{
    if (idx < NUMBER_OF_FILES) {
        return audioClipFilenames[idx];
    }
    return nullptr;
}

const int16_t* GetAudioArray(const uint32_t idx)
{
    if (idx < NUMBER_OF_FILES) {
        return audioClipArrays[idx];
    }
    return nullptr;
}

uint32_t GetAudioArraySize(const uint32_t idx)
{
    if (idx < NUMBER_OF_FILES) {
        return audioClipSizes[idx];
    }
    return 0;
}