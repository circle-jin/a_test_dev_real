#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/pad/pad18_model_data.h"

const unsigned int g_pad18_model_data_size = 520;
alignas(16) const unsigned char g_pad18_model_data[] = {0x18,0x0,0x0,0x0,0x54,0x46,0x4c,0x33,0x0,0x0,0xe,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x58,0x0,0x0,0x0,0xc0,0x1,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xcc,0xfe,0xff,0xff,0x0,0x0,0x6,0x0,0x8,0x0,0x4,0x0,0x6,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xc,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x50,0x0,0x0,0x0,0x54,0x0,0x0,0x0,0x58,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x0,0x0,0x10,0x0,0xc,0x0,0xb,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x16,0xc,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x5c,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x9c,0x0,0x0,0x0,0x60,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xb6,0xff,0xff,0xff,0x10,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x24,0x0,0x0,0x0,0x74,0xff,0xff,0xff,0x8,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xc,0xfd,0x7d,0x3b,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xa6,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x10,0x0,0xf,0x0,0x8,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0xc,0x0,0x0,0x0,0x4,0x0,0x4,0x0,0x4,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x10,0x0,0xc,0x0,0xb,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x30,0x0,0x0,0x0,0xc,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xc,0xfd,0x7d,0x3b,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xa0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xc,0x0,0x10,0x0,0xf,0x0,0x0,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x22,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x22};
