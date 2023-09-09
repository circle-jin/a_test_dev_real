# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# compile C with /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc
C_DEFINES = -DARMCM55 -DARM_NPU -DCONSOLE_UART=4 -DCPU_CORTEX_M55 -DCPU_HEADER_FILE=\"ARMCM55.h\" -DETHOSU -DETHOS_U_BASE_ADDR=0x400E1000 -DETHOS_U_IRQN=55 -DETHOS_U_NPU_MEMORY_MODE=ETHOS_U_NPU_MEMORY_MODE_SHARED_SRAM -DETHOS_U_PRIV_ENABLED=1 -DETHOS_U_SEC_ENABLED=1 -DLOG_LEVEL=LOG_LEVEL_DEBUG -DLV_CONF_INCLUDE_SIMPLE -DLV_LVGL_H_INCLUDE_SIMPLE -DM55_HP -DTARGET_BOARD=BOARD_AppKit_Alpha2

C_INCLUDES = -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/log/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/stdout/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source/ensemble -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include/RTSS-HP -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/platform_pmu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Alif_CMSIS/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/components/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/boardlib -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/CMSIS/Core/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/Device/ARM/ARMCM55/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config/M55_HP -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HP/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HP/Config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/core-driver/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/include -isystem /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/lvgl

C_FLAGS = -O2 -g -DNDEBUG -Wall -Wextra -Wvla -Wno-psabi -funsigned-char -fdata-sections -fno-function-sections -mthumb -mlittle-endian -MD -mfloat-abi=hard -mcpu=cortex-m55 --specs=nosys.specs -std=c99

