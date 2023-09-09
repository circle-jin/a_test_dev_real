# Install script for directory: /home/alif_b_ml-embedded-evaluation-kit-main/scripts/cmake/cmsis-pack-gen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/math/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/log/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/common/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/ad/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/alif_ui/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/asr/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/img_class/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/inference_runner/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/kws/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/noise_reduction/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/object_detection/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/home/alif_b_ml-embedded-evaluation-kit-main/source/application/api/use_case/vww/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/alif_b_ml-embedded-evaluation-kit-main/wonjin_output/build-dir/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")