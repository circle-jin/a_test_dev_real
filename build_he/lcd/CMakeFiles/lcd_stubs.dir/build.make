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
include lcd/CMakeFiles/lcd_stubs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lcd/CMakeFiles/lcd_stubs.dir/compiler_depend.make

# Include the progress variables for this target.
include lcd/CMakeFiles/lcd_stubs.dir/progress.make

# Include the compile flags for this target's objects.
include lcd/CMakeFiles/lcd_stubs.dir/flags.make

lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj: lcd/CMakeFiles/lcd_stubs.dir/flags.make
lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/glcd_stubs/glcd_stubs.c
lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj: lcd/CMakeFiles/lcd_stubs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj -MF CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj.d -o CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/glcd_stubs/glcd_stubs.c

lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/glcd_stubs/glcd_stubs.c > CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.i

lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/glcd_stubs/glcd_stubs.c -o CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.s

lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj: lcd/CMakeFiles/lcd_stubs.dir/flags.make
lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/lcd_img.c
lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj: lcd/CMakeFiles/lcd_stubs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj -MF CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj.d -o CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/lcd_img.c

lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lcd_stubs.dir/source/lcd_img.c.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/lcd_img.c > CMakeFiles/lcd_stubs.dir/source/lcd_img.c.i

lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lcd_stubs.dir/source/lcd_img.c.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && /home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd/source/lcd_img.c -o CMakeFiles/lcd_stubs.dir/source/lcd_img.c.s

# Object files for target lcd_stubs
lcd_stubs_OBJECTS = \
"CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj" \
"CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj"

# External object files for target lcd_stubs
lcd_stubs_EXTERNAL_OBJECTS =

lib/liblcd_stubs.a: lcd/CMakeFiles/lcd_stubs.dir/source/glcd_stubs/glcd_stubs.c.obj
lib/liblcd_stubs.a: lcd/CMakeFiles/lcd_stubs.dir/source/lcd_img.c.obj
lib/liblcd_stubs.a: lcd/CMakeFiles/lcd_stubs.dir/build.make
lib/liblcd_stubs.a: lcd/CMakeFiles/lcd_stubs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library ../lib/liblcd_stubs.a"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && $(CMAKE_COMMAND) -P CMakeFiles/lcd_stubs.dir/cmake_clean_target.cmake
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lcd_stubs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lcd/CMakeFiles/lcd_stubs.dir/build: lib/liblcd_stubs.a
.PHONY : lcd/CMakeFiles/lcd_stubs.dir/build

lcd/CMakeFiles/lcd_stubs.dir/clean:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd && $(CMAKE_COMMAND) -P CMakeFiles/lcd_stubs.dir/cmake_clean.cmake
.PHONY : lcd/CMakeFiles/lcd_stubs.dir/clean

lcd/CMakeFiles/lcd_stubs.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/lcd /home/alif_b_ml-embedded-evaluation-kit-main/build_he /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd /home/alif_b_ml-embedded-evaluation-kit-main/build_he/lcd/CMakeFiles/lcd_stubs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lcd/CMakeFiles/lcd_stubs.dir/depend

