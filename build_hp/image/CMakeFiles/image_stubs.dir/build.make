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
include image/CMakeFiles/image_stubs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include image/CMakeFiles/image_stubs.dir/compiler_depend.make

# Include the progress variables for this target.
include image/CMakeFiles/image_stubs.dir/progress.make

# Include the compile flags for this target's objects.
include image/CMakeFiles/image_stubs.dir/flags.make

image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj: image/CMakeFiles/image_stubs.dir/flags.make
image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/image_stubs/image_stubs.c
image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj: image/CMakeFiles/image_stubs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj -MF CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj.d -o CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/image_stubs/image_stubs.c

image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/image_stubs/image_stubs.c > CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.i

image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image/source/image_stubs/image_stubs.c -o CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.s

# Object files for target image_stubs
image_stubs_OBJECTS = \
"CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj"

# External object files for target image_stubs
image_stubs_EXTERNAL_OBJECTS =

lib/libimage_stubs.a: image/CMakeFiles/image_stubs.dir/source/image_stubs/image_stubs.c.obj
lib/libimage_stubs.a: image/CMakeFiles/image_stubs.dir/build.make
lib/libimage_stubs.a: image/CMakeFiles/image_stubs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../lib/libimage_stubs.a"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && $(CMAKE_COMMAND) -P CMakeFiles/image_stubs.dir/cmake_clean_target.cmake
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/image_stubs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
image/CMakeFiles/image_stubs.dir/build: lib/libimage_stubs.a
.PHONY : image/CMakeFiles/image_stubs.dir/build

image/CMakeFiles/image_stubs.dir/clean:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image && $(CMAKE_COMMAND) -P CMakeFiles/image_stubs.dir/cmake_clean.cmake
.PHONY : image/CMakeFiles/image_stubs.dir/clean

image/CMakeFiles/image_stubs.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/image /home/alif_b_ml-embedded-evaluation-kit-main/build_hp /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/image/CMakeFiles/image_stubs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : image/CMakeFiles/image_stubs.dir/depend

