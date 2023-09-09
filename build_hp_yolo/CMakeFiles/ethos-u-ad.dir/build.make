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
include CMakeFiles/ethos-u-ad.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ethos-u-ad.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ethos-u-ad.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ethos-u-ad.dir/flags.make

CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj: CMakeFiles/ethos-u-ad.dir/flags.make
CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc
CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj: CMakeFiles/ethos-u-ad.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj -MF CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj.d -o CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc

CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc > CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.i

CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++ $(CXX_DEFINES) -DPRJ_DES_STR="\"ARM ML Embedded Evaluation Kit\"" -DPRJ_VER_STR=\"23.05.0\" $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/application/main/Main.cc -o CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.s

CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/ethos-u-ad.dir/flags.make
CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c
CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj: CMakeFiles/ethos-u-ad.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -MF CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj.d -o CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj -c /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c

CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c > CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.i

CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s"
	/home/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/alif_b_ml-embedded-evaluation-kit-main/source/hal/source/components/npu/ethosu_cpu_cache.c -o CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.s

# Object files for target ethos-u-ad
ethos__u__ad_OBJECTS = \
"CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj" \
"CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj"

# External object files for target ethos-u-ad
ethos__u__ad_EXTERNAL_OBJECTS =

bin/ethos-u-ad.axf: CMakeFiles/ethos-u-ad.dir/source/application/main/Main.cc.obj
bin/ethos-u-ad.axf: CMakeFiles/ethos-u-ad.dir/source/hal/source/components/npu/ethosu_cpu_cache.c.obj
bin/ethos-u-ad.axf: CMakeFiles/ethos-u-ad.dir/build.make
bin/ethos-u-ad.axf: lib/libad.a
bin/ethos-u-ad.axf: lib/libprofiler.a
bin/ethos-u-ad.axf: lib/libhal.a
bin/ethos-u-ad.axf: lib/libimage_ensemble.a
bin/ethos-u-ad.axf: lib/liblcd_lvgl.a
bin/ethos-u-ad.axf: lib/liblvgl.a
bin/ethos-u-ad.axf: lib/libplatform_drivers_core.a
bin/ethos-u-ad.axf: lib/libArm-2D.a
bin/ethos-u-ad.axf: lib/libaudio_ensemble.a
bin/ethos-u-ad.axf: lib/libcmsis_ensemble.a
bin/ethos-u-ad.axf: lib/libensemble_services.a
bin/ethos-u-ad.axf: lib/libad_api.a
bin/ethos-u-ad.axf: lib/libcommon_api.a
bin/ethos-u-ad.axf: lib/libarm_math.a
bin/ethos-u-ad.axf: lib/libcmsis-dsp.a
bin/ethos-u-ad.axf: lib/libtensorflow-microlite.a
bin/ethos-u-ad.axf: lib/libethos_u_npu.a
bin/ethos-u-ad.axf: lib/libethosu_core_driver.a
bin/ethos-u-ad.axf: CMakeFiles/ethos-u-ad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bin/ethos-u-ad.axf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ethos-u-ad.dir/link.txt --verbose=$(VERBOSE)
	arm-none-eabi-objcopy -O binary --only-section *.at_mram /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/bin/ethos-u-ad.axf /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/bin/sectors/ad/mram.bin

# Rule to build all files generated by this target.
CMakeFiles/ethos-u-ad.dir/build: bin/ethos-u-ad.axf
.PHONY : CMakeFiles/ethos-u-ad.dir/build

CMakeFiles/ethos-u-ad.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ethos-u-ad.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ethos-u-ad.dir/clean

CMakeFiles/ethos-u-ad.dir/depend:
	cd /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo /home/alif_b_ml-embedded-evaluation-kit-main/build_hp_yolo/CMakeFiles/ethos-u-ad.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ethos-u-ad.dir/depend

