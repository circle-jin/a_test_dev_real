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
include CMakeFiles/vww.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vww.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vww.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vww.dir/flags.make

CMakeFiles/vww.dir/source/application/main/Main.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/source/application/main/Main.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc
CMakeFiles/vww.dir/source/application/main/Main.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vww.dir/source/application/main/Main.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/source/application/main/Main.cc.obj -MF CMakeFiles/vww.dir/source/application/main/Main.cc.obj.d -o CMakeFiles/vww.dir/source/application/main/Main.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc

CMakeFiles/vww.dir/source/application/main/Main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/source/application/main/Main.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc > CMakeFiles/vww.dir/source/application/main/Main.cc.i

CMakeFiles/vww.dir/source/application/main/Main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/source/application/main/Main.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc -o CMakeFiles/vww.dir/source/application/main/Main.cc.s

CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc
CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj -MF CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj.d -o CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc

CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc > CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.i

CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc -o CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.s

CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/MainLoop.cc
CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj -MF CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj.d -o CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/MainLoop.cc

CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/MainLoop.cc > CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.i

CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/MainLoop.cc -o CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.s

CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/UseCaseHandler.cc
CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj -MF CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj.d -o CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/UseCaseHandler.cc

CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/UseCaseHandler.cc > CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.i

CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/vww/src/UseCaseHandler.cc -o CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.s

CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj: generated/vww/src/InputFiles.cc
CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj -MF CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj.d -o CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/InputFiles.cc

CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/InputFiles.cc > CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.i

CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/InputFiles.cc -o CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.s

CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj: generated/vww/src/Labels.cc
CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj -MF CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj.d -o CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/Labels.cc

CMakeFiles/vww.dir/generated/vww/src/Labels.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/generated/vww/src/Labels.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/Labels.cc > CMakeFiles/vww.dir/generated/vww/src/Labels.cc.i

CMakeFiles/vww.dir/generated/vww/src/Labels.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/generated/vww/src/Labels.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/Labels.cc -o CMakeFiles/vww.dir/generated/vww/src/Labels.cc.s

CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj: generated/vww/src/man_in_red_jacket.cc
CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj -MF CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj.d -o CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/man_in_red_jacket.cc

CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/man_in_red_jacket.cc > CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.i

CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/man_in_red_jacket.cc -o CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.s

CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj: generated/vww/src/st_paul_s_cathedral.cc
CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj -MF CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj.d -o CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/st_paul_s_cathedral.cc

CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/st_paul_s_cathedral.cc > CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.i

CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/st_paul_s_cathedral.cc -o CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.s

CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj: generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc
CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj -MF CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj.d -o CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc

CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc > CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.i

CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_he/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc -o CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.s

CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/vww.dir/flags.make
CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c
CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/vww.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -MF CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj.d -o CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c

CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c > CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i

CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c -o CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s

# Object files for target vww
vww_OBJECTS = \
"CMakeFiles/vww.dir/source/application/main/Main.cc.obj" \
"CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj" \
"CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj" \
"CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj" \
"CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj" \
"CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj" \
"CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj" \
"CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj" \
"CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj" \
"CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"

# External object files for target vww
vww_EXTERNAL_OBJECTS =

lib/libvww.a: CMakeFiles/vww.dir/source/application/main/Main.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/source/application/main/UseCaseCommonUtils.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/source/use_case/vww/src/MainLoop.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/source/use_case/vww/src/UseCaseHandler.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/generated/vww/src/InputFiles.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/generated/vww/src/Labels.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/generated/vww/src/man_in_red_jacket.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/generated/vww/src/st_paul_s_cathedral.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/generated/vww/src/vww4_128_128_INT8_vela_H128.tflite.cc.obj
lib/libvww.a: CMakeFiles/vww.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj
lib/libvww.a: CMakeFiles/vww.dir/build.make
lib/libvww.a: CMakeFiles/vww.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library lib/libvww.a"
	$(CMAKE_COMMAND) -P CMakeFiles/vww.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vww.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vww.dir/build: lib/libvww.a
.PHONY : CMakeFiles/vww.dir/build

CMakeFiles/vww.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vww.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vww.dir/clean

CMakeFiles/vww.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_he && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/build_he /home/alif_b_ml-embedded-evaluation-kit-main/build_he /home/alif_b_ml-embedded-evaluation-kit-main/build_he/CMakeFiles/vww.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vww.dir/depend

