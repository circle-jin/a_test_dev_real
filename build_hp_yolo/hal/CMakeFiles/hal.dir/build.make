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
CMAKE_BINARY_DIR = /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo

# Include any dependencies generated for this target.
include hal/CMakeFiles/hal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include hal/CMakeFiles/hal.dir/compiler_depend.make

# Include the progress variables for this target.
include hal/CMakeFiles/hal.dir/progress.make

# Include the compile flags for this target's objects.
include hal/CMakeFiles/hal.dir/flags.make

hal/CMakeFiles/hal.dir/source/hal.c.obj: hal/CMakeFiles/hal.dir/flags.make
hal/CMakeFiles/hal.dir/source/hal.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal.c
hal/CMakeFiles/hal.dir/source/hal.c.obj: hal/CMakeFiles/hal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object hal/CMakeFiles/hal.dir/source/hal.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT hal/CMakeFiles/hal.dir/source/hal.c.obj -MF CMakeFiles/hal.dir/source/hal.c.obj.d -o CMakeFiles/hal.dir/source/hal.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal.c

hal/CMakeFiles/hal.dir/source/hal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hal.dir/source/hal.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal.c > CMakeFiles/hal.dir/source/hal.c.i

hal/CMakeFiles/hal.dir/source/hal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hal.dir/source/hal.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal.c -o CMakeFiles/hal.dir/source/hal.c.s

hal/CMakeFiles/hal.dir/source/hal_pmu.c.obj: hal/CMakeFiles/hal.dir/flags.make
hal/CMakeFiles/hal.dir/source/hal_pmu.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal_pmu.c
hal/CMakeFiles/hal.dir/source/hal_pmu.c.obj: hal/CMakeFiles/hal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object hal/CMakeFiles/hal.dir/source/hal_pmu.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT hal/CMakeFiles/hal.dir/source/hal_pmu.c.obj -MF CMakeFiles/hal.dir/source/hal_pmu.c.obj.d -o CMakeFiles/hal.dir/source/hal_pmu.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal_pmu.c

hal/CMakeFiles/hal.dir/source/hal_pmu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hal.dir/source/hal_pmu.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal_pmu.c > CMakeFiles/hal.dir/source/hal_pmu.c.i

hal/CMakeFiles/hal.dir/source/hal_pmu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hal.dir/source/hal_pmu.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/hal_pmu.c -o CMakeFiles/hal.dir/source/hal_pmu.c.s

hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj: hal/CMakeFiles/hal.dir/flags.make
hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c
hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj: hal/CMakeFiles/hal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj -MF CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj.d -o CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c

hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c > CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.i

hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c -o CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.s

# Object files for target hal
hal_OBJECTS = \
"CMakeFiles/hal.dir/source/hal.c.obj" \
"CMakeFiles/hal.dir/source/hal_pmu.c.obj" \
"CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj"

# External object files for target hal
hal_EXTERNAL_OBJECTS =

lib/libhal.a: hal/CMakeFiles/hal.dir/source/hal.c.obj
lib/libhal.a: hal/CMakeFiles/hal.dir/source/hal_pmu.c.obj
lib/libhal.a: hal/CMakeFiles/hal.dir/source/components/npu/ethosu_cpu_cache.c.obj
lib/libhal.a: hal/CMakeFiles/hal.dir/build.make
lib/libhal.a: hal/CMakeFiles/hal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../lib/libhal.a"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && $(CMAKE_COMMAND) -P CMakeFiles/hal.dir/cmake_clean_target.cmake
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
hal/CMakeFiles/hal.dir/build: lib/libhal.a
.PHONY : hal/CMakeFiles/hal.dir/build

hal/CMakeFiles/hal.dir/clean:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal && $(CMAKE_COMMAND) -P CMakeFiles/hal.dir/cmake_clean.cmake
.PHONY : hal/CMakeFiles/hal.dir/clean

hal/CMakeFiles/hal.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/source/hal /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/hal/CMakeFiles/hal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hal/CMakeFiles/hal.dir/depend

