# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ml-embedded-evaluation-kit/resources_downloaded/env/lib/python3.9/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/ml-embedded-evaluation-kit/resources_downloaded/env/lib/python3.9/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alif_b_ml-embedded-evaluation-kit-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alif_b_ml-embedded-evaluation-kit-main/build_he

# Include any dependencies generated for this target.
include CMakeFiles/alif_vww.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/alif_vww.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/alif_vww.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alif_vww.dir/flags.make

CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj: CMakeFiles/alif_vww.dir/flags.make
CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc
CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj: CMakeFiles/alif_vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj -MF CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj.d -o CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc

CMakeFiles/alif_vww.dir/source/application/main/Main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alif_vww.dir/source/application/main/Main.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc > CMakeFiles/alif_vww.dir/source/application/main/Main.cc.i

CMakeFiles/alif_vww.dir/source/application/main/Main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alif_vww.dir/source/application/main/Main.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc -o CMakeFiles/alif_vww.dir/source/application/main/Main.cc.s

CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/alif_vww.dir/flags.make
CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc
CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/alif_vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj -MF CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj.d -o CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc

CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc > CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.i

CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc -o CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.s

CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj: CMakeFiles/alif_vww.dir/flags.make
CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/MainLoop.cc
CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj: CMakeFiles/alif_vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DSHOW_PROFILING=0 -DSKIP_MODEL=0 $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj -MF CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj.d -o CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/MainLoop.cc

CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DSHOW_PROFILING=0 -DSKIP_MODEL=0 $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/MainLoop.cc > CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.i

CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DSHOW_PROFILING=0 -DSKIP_MODEL=0 $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/MainLoop.cc -o CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.s

CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj: CMakeFiles/alif_vww.dir/flags.make
CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/UseCaseHandler.cc
CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj: CMakeFiles/alif_vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DSHOW_PROFILING=0 -DSKIP_MODEL=0 $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj -MF CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj.d -o CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/UseCaseHandler.cc

CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DSHOW_PROFILING=0 -DSKIP_MODEL=0 $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/UseCaseHandler.cc > CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.i

CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DSHOW_PROFILING=0 -DSKIP_MODEL=0 $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/alif_vww/src/UseCaseHandler.cc -o CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.s

CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj: CMakeFiles/alif_vww.dir/flags.make
CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj: generated/alif_vww/src/Labels.cc
CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj: CMakeFiles/alif_vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj -MF CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj.d -o CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/alif_vww/src/Labels.cc

CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/alif_vww/src/Labels.cc > CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.i

CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/alif_vww/src/Labels.cc -o CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.s

CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj: CMakeFiles/alif_vww.dir/flags.make
CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj: generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc
CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj: CMakeFiles/alif_vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj -MF CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj.d -o CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc

CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc > CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.i

CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc -o CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.s

CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/alif_vww.dir/flags.make
CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c
CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/alif_vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -MF CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj.d -o CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c

CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c > CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i

CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c -o CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s

# Object files for target alif_vww
alif_vww_OBJECTS = \
"CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj" \
"CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj" \
"CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj" \
"CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj" \
"CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj" \
"CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj" \
"CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"

# External object files for target alif_vww
alif_vww_EXTERNAL_OBJECTS =

lib/libalif_vww.a: CMakeFiles/alif_vww.dir/source/application/main/Main.cc.obj
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/source/application/main/UseCaseCommonUtils.cc.obj
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/MainLoop.cc.obj
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/source/use_case/alif_vww/src/UseCaseHandler.cc.obj
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/generated/alif_vww/src/Labels.cc.obj
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/generated/alif_vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/build.make
lib/libalif_vww.a: CMakeFiles/alif_vww.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library lib/libalif_vww.a"
	$(CMAKE_COMMAND) -P CMakeFiles/alif_vww.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/alif_vww.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alif_vww.dir/build: lib/libalif_vww.a
.PHONY : CMakeFiles/alif_vww.dir/build

CMakeFiles/alif_vww.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/alif_vww.dir/cmake_clean.cmake
.PHONY : CMakeFiles/alif_vww.dir/clean

CMakeFiles/alif_vww.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/build_he /home/alif_b_ml-embedded-evaluation-kit-main/build_he /home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles/alif_vww.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/alif_vww.dir/depend

