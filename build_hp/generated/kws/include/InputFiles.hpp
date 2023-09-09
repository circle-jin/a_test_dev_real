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
 * Date: 2023-09-06 06:13:17.979702
 ***************************************************************************/

#ifndef GENERATED_AUDIOCLIPS_H
#define GENERATED_AUDIOCLIPS_H

#include <cstdint>
#include <stddef.h>

#define NUMBER_OF_FILES (4U)

extern const int16_t audio0[16000];
extern const int16_t audio1[48000];
extern const int16_t audio2[16000];
extern const int16_t audio3[64000];

/**
 * @brief       Gets the filename for the baked-in input array
 * @param[in]   idx     Index of the input.
 * @return      const C string pointer to the name.
 **/
const char* GetFilename(const uint32_t idx);

/**
 * @brief       Gets the pointer to audio data.
 * @param[in]   idx     Index of the input.
 * @return      Pointer to 16-bit signed integer data.
 **/
const int16_t* GetAudioArray(const uint32_t idx);

/**
 * @brief       Gets the size of the input array.
 * @param[in]   idx     Index of the input.
 * @return      Size of the input array in bytes.
 **/
uint32_t GetAudioArraySize(const uint32_t idx);

#endif /* GENERATED_AUDIOCLIPS_H */