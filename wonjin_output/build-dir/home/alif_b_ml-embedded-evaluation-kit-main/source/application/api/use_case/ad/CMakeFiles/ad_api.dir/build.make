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
CMAKE_SOURCE_DIR = /home/alif_b_ml-embedded-evaluation-kit-main/scripts/cmake/cmsis-pack-gen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir

# Include any dependencies generated for this target.
include home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/compiler_depend.make

# Include the progress variables for this target.
include home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/progress.make

# Include the compile flags for this target's objects.
include home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/flags.make

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/flags.make
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.o: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdModel.cc
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.o"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.o -MF CMakeFiles/ad_api.dir/src/AdModel.cc.o.d -o CMakeFiles/ad_api.dir/src/AdModel.cc.o -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdModel.cc

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ad_api.dir/src/AdModel.cc.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdModel.cc > CMakeFiles/ad_api.dir/src/AdModel.cc.i

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ad_api.dir/src/AdModel.cc.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdModel.cc -o CMakeFiles/ad_api.dir/src/AdModel.cc.s

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/flags.make
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.o: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdProcessing.cc
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.o"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.o -MF CMakeFiles/ad_api.dir/src/AdProcessing.cc.o.d -o CMakeFiles/ad_api.dir/src/AdProcessing.cc.o -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdProcessing.cc

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ad_api.dir/src/AdProcessing.cc.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdProcessing.cc > CMakeFiles/ad_api.dir/src/AdProcessing.cc.i

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ad_api.dir/src/AdProcessing.cc.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdProcessing.cc -o CMakeFiles/ad_api.dir/src/AdProcessing.cc.s

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/flags.make
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdMelSpectrogram.cc
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o -MF CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o.d -o CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdMelSpectrogram.cc

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdMelSpectrogram.cc > CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.i

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/AdMelSpectrogram.cc -o CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.s

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/flags.make
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/MelSpectrogram.cc
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o -MF CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o.d -o CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/MelSpectrogram.cc

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.i"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/MelSpectrogram.cc > CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.i

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.s"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/src/MelSpectrogram.cc -o CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.s

# Object files for target ad_api
ad_api_OBJECTS = \
"CMakeFiles/ad_api.dir/src/AdModel.cc.o" \
"CMakeFiles/ad_api.dir/src/AdProcessing.cc.o" \
"CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o" \
"CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o"

# External object files for target ad_api
ad_api_EXTERNAL_OBJECTS =

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/libad_api.a: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdModel.cc.o
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/libad_api.a: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdProcessing.cc.o
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/libad_api.a: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/AdMelSpectrogram.cc.o
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/libad_api.a: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/src/MelSpectrogram.cc.o
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/libad_api.a: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/build.make
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/libad_api.a: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libad_api.a"
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && $(CMAKE_COMMAND) -P CMakeFiles/ad_api.dir/cmake_clean_target.cmake
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ad_api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/build: home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/libad_api.a
.PHONY : home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/build

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/clean:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad && $(CMAKE_COMMAND) -P CMakeFiles/ad_api.dir/cmake_clean.cmake
.PHONY : home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/clean

home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main/scripts/cmake/cmsis-pack-gen /home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad /home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/CMakeFiles/ad_api.dir/depend

