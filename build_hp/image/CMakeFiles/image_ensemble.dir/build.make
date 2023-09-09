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

# Include any dependencies generated for this target.
include image/CMakeFiles/image_ensemble.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include image/CMakeFiles/image_ensemble.dir/compiler_depend.make

# Include the progress variables for this target.
include image/CMakeFiles/image_ensemble.dir/progress.make

# Include the compile flags for this target's objects.
include image/CMakeFiles/image_ensemble.dir/flags.make

image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj: image/CMakeFiles/image_ensemble.dir/flags.make
image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/image_ensemble.c
image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj: image/CMakeFiles/image_ensemble.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj -MF CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj.d -o CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/image_ensemble.c

image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/image_ensemble.c > CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.i

image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/image_ensemble.c -o CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.s

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj: image/CMakeFiles/image_ensemble.dir/flags.make
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/bayer2rgb.c
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj: image/CMakeFiles/image_ensemble.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj -MF CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj.d -o CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/bayer2rgb.c

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/bayer2rgb.c > CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.i

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/bayer2rgb.c -o CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.s

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj: image/CMakeFiles/image_ensemble.dir/flags.make
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/image_processing.c
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj: image/CMakeFiles/image_ensemble.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj -MF CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj.d -o CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/image_processing.c

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/image_processing.c > CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.i

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/image_processing.c -o CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.s

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj: image/CMakeFiles/image_ensemble.dir/flags.make
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/color_correction.c
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj: image/CMakeFiles/image_ensemble.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj -MF CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj.d -o CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/color_correction.c

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/color_correction.c > CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.i

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/color_correction.c -o CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.s

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj: image/CMakeFiles/image_ensemble.dir/flags.make
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/camera.c
image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj: image/CMakeFiles/image_ensemble.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj -MF CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj.d -o CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/camera.c

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/camera.c > CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.i

image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/ensemble/src/camera.c -o CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.s

# Object files for target image_ensemble
image_ensemble_OBJECTS = \
"CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj" \
"CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj" \
"CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj" \
"CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj" \
"CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj"

# External object files for target image_ensemble
image_ensemble_EXTERNAL_OBJECTS =

lib/libimage_ensemble.a: image/CMakeFiles/image_ensemble.dir/source/ensemble/image_ensemble.c.obj
lib/libimage_ensemble.a: image/CMakeFiles/image_ensemble.dir/source/ensemble/src/bayer2rgb.c.obj
lib/libimage_ensemble.a: image/CMakeFiles/image_ensemble.dir/source/ensemble/src/image_processing.c.obj
lib/libimage_ensemble.a: image/CMakeFiles/image_ensemble.dir/source/ensemble/src/color_correction.c.obj
lib/libimage_ensemble.a: image/CMakeFiles/image_ensemble.dir/source/ensemble/src/camera.c.obj
lib/libimage_ensemble.a: image/CMakeFiles/image_ensemble.dir/build.make
lib/libimage_ensemble.a: image/CMakeFiles/image_ensemble.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C static library ../lib/libimage_ensemble.a"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && $(CMAKE_COMMAND) -P CMakeFiles/image_ensemble.dir/cmake_clean_target.cmake
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/image_ensemble.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
image/CMakeFiles/image_ensemble.dir/build: lib/libimage_ensemble.a
.PHONY : image/CMakeFiles/image_ensemble.dir/build

image/CMakeFiles/image_ensemble.dir/clean:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && $(CMAKE_COMMAND) -P CMakeFiles/image_ensemble.dir/cmake_clean.cmake
.PHONY : image/CMakeFiles/image_ensemble.dir/clean

image/CMakeFiles/image_ensemble.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image /home/alif_b_ml-embedded-evaluation-kit-main/build_hp /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image/CMakeFiles/image_ensemble.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : image/CMakeFiles/image_ensemble.dir/depend

