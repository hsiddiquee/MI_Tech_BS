# Install script for directory: C:/nordicsemi/v1.6.1/zephyr/drivers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Zephyr-Kernel")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/console/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/interrupt_controller/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/misc/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/pcie/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/disk/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/clock_control/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/gpio/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/ipm/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/flash/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/serial/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/bluetooth/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/entropy/cmake_install.cmake")
  include("C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/zephyr/drivers/timer/cmake_install.cmake")

endif()

