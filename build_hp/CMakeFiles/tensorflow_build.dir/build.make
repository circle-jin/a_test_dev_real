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
CMAKE_BINARY_DIR = /home/alif_b_ml-embedded-evaluation-kit-main/build_hp

# Utility rule file for tensorflow_build.

# Include any custom commands dependencies for this target.
include CMakeFiles/tensorflow_build.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tensorflow_build.dir/progress.make

CMakeFiles/tensorflow_build:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building TensorFlow Lite Micro library..."
	cd /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow && /home/ml-embedded-evaluation-kit/resources_downloaded/env/lib/python3.9/site-packages/cmake/data/bin/cmake -E env PATH=/home/alif_b_ml-embedded-evaluation-kit-main/resources_downloaded/env/bin:/home/gcc-arm-none-eabi-10.3-2021.10/bin:/home/ml-embedded-evaluation-kit/resources_downloaded/env/bin:/root/.vscode-server/bin/6c3e3dba23e8fadc360aed75ce363ba185c49794/bin/remote-cli:/home/gcc-arm-none-eabi-10.3-2021.10/bin:/home/ml-embedded-evaluation-kit/resources_downloaded/env/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin make -j8 -f /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow/tensorflow/lite/micro/tools/make/Makefile clean microlite TARGET_TOOLCHAIN_ROOT=/home/gcc-arm-none-eabi-10.3-2021.10/bin/ TOOLCHAIN=gcc GENDIR=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/tensorflow/ TARGET=cortex_m_generic TARGET_ARCH=cortex-m55 BUILD_TYPE=release_with_logs CMSIS_PATH=/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis CMSIS_NN_PATH=/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/cmsis-nn ETHOSU_ARCH=u55 ETHOSU_DRIVER_PATH=/home/alif_b_ml-embedded-evaluation-kit-main/dependencies/core-driver ETHOSU_DRIVER_LIBS=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/lib/libethosu_core_driver.a CORE_OPTIMIZATION_LEVEL=-Ofast KERNEL_OPTIMIZATION_LEVEL=-Ofast THIRD_PARTY_KERNEL_OPTIMIZATION_LEVEL=-Ofast OPTIMIZED_KERNEL_DIR=cmsis_nn CO_PROCESSOR=ethos_u
	cd /home/alif_b_ml-embedded-evaluation-kit-main/dependencies/tensorflow && /home/ml-embedded-evaluation-kit/resources_downloaded/env/lib/python3.9/site-packages/cmake/data/bin/cmake -E copy /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/tensorflow//lib/libtensorflow-microlite.a /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/lib/libtensorflow-microlite.a

tensorflow_build: CMakeFiles/tensorflow_build
tensorflow_build: CMakeFiles/tensorflow_build.dir/build.make
.PHONY : tensorflow_build

# Rule to build all files generated by this target.
CMakeFiles/tensorflow_build.dir/build: tensorflow_build
.PHONY : CMakeFiles/tensorflow_build.dir/build

CMakeFiles/tensorflow_build.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tensorflow_build.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tensorflow_build.dir/clean

CMakeFiles/tensorflow_build.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/build_hp /home/alif_b_ml-embedded-evaluation-kit-main/build_hp /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles/tensorflow_build.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tensorflow_build.dir/depend

