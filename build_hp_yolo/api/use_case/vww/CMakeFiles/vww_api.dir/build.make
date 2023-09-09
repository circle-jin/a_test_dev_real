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
include api/use_case/vww/CMakeFiles/vww_api.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include api/use_case/vww/CMakeFiles/vww_api.dir/compiler_depend.make

# Include the progress variables for this target.
include api/use_case/vww/CMakeFiles/vww_api.dir/progress.make

# Include the compile flags for this target's objects.
include api/use_case/vww/CMakeFiles/vww_api.dir/flags.make

api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj: api/use_case/vww/CMakeFiles/vww_api.dir/flags.make
api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordProcessing.cc
api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj: api/use_case/vww/CMakeFiles/vww_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj -MF CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj.d -o CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordProcessing.cc

api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordProcessing.cc > CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.i

api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordProcessing.cc -o CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.s

api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj: api/use_case/vww/CMakeFiles/vww_api.dir/flags.make
api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordModel.cc
api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj: api/use_case/vww/CMakeFiles/vww_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj -MF CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj.d -o CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordModel.cc

api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordModel.cc > CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.i

api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/src/VisualWakeWordModel.cc -o CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.s

api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj: api/use_case/vww/CMakeFiles/vww_api.dir/flags.make
api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c
api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj: api/use_case/vww/CMakeFiles/vww_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj -MF CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj.d -o CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c

api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c > CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.i

api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c -o CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.s

# Object files for target vww_api
vww_api_OBJECTS = \
"CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj" \
"CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj" \
"CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj"

# External object files for target vww_api
vww_api_EXTERNAL_OBJECTS =

lib/libvww_api.a: api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordProcessing.cc.obj
lib/libvww_api.a: api/use_case/vww/CMakeFiles/vww_api.dir/src/VisualWakeWordModel.cc.obj
lib/libvww_api.a: api/use_case/vww/CMakeFiles/vww_api.dir/__/__/__/__/hal/source/components/npu/ethosu_cpu_cache.c.obj
lib/libvww_api.a: api/use_case/vww/CMakeFiles/vww_api.dir/build.make
lib/libvww_api.a: api/use_case/vww/CMakeFiles/vww_api.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../../lib/libvww_api.a"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && $(CMAKE_COMMAND) -P CMakeFiles/vww_api.dir/cmake_clean_target.cmake
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vww_api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
api/use_case/vww/CMakeFiles/vww_api.dir/build: lib/libvww_api.a
.PHONY : api/use_case/vww/CMakeFiles/vww_api.dir/build

api/use_case/vww/CMakeFiles/vww_api.dir/clean:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww && $(CMAKE_COMMAND) -P CMakeFiles/vww_api.dir/cmake_clean.cmake
.PHONY : api/use_case/vww/CMakeFiles/vww_api.dir/clean

api/use_case/vww/CMakeFiles/vww_api.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/api/use_case/vww/CMakeFiles/vww_api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : api/use_case/vww/CMakeFiles/vww_api.dir/depend

