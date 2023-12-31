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
include CMakeFiles/noise_reduction.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/noise_reduction.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/noise_reduction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/noise_reduction.dir/flags.make

CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc
CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj -MF CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj.d -o CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc

CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc > CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.i

CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc -o CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.s

CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc
CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj -MF CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj.d -o CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc

CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc > CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.i

CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/UseCaseCommonUtils.cc -o CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.s

CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/MainLoop.cc
CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj -MF CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj.d -o CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/MainLoop.cc

CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/MainLoop.cc > CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.i

CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/MainLoop.cc -o CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.s

CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/UseCaseHandler.cc
CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj -MF CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj.d -o CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/UseCaseHandler.cc

CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/UseCaseHandler.cc > CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.i

CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/use_case/noise_reduction/src/UseCaseHandler.cc -o CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.s

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj: generated/noise_reduction/src/InputFiles.cc
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj -MF CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj.d -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/InputFiles.cc

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/InputFiles.cc > CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.i

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/InputFiles.cc -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.s

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj: generated/noise_reduction/src/p232_113.cc
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj -MF CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj.d -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p232_113.cc

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p232_113.cc > CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.i

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p232_113.cc -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.s

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj: generated/noise_reduction/src/p232_208.cc
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj -MF CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj.d -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p232_208.cc

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p232_208.cc > CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.i

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p232_208.cc -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.s

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj: generated/noise_reduction/src/p257_031.cc
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj -MF CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj.d -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p257_031.cc

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p257_031.cc > CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.i

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/p257_031.cc -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.s

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj: generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc
CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj -MF CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj.d -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc > CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.i

CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc -o CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.s

CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/noise_reduction.dir/flags.make
CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c
CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/noise_reduction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -MF CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj.d -o CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c

CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c > CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i

CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c -o CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s

# Object files for target noise_reduction
noise_reduction_OBJECTS = \
"CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj" \
"CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj" \
"CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj" \
"CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj" \
"CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj" \
"CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj" \
"CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj" \
"CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj" \
"CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj" \
"CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"

# External object files for target noise_reduction
noise_reduction_EXTERNAL_OBJECTS =

lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/source/application/main/Main.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/source/application/main/UseCaseCommonUtils.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/MainLoop.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/source/use_case/noise_reduction/src/UseCaseHandler.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/InputFiles.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_113.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p232_208.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/p257_031.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/generated/noise_reduction/src/rnnoise_INT8_vela_H256.tflite.cc.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/build.make
lib/libnoise_reduction.a: CMakeFiles/noise_reduction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library lib/libnoise_reduction.a"
	$(CMAKE_COMMAND) -P CMakeFiles/noise_reduction.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/noise_reduction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/noise_reduction.dir/build: lib/libnoise_reduction.a
.PHONY : CMakeFiles/noise_reduction.dir/build

CMakeFiles/noise_reduction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/noise_reduction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/noise_reduction.dir/clean

CMakeFiles/noise_reduction.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/build_hp /home/alif_b_ml-embedded-evaluation-kit-main/build_hp /home/alif_b_ml-embedded-evaluation-kit-main/build_hp/CMakeFiles/noise_reduction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/noise_reduction.dir/depend

