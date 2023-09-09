# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# compile C with /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc
C_DEFINES = -DARMCM55 -DARM_ALL_FAST_TABLES -DARM_DSP_CONFIG_TABLES -DARM_FAST_ALLOW_TABLES -DARM_FFT_ALLOW_TABLES -DARM_MATH_LOOPUNROLL -DARM_NPU -DARM_TABLE_BITREVIDX_FLT_1024 -DARM_TABLE_BITREVIDX_FLT_256 -DARM_TABLE_BITREVIDX_FLT_512 -DARM_TABLE_BITREVIDX_FXT_1024 -DARM_TABLE_BITREVIDX_FXT_256 -DARM_TABLE_BITREVIDX_FXT_512 -DARM_TABLE_TWIDDLECOEF_F32_1024 -DARM_TABLE_TWIDDLECOEF_F32_256 -DARM_TABLE_TWIDDLECOEF_F32_512 -DARM_TABLE_TWIDDLECOEF_RFFT_F32_1024 -DARM_TABLE_TWIDDLECOEF_RFFT_F32_512 -DCONSOLE_UART=2 -DCPU_CORTEX_M55 -DCPU_HEADER_FILE=\"ARMCM55.h\" -DETHOSU -DETHOS_U_BASE_ADDR=0x400E1000 -DETHOS_U_IRQN=55 -DETHOS_U_NPU_MEMORY_MODE=ETHOS_U_NPU_MEMORY_MODE_SHARED_SRAM -DETHOS_U_PRIV_ENABLED=1 -DETHOS_U_SEC_ENABLED=1 -DLOG_LEVEL=LOG_LEVEL_DEBUG -DLV_CONF_INCLUDE_SIMPLE -DLV_LVGL_H_INCLUDE_SIMPLE -DM55_HE -DROTATE_DISPLAY=0 -DTARGET_BOARD=BOARD_DevKit

C_INCLUDES = -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Alif_CMSIS/Source -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/Arm-2D/Library/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-dsp/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/CMSIS/Core/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/Device/ARM/ARMCM55/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/boardlib -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config/M55_HE -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HE/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HE/Config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Alif_CMSIS/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/components/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include/RTSS-HE -I/home/alif_b_ml-embedded-evaluation-kit-main/source/log/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/platform_pmu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/core-driver/include -isystem /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/lvgl

C_FLAGS = -O2 -g -DNDEBUG -Wall -Wextra -Wvla -Wno-psabi -funsigned-char -fdata-sections -fno-function-sections -mthumb -mlittle-endian -MD -mfloat-abi=hard -mcpu=cortex-m55 -w -flax-vector-conversions --specs=nosys.specs -std=gnu11

