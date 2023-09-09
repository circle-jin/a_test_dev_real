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
 * Generated from gen_labels_cpp.py tool and labels_wav2letter.txt file.
 * Date: 2023-09-06 06:13:21.190419
 ***************************************************************************/

#include "BufAttributes.hpp"

#include <vector>
#include <string>

namespace arm {
namespace app {
namespace asr {

static const char * labelsVec[] LABELS_ATTRIBUTE = {
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
    "'",
    " ",
    "$",
};

bool GetLabelsVector(std::vector<std::string>& labels)
{
    constexpr size_t labelsSz = 29;
    labels.clear();

    if (!labelsSz) {
        return false;
    }

    labels.reserve(labelsSz);

    for (size_t i = 0; i < labelsSz; ++i) {
        labels.emplace_back(labelsVec[i]);
    }

    return true;
}

} /* namespace  */
} /* namespace  */
} /* namespace  */
