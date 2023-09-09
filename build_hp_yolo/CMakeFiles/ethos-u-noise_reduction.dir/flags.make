# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# compile C with /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc
# compile CXX with /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++
C_DEFINES = -DACTIVATION_BUF_SZ=0x00200000 -DARMCM55 -DARM_ALL_FAST_TABLES -DARM_DSP_CONFIG_TABLES -DARM_FAST_ALLOW_TABLES -DARM_FFT_ALLOW_TABLES -DARM_MATH_LOOPUNROLL -DARM_NPU -DARM_TABLE_BITREVIDX_FLT_1024 -DARM_TABLE_BITREVIDX_FLT_256 -DARM_TABLE_BITREVIDX_FLT_512 -DARM_TABLE_BITREVIDX_FXT_1024 -DARM_TABLE_BITREVIDX_FXT_256 -DARM_TABLE_BITREVIDX_FXT_512 -DARM_TABLE_TWIDDLECOEF_F32_1024 -DARM_TABLE_TWIDDLECOEF_F32_256 -DARM_TABLE_TWIDDLECOEF_F32_512 -DARM_TABLE_TWIDDLECOEF_RFFT_F32_1024 -DARM_TABLE_TWIDDLECOEF_RFFT_F32_512 -DCONSOLE_UART=4 -DCPU_CORTEX_M55 -DCPU_HEADER_FILE=\"ARMCM55.h\" -DETHOSU -DETHOS_U_BASE_ADDR=0x400E1000 -DETHOS_U_IRQN=55 -DETHOS_U_NPU_MEMORY_MODE=ETHOS_U_NPU_MEMORY_MODE_SHARED_SRAM -DETHOS_U_PRIV_ENABLED=1 -DETHOS_U_SEC_ENABLED=1 -DLOG_LEVEL=LOG_LEVEL_DEBUG -DLV_CONF_INCLUDE_SIMPLE -DLV_LVGL_H_INCLUDE_SIMPLE -DM55_HP -DTARGET_BOARD=BOARD_AppKit_Alpha2 -DTF_LITE_STATIC_MEMORY

C_INCLUDES = -I/home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/include -I/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/noise_reduction/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/log/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/math/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-dsp/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/CMSIS/Core/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/stdout/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source/ensemble -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include/RTSS-HP -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/platform_pmu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Alif_CMSIS/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/components/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/boardlib -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/Device/ARM/ARMCM55/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config/M55_HP -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HP/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HP/Config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/core-driver/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/profiler/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/common/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow/tensorflow/lite/micro/tools/make/downloads/flatbuffers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow/tensorflow/lite/micro/tools/make/downloads/gemmlowp -I/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/noise_reduction/include -isystem /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/lvgl -isystem /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow

C_FLAGS = -O2 -g -DNDEBUG -Wall -Wextra -Wvla -Wno-psabi -funsigned-char -fdata-sections -fno-function-sections -mthumb -mlittle-endian -MD -mfloat-abi=hard -mcpu=cortex-m55 -flax-vector-conversions --specs=nosys.specs -std=c99

CXX_DEFINES = -DACTIVATION_BUF_SZ=0x00200000 -DARMCM55 -DARM_ALL_FAST_TABLES -DARM_DSP_CONFIG_TABLES -DARM_FAST_ALLOW_TABLES -DARM_FFT_ALLOW_TABLES -DARM_MATH_LOOPUNROLL -DARM_NPU -DARM_TABLE_BITREVIDX_FLT_1024 -DARM_TABLE_BITREVIDX_FLT_256 -DARM_TABLE_BITREVIDX_FLT_512 -DARM_TABLE_BITREVIDX_FXT_1024 -DARM_TABLE_BITREVIDX_FXT_256 -DARM_TABLE_BITREVIDX_FXT_512 -DARM_TABLE_TWIDDLECOEF_F32_1024 -DARM_TABLE_TWIDDLECOEF_F32_256 -DARM_TABLE_TWIDDLECOEF_F32_512 -DARM_TABLE_TWIDDLECOEF_RFFT_F32_1024 -DARM_TABLE_TWIDDLECOEF_RFFT_F32_512 -DCONSOLE_UART=4 -DCPU_CORTEX_M55 -DCPU_HEADER_FILE=\"ARMCM55.h\" -DETHOSU -DETHOS_U_BASE_ADDR=0x400E1000 -DETHOS_U_IRQN=55 -DETHOS_U_NPU_MEMORY_MODE=ETHOS_U_NPU_MEMORY_MODE_SHARED_SRAM -DETHOS_U_PRIV_ENABLED=1 -DETHOS_U_SEC_ENABLED=1 -DLOG_LEVEL=LOG_LEVEL_DEBUG -DLV_CONF_INCLUDE_SIMPLE -DLV_LVGL_H_INCLUDE_SIMPLE -DM55_HP -DTARGET_BOARD=BOARD_AppKit_Alpha2 -DTF_LITE_STATIC_MEMORY

CXX_INCLUDES = -I/home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/include -I/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/noise_reduction/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/log/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/math/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-dsp/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/CMSIS/Core/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/stdout/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source/ensemble -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/audio/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/include/RTSS-HP -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/platform_pmu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Alif_CMSIS/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/components/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/boardlib -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis/Device/ARM/ARMCM55/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/cmsis-pack/config/M55_HP -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HP/Include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-ensemble/Device/M55_HP/Config -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/drivers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/platform/ensemble/services_lib/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/core-driver/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/source/ensemble/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lvgl_port/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/profiler/include -I/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/common/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow/tensorflow/lite/micro/tools/make/downloads/flatbuffers/include -I/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow/tensorflow/lite/micro/tools/make/downloads/gemmlowp -I/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/noise_reduction/include -isystem /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/lvgl -isystem /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow

CXX_FLAGS = -O2 -g -DNDEBUG -Wall -Wextra -Wvla -Wno-psabi -funsigned-char -fdata-sections -fno-function-sections -fno-unwind-tables -fno-rtti -fno-exceptions -mthumb -mlittle-endian -MD -mfloat-abi=hard -mcpu=cortex-m55 -flax-vector-conversions --specs=nosys.specs -std=c++14

# Custom defines: CMakeFiles/ethos-u-noise_reduction.dir/source/application/main/Main.cc.obj_DEFINES = PRJ_VER_STR="23.05.0";PRJ_DES_STR="ARM ML Embedded Evaluation Kit"

