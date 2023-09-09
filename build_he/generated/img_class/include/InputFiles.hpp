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
 * Generated from gen_rgb_cpp.py tool  file.
 * Date: 2023-09-06 06:09:35.734016
 ***************************************************************************/

#ifndef GENERATED_IMAGES_H
#define GENERATED_IMAGES_H

#include <cstdint>

#define NUMBER_OF_FILES (4U)
#define IMAGE_DATA_SIZE (150528U)

extern const uint8_t im0[IMAGE_DATA_SIZE];
extern const uint8_t im1[IMAGE_DATA_SIZE];
extern const uint8_t im2[IMAGE_DATA_SIZE];
extern const uint8_t im3[IMAGE_DATA_SIZE];

/**
 * @brief       Gets the filename for the baked-in input array
 * @param[in]   idx     Index of the input.
 * @return      const C string pointer to the name.
 **/
const char* GetFilename(const uint32_t idx);

/**
 * @brief       Gets the pointer to image data.
 * @param[in]   idx     Index of the input.
 * @return      Pointer to the 8-bit unsigned integer data.
 **/
const uint8_t* GetImgArray(const uint32_t idx);

#endif /* GENERATED_IMAGES_H */