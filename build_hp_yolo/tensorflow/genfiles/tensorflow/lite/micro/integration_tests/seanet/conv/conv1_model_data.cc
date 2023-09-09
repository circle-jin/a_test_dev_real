#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv1_model_data.h"

const unsigned int g_conv1_model_data_size = 1576;
alignas(16) const unsigned char g_conv1_model_data[] = {0x18,0x0,0x0,0x0,0x54,0x46,0x4c,0x33,0x0,0x0,0xe,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xcc,0x2,0x0,0x0,0xe0,0x5,0x0,0x0,0x3,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xb8,0x2,0x0,0x0,0x64,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x5c,0xfd,0xff,0xff,0xb2,0xff,0xff,0xff,0x4,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x88,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x52,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x48,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xb2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0x0,0x8,0x0,0x4,0x0,0x6,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x40,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xec,0x1,0x2,0xba,0x1,0x1,0x0,0x4,0x4,0x1,0x1,0xd7,0x0,0x0,0xcb,0x1,0x2,0x0,0x1,0x91,0x4,0x3,0x8,0xbb,0x0,0x4,0x1,0x3,0x1,0x2,0x3,0x5,0x3,0x6,0x4,0x1,0x6,0x5,0x0,0x4,0x6,0x6,0x3,0x1,0x89,0x3,0x6,0x14,0xa8,0x1c,0x11,0x89,0x2c,0x6,0x44,0x8d,0x1f,0x30,0x39,0x21,0xc0,0xc5,0x18,0x2,0x1e,0x11,0xc,0x3,0x93,0x0,0x0,0x1,0x2,0x1,0x2,0xd1,0x1,0x2,0x3,0x1,0xb,0x6,0x0,0x2,0xef,0x0,0xea,0x1,0x3,0x0,0x0,0xa2,0xe,0x15,0xae,0x7,0xa8,0x6,0x2,0xa1,0xf,0x5,0xf,0x4,0x11,0x14,0x2,0x1,0x4,0x9,0xa,0x8b,0xa,0x10,0x95,0x82,0x15,0x2d,0x13,0x8d,0x17,0x22,0xbe,0x23,0x88,0x36,0x77,0x7d,0x67,0x5d,0x2a,0x99,0x77,0x95,0x9,0x6,0x3a,0x15,0x6,0x1,0x0,0x9a,0x0,0x0,0x3,0x0,0x0,0x0,0x5,0x9,0x0,0xea,0xa,0x4,0x9f,0x0,0x0,0x3,0x0,0xe2,0x2,0x0,0x87,0x4,0x2,0xbd,0x3,0xfa,0x7,0xee,0xe6,0x0,0x9,0x10,0xb7,0x5,0x11,0x10,0x98,0x5,0x8e,0xd,0xf1,0xf,0x3,0x1,0x0,0x10,0x0,0x28,0x6,0xc,0xc5,0x3,0x0,0x22,0x5,0x65,0x34,0x87,0x48,0x18,0x1a,0xd,0x2,0x60,0x12,0xbd,0x0,0x2,0xaf,0x0,0x3,0x2,0x3,0x82,0x3,0x0,0x0,0x96,0x2,0xc0,0x3,0x3,0x6,0x0,0x1,0xa8,0x4,0x1,0x0,0xc2,0x0,0x1,0x0,0x2,0x7,0xb,0x2,0x2,0xb,0xea,0xb6,0x4,0x3,0x5,0x5,0x5,0x8,0x2,0xa4,0x3,0x4,0xcd,0x0,0x2,0x7,0x6,0x0,0x15,0xf2,0xc6,0xa9,0x28,0xb6,0x0,0x1b,0x15,0xa,0x0,0xe5,0x4d,0x1,0x17,0x27,0xa8,0x29,0xe,0xb,0xc,0x9e,0xc,0x35,0x0,0x0,0x3,0x0,0x0,0xe6,0xdf,0x0,0xb9,0x3,0x9,0x0,0x2,0x2,0x0,0x1,0x9b,0x2,0x2,0xb3,0x1,0x0,0xf9,0x0,0x3,0x0,0x4,0x4,0xa1,0x0,0x0,0x0,0x5,0x1,0xc,0x3,0xa1,0xb,0x5,0x0,0x1,0xa7,0x8,0x6,0xbb,0x1,0x0,0x3,0x5,0x5,0x13,0xe,0x7,0x9d,0x2,0xe,0xa6,0x6d,0x2f,0x19,0x14,0x55,0x1a,0xd,0xd5,0x12,0x28,0xa,0x9f,0xe,0x8,0x7a,0xe1,0x4,0x0,0x1,0x0,0x4,0x1,0x0,0x3,0x86,0x2,0xc0,0x4,0xbe,0x0,0x5,0x2,0x0,0x5,0xe6,0x5,0x3,0xe2,0x1,0x4,0x5,0xd,0x9,0xd7,0x0,0x4,0xf2,0x7,0x0,0x9,0x2,0xe,0x2,0xa,0x4,0xbf,0x23,0x5,0xa0,0xc,0xa,0xb,0x4,0x1c,0xd8,0x11,0xb,0xb,0xad,0x12,0x20,0xca,0x18,0xc,0x7c,0xec,0x19,0x3d,0x3c,0x4d,0x81,0x12,0xaa,0x23,0x17,0x19,0x1c,0x3,0x0,0x3,0x0,0xf5,0x2,0xe3,0x1,0x3,0xf0,0x0,0x6,0x0,0x6,0x0,0x0,0x6,0xd8,0x2,0x0,0x0,0x2,0x2,0x0,0x8,0x3,0x11,0x1,0x0,0x0,0xcd,0x0,0xad,0x16,0x6,0x6,0x2,0x1,0xe0,0x9,0xc5,0xd,0xc4,0x9,0x9b,0x6,0x2,0x7,0x3,0x1c,0xf8,0x2e,0xa8,0x1e,0xea,0xc9,0x21,0xd,0x10,0x75,0xb0,0x3e,0x1a,0xf,0x3,0x19,0x8,0x15,0x4,0x18,0xc,0x13,0x5,0x0,0x0,0x8e,0x0,0x7,0xa3,0x97,0x0,0xbc,0xfa,0x2,0x3,0xe6,0x1,0x2,0x1,0x80,0x0,0x1,0x0,0x1,0xa8,0x4,0x5,0x3,0xd,0xd1,0x3,0x9b,0xc6,0x3,0xf0,0x11,0xdb,0x8,0xd5,0x7,0x4,0x1,0xf,0xed,0x90,0x1,0x1,0x2,0x0,0xa,0x2,0x1c,0xb2,0x13,0x7,0x21,0x95,0xd9,0x36,0x77,0xc7,0x92,0x59,0x82,0x13,0x3a,0x2e,0x3,0x3,0xd,0x13,0x31,0x15,0x1a,0x4,0x0,0x4,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x48,0xfd,0xff,0xff,0x10,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,0x70,0x0,0x0,0x0,0x74,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x16,0x0,0x0,0x0,0x10,0x0,0xc,0x0,0xb,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x24,0x0,0x0,0x0,0x28,0x0,0x0,0x0,0x0,0x0,0xa,0x0,0x10,0x0,0xf,0x0,0x8,0x0,0x4,0x0,0xa,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x20,0x2,0x0,0x0,0x1c,0x1,0x0,0x0,0x6c,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xfe,0xfe,0xff,0xff,0x10,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x40,0x0,0x0,0x0,0xf4,0xfd,0xff,0xff,0x10,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x24,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4f,0xeb,0xea,0x3b,0x1,0x0,0x0,0x0,0x79,0xe9,0x6a,0x43,0x1,0x0,0x0,0x0,0x49,0xd5,0x3,0xc1,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xa0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x62,0xff,0xff,0xff,0x1c,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x84,0x0,0x0,0x0,0xc,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x48,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x91,0x2e,0xf,0x38,0x1e,0xa4,0xd0,0x37,0x27,0x1d,0x15,0x38,0xd6,0x3d,0x4,0x38,0xe6,0x52,0x3c,0x38,0xe9,0x84,0xc0,0x37,0x63,0x95,0x11,0x38,0x7c,0x10,0xd0,0x37,0x1,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x10,0x0,0xf,0x0,0x8,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x9,0xcc,0x0,0x0,0x0,0x4,0xff,0xff,0xff,0x10,0x0,0x0,0x0,0x54,0x0,0x0,0x0,0x74,0x0,0x0,0x0,0x94,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0xea,0x40,0x7c,0x3c,0xef,0xc9,0x37,0x3c,0x28,0x5a,0x83,0x3c,0xac,0xfa,0x68,0x3c,0x42,0xe4,0xa5,0x3c,0x57,0x96,0x29,0x3c,0xb,0x3e,0x80,0x3c,0xe3,0x47,0x37,0x3c,0x8,0x0,0x0,0x0,0x68,0x48,0xfa,0x3f,0x5b,0x5a,0xb6,0x3f,0x74,0x53,0x2,0x40,0xb7,0x28,0xe7,0x3f,0x79,0x98,0x24,0x40,0x2a,0x43,0xa8,0x3f,0x1d,0x7b,0xfe,0x3f,0x53,0xd9,0xb5,0x3f,0x8,0x0,0x0,0x0,0xc3,0x74,0x11,0xbf,0x4,0xa8,0x46,0xbf,0x8f,0xc0,0xd5,0xbe,0x8a,0xc4,0xca,0xbe,0xda,0x7d,0x5d,0xbf,0x3a,0xb5,0x3d,0xbf,0xed,0xec,0x64,0xbe,0x14,0xfc,0xfe,0xbe,0x4,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x10,0x0,0xc,0x0,0xb,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x48,0x0,0x0,0x0,0xc,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xf4,0x4e,0x11,0x3b,0x1,0x0,0x0,0x0,0xd1,0x4d,0x91,0x42,0x1,0x0,0x0,0x0,0x9e,0x27,0xb9,0xc1,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xa2,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xc,0x0,0x10,0x0,0xf,0x0,0x0,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x3};