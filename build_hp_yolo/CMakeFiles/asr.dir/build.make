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
include CMakeFiles/asr.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/asr.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/asr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/asr.dir/flags.make

CMakeFiles/asr.dir/source/application/main/Main.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/source/application/main/Main.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc
CMakeFiles/asr.dir/source/application/main/Main.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/asr.dir/source/application/main/Main.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/source/application/main/Main.cc.obj -MF CMakeFiles/asr.dir/source/application/main/Main.cc.obj.d -o CMakeFiles/asr.dir/source/application/main/Main.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc

CMakeFiles/asr.dir/source/application/main/Main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/source/application/main/Main.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc > CMakeFiles/asr.dir/source/application/main/Main.cc.i

CMakeFiles/asr.dir/source/application/main/Main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/source/application/main/Main.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc -o CMakeFiles/asr.dir/source/application/main/Main.cc.s

CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc
CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj -MF CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj.d -o CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc

CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc > CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.i

CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc -o CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.s

CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/MainLoop.cc
CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj -MF CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj.d -o CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/MainLoop.cc

CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/MainLoop.cc > CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.i

CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/MainLoop.cc -o CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.s

CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/UseCaseHandler.cc
CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj -MF CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj.d -o CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/UseCaseHandler.cc

CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/UseCaseHandler.cc > CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.i

CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/asr/src/UseCaseHandler.cc -o CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.s

CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj: generated/asr/src/InputFiles.cc
CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj -MF CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj.d -o CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/InputFiles.cc

CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/InputFiles.cc > CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.i

CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/InputFiles.cc -o CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.s

CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj: generated/asr/src/Labels.cc
CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj -MF CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj.d -o CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/Labels.cc

CMakeFiles/asr.dir/generated/asr/src/Labels.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/generated/asr/src/Labels.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/Labels.cc > CMakeFiles/asr.dir/generated/asr/src/Labels.cc.i

CMakeFiles/asr.dir/generated/asr/src/Labels.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/generated/asr/src/Labels.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/Labels.cc -o CMakeFiles/asr.dir/generated/asr/src/Labels.cc.s

CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj: generated/asr/src/another_door.cc
CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj -MF CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj.d -o CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/another_door.cc

CMakeFiles/asr.dir/generated/asr/src/another_door.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/generated/asr/src/another_door.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/another_door.cc > CMakeFiles/asr.dir/generated/asr/src/another_door.cc.i

CMakeFiles/asr.dir/generated/asr/src/another_door.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/generated/asr/src/another_door.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/another_door.cc -o CMakeFiles/asr.dir/generated/asr/src/another_door.cc.s

CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj: generated/asr/src/another_engineer.cc
CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj -MF CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj.d -o CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/another_engineer.cc

CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/another_engineer.cc > CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.i

CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/another_engineer.cc -o CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.s

CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj: generated/asr/src/i_tell_you.cc
CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj -MF CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj.d -o CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/i_tell_you.cc

CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/i_tell_you.cc > CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.i

CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/i_tell_you.cc -o CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.s

CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj: generated/asr/src/testing_routine.cc
CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj -MF CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj.d -o CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/testing_routine.cc

CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/testing_routine.cc > CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.i

CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/testing_routine.cc -o CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.s

CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj: generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc
CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj -MF CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj.d -o CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc

CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc > CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.i

CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc -o CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.s

CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/asr.dir/flags.make
CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c
CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/asr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -MF CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj.d -o CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c

CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c > CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i

CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c -o CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s

# Object files for target asr
asr_OBJECTS = \
"CMakeFiles/asr.dir/source/application/main/Main.cc.obj" \
"CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj" \
"CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj" \
"CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj" \
"CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj" \
"CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj" \
"CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj" \
"CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj" \
"CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj" \
"CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj" \
"CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj" \
"CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"

# External object files for target asr
asr_EXTERNAL_OBJECTS =

lib/libasr.a: CMakeFiles/asr.dir/source/application/main/Main.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/source/application/main/UseCaseCommonUtils.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/source/use_case/asr/src/MainLoop.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/source/use_case/asr/src/UseCaseHandler.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/generated/asr/src/InputFiles.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/generated/asr/src/Labels.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/generated/asr/src/another_door.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/generated/asr/src/another_engineer.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/generated/asr/src/i_tell_you.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/generated/asr/src/testing_routine.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/generated/asr/src/wav2letter_pruned_int8_vela_H256.tflite.cc.obj
lib/libasr.a: CMakeFiles/asr.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj
lib/libasr.a: CMakeFiles/asr.dir/build.make
lib/libasr.a: CMakeFiles/asr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX static library lib/libasr.a"
	$(CMAKE_COMMAND) -P CMakeFiles/asr.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/asr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/asr.dir/build: lib/libasr.a
.PHONY : CMakeFiles/asr.dir/build

CMakeFiles/asr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/asr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/asr.dir/clean

CMakeFiles/asr.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles/asr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/asr.dir/depend

