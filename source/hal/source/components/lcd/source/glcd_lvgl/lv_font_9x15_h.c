/* This file was ported to work on Alif Semiconductor Ensemble family of devices. */

/* Copyright (C) 2023 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 *
 */

/*
 * Copyright (c) 2021 Arm Limited. All rights reserved.
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

//Converted from glcd_mps3/font_9x15_h.h
//Original info from there:

//Font Generated by MikroElektronika GLCD Font Creator 1.2.0.0
//MikroElektrnika 2011
//http://www.mikroe.com

//GLCD FontName : Lucida_Console9x15
//GLCD FontSize : 9x15

#include "lvgl.h"

static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 32. */
    0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x08,0x08,0x00,0x00,0x00,      /* Code for char num 33. */
    0x22,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 34. */
    0x00,0x48,0x48,0x24,0xFE,0x24,0x14,0x12,0x7F,0x12,0x09,0x09,0x00,0x00,0x00,      /* Code for char num 35. */
    0x08,0x3E,0x68,0x48,0x48,0x38,0x1C,0x0E,0x0A,0x0A,0x4A,0x7C,0x08,0x00,0x00,      /* Code for char num 36. */
    0x00,0x31,0x49,0x4A,0x4A,0x34,0x08,0x10,0x16,0x29,0x49,0x49,0x46,0x00,0x00,      /* Code for char num 37. */
    0x00,0x18,0x24,0x24,0x34,0x18,0x30,0x48,0x4D,0x47,0x43,0x3D,0x00,0x00,0x00,      /* Code for char num 38. */
    0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 39. */
    0x03,0x06,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x06,0x03,0x00,      /* Code for char num 40. */
    0x30,0x18,0x04,0x04,0x02,0x02,0x02,0x02,0x02,0x02,0x04,0x04,0x18,0x30,0x00,      /* Code for char num 41. */
    0x00,0x08,0x49,0x77,0x18,0x14,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 42. */
    0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x7F,0x08,0x08,0x08,0x00,0x00,0x00,      /* Code for char num 43. */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x08,0x10,0x00,      /* Code for char num 44. */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 45. */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,      /* Code for char num 46. */
    0x01,0x02,0x02,0x06,0x04,0x04,0x08,0x08,0x10,0x10,0x30,0x20,0x20,0x40,0x00,      /* Code for char num 47. */
    0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,      /* Code for char num 48. */
    0x00,0x08,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x7F,0x00,0x00,0x00,      /* Code for char num 49. */
    0x00,0x7C,0x42,0x02,0x02,0x02,0x04,0x08,0x10,0x20,0x40,0x7E,0x00,0x00,0x00,      /* Code for char num 50. */
    0x00,0x3C,0x02,0x02,0x02,0x06,0x1C,0x02,0x02,0x02,0x02,0x3C,0x00,0x00,0x00,      /* Code for char num 51. */
    0x00,0x04,0x0C,0x14,0x24,0x24,0x44,0x84,0xFE,0x04,0x04,0x04,0x00,0x00,0x00,      /* Code for char num 52. */
    0x00,0x3E,0x20,0x20,0x20,0x38,0x04,0x02,0x02,0x02,0x04,0x3C,0x00,0x00,0x00,      /* Code for char num 53. */
    0x00,0x1E,0x20,0x20,0x40,0x5C,0x62,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,      /* Code for char num 54. */
    0x00,0x7F,0x01,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x00,0x00,0x00,      /* Code for char num 55. */
    0x00,0x3C,0x42,0x42,0x42,0x24,0x38,0x46,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,      /* Code for char num 56. */
    0x00,0x1C,0x22,0x41,0x41,0x41,0x23,0x1D,0x01,0x02,0x02,0x3C,0x00,0x00,0x00,      /* Code for char num 57. */
    0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,      /* Code for char num 58. */
    0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x08,0x10,0x00,      /* Code for char num 59. */
    0x00,0x00,0x00,0x00,0x01,0x06,0x08,0x30,0x30,0x08,0x06,0x01,0x00,0x00,0x00,      /* Code for char num 60. */
    0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 61. */
    0x00,0x00,0x00,0x00,0x40,0x30,0x08,0x06,0x06,0x08,0x30,0x40,0x00,0x00,0x00,      /* Code for char num 62. */
    0x00,0x7C,0x42,0x42,0x02,0x04,0x08,0x10,0x10,0x00,0x10,0x10,0x00,0x00,0x00,      /* Code for char num 63. */
    0x00,0x1E,0x21,0x47,0x49,0x51,0x51,0x53,0x53,0x4D,0x65,0x3C,0x00,0x00,0x00,      /* Code for char num 64. */
    0x00,0x00,0x08,0x1C,0x14,0x14,0x22,0x22,0x7F,0x41,0x41,0x41,0x00,0x00,0x00,      /* Code for char num 65. */
    0x00,0x00,0x7C,0x42,0x42,0x44,0x78,0x44,0x42,0x42,0x42,0x7C,0x00,0x00,0x00,      /* Code for char num 66. */
    0x00,0x00,0x1F,0x60,0x40,0x80,0x80,0x80,0x80,0x40,0x60,0x1F,0x00,0x00,0x00,      /* Code for char num 67. */
    0x00,0x00,0x7C,0x42,0x41,0x41,0x41,0x41,0x41,0x41,0x42,0x7C,0x00,0x00,0x00,      /* Code for char num 68. */
    0x00,0x00,0x7F,0x40,0x40,0x40,0x40,0x7E,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,      /* Code for char num 69. */
    0x00,0x00,0x7F,0x40,0x40,0x40,0x40,0x7E,0x40,0x40,0x40,0x40,0x00,0x00,0x00,      /* Code for char num 70. */
    0x00,0x00,0x1F,0x60,0x40,0x80,0x80,0x87,0x81,0x41,0x61,0x1F,0x00,0x00,0x00,      /* Code for char num 71. */
    0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0x00,0x00,0x00,      /* Code for char num 72. */
    0x00,0x00,0x7F,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x7F,0x00,0x00,0x00,      /* Code for char num 73. */
    0x00,0x00,0x3C,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x78,0x00,0x00,0x00,      /* Code for char num 74. */
    0x00,0x00,0x42,0x44,0x48,0x50,0x60,0x50,0x48,0x44,0x42,0x41,0x00,0x00,0x00,      /* Code for char num 75. */
    0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,      /* Code for char num 76. */
    0x00,0x00,0xC6,0xC6,0xC6,0xAA,0xAA,0xAA,0xB2,0x92,0x82,0x82,0x00,0x00,0x00,      /* Code for char num 77. */
    0x00,0x00,0x41,0x61,0x51,0x51,0x49,0x49,0x45,0x45,0x43,0x41,0x00,0x00,0x00,      /* Code for char num 78. */
    0x00,0x00,0x3C,0x42,0x81,0x81,0x81,0x81,0x81,0x81,0x42,0x3C,0x00,0x00,0x00,      /* Code for char num 79. */
    0x00,0x00,0x7C,0x42,0x42,0x42,0x46,0x78,0x40,0x40,0x40,0x40,0x00,0x00,0x00,      /* Code for char num 80. */
    0x00,0x00,0x3C,0x42,0x81,0x81,0x81,0x81,0x81,0x81,0x42,0x3C,0x06,0x01,0x00,      /* Code for char num 81. */
    0x00,0x00,0x7C,0x42,0x42,0x42,0x44,0x78,0x48,0x44,0x42,0x41,0x00,0x00,0x00,      /* Code for char num 82. */
    0x00,0x00,0x3E,0x42,0x40,0x60,0x38,0x04,0x02,0x02,0x42,0x7C,0x00,0x00,0x00,      /* Code for char num 83. */
    0x00,0x00,0x7F,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,      /* Code for char num 84. */
    0x00,0x00,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x22,0x3C,0x00,0x00,0x00,      /* Code for char num 85. */
    0x00,0x00,0x41,0x41,0x41,0x41,0x22,0x22,0x14,0x14,0x1C,0x08,0x00,0x00,0x00,      /* Code for char num 86. */
    0x00,0x00,0x41,0x41,0x49,0x49,0x55,0x55,0x55,0x55,0x26,0x22,0x00,0x00,0x00,      /* Code for char num 87. */
    0x00,0x00,0x41,0x41,0x22,0x14,0x08,0x08,0x14,0x22,0x41,0x41,0x00,0x00,0x00,      /* Code for char num 88. */
    0x00,0x00,0x41,0x41,0x22,0x22,0x14,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,      /* Code for char num 89. */
    0x00,0x00,0xFF,0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0xFF,0x00,0x00,0x00,      /* Code for char num 90. */
    0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0x00,      /* Code for char num 91. */
    0x40,0x20,0x20,0x20,0x10,0x10,0x08,0x08,0x04,0x04,0x04,0x02,0x02,0x01,0x00,      /* Code for char num 92. */
    0x7C,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x7C,0x00,      /* Code for char num 93. */
    0x00,0x08,0x08,0x08,0x14,0x14,0x22,0x22,0x22,0x41,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 94. */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,      /* Code for char num 95. */
    0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 96. */
    0x00,0x00,0x00,0x00,0x3C,0x02,0x02,0x1E,0x22,0x42,0x46,0x3B,0x00,0x00,0x00,      /* Code for char num 97. */
    0x40,0x40,0x40,0x40,0x5E,0x62,0x41,0x41,0x41,0x41,0x62,0x5C,0x00,0x00,0x00,      /* Code for char num 98. */
    0x00,0x00,0x00,0x00,0x1F,0x20,0x40,0x40,0x40,0x40,0x20,0x1F,0x00,0x00,0x00,      /* Code for char num 99. */
    0x01,0x01,0x01,0x01,0x1D,0x23,0x41,0x41,0x41,0x41,0x23,0x3D,0x00,0x00,0x00,      /* Code for char num 100. */
    0x00,0x00,0x00,0x00,0x1C,0x22,0x42,0x7E,0x40,0x40,0x20,0x1E,0x00,0x00,0x00,      /* Code for char num 101. */
    0x0F,0x10,0x10,0x10,0x7F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,      /* Code for char num 102. */
    0x00,0x00,0x00,0x00,0x1D,0x23,0x41,0x41,0x41,0x41,0x23,0x3D,0x01,0x02,0x3C,      /* Code for char num 103. */
    0x40,0x40,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,      /* Code for char num 104. */
    0x18,0x18,0x00,0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,      /* Code for char num 105. */
    0x0C,0x0C,0x00,0x00,0x3C,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x78,      /* Code for char num 106. */
    0x40,0x40,0x40,0x40,0x42,0x44,0x48,0x70,0x50,0x48,0x44,0x42,0x00,0x00,0x00,      /* Code for char num 107. */
    0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,      /* Code for char num 108. */
    0x00,0x00,0x00,0x00,0x5B,0x6D,0x49,0x49,0x49,0x49,0x49,0x49,0x00,0x00,0x00,      /* Code for char num 109. */
    0x00,0x00,0x00,0x00,0x5C,0x62,0x42,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,      /* Code for char num 110. */
    0x00,0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,0x00,      /* Code for char num 111. */
    0x00,0x00,0x00,0x00,0x5E,0x62,0x41,0x41,0x41,0x41,0x62,0x5C,0x40,0x40,0x40,      /* Code for char num 112. */
    0x00,0x00,0x00,0x00,0x1D,0x23,0x41,0x41,0x41,0x41,0x23,0x3D,0x01,0x01,0x01,      /* Code for char num 113. */
    0x00,0x00,0x00,0x00,0x2F,0x31,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,      /* Code for char num 114. */
    0x00,0x00,0x00,0x00,0x3E,0x40,0x40,0x30,0x0C,0x02,0x42,0x7C,0x00,0x00,0x00,      /* Code for char num 115. */
    0x00,0x00,0x10,0x10,0x7F,0x10,0x10,0x10,0x10,0x10,0x10,0x0F,0x00,0x00,0x00,      /* Code for char num 116. */
    0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x46,0x3A,0x00,0x00,0x00,      /* Code for char num 117. */
    0x00,0x00,0x00,0x00,0x41,0x41,0x41,0x22,0x22,0x14,0x14,0x08,0x00,0x00,0x00,      /* Code for char num 118. */
    0x00,0x00,0x00,0x00,0x41,0x49,0x55,0x55,0x55,0x55,0x22,0x22,0x00,0x00,0x00,      /* Code for char num 119. */
    0x00,0x00,0x00,0x00,0x41,0x22,0x14,0x08,0x08,0x14,0x22,0x41,0x00,0x00,0x00,      /* Code for char num 120. */
    0x00,0x00,0x00,0x00,0x41,0x41,0x41,0x22,0x22,0x14,0x14,0x08,0x08,0x30,0x00,      /* Code for char num 121. */
    0x00,0x00,0x00,0x00,0x7F,0x01,0x02,0x04,0x08,0x10,0x20,0x7F,0x00,0x00,0x00,      /* Code for char num 122. */
    0x07,0x08,0x08,0x08,0x08,0x08,0x08,0x30,0x08,0x08,0x08,0x08,0x08,0x07,0x00,      /* Code for char num 123. */
    0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,      /* Code for char num 124. */
    0x70,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x08,0x08,0x08,0x08,0x08,0x70,0x00,      /* Code for char num 125. */
    0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x49,0x31,0x00,0x00,0x00,0x00,0x00,0x00,      /* Code for char num 126. */
    0x00,0x00,0x00,0xE0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xE0,0x00,0x00,0x00,0x00       /* Code for char num 127. */
};

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 840, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 870, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 900, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1110, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1125, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1155, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1200, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1290, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1305, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1350, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1380, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1395, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1410, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
};

static const lv_font_fmt_txt_cmap_t cmaps[] = {
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = LV_FONT_FMT_TXT_PLAIN,
    .cache = &cache
};

const lv_font_t lv_font_9x15 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
    .subpx = LV_FONT_SUBPX_NONE,
    .underline_position = 0,
    .underline_thickness = 0,
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};
