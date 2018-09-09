# Install script for directory: /home/zarevich/Documents/youbot_driver_rev2

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
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/EthercatMaster.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/EthercatMasterInterface.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/EthercatMasterWithThread.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/EthercatMasterWithoutThread.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotGripper.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotGripperBar.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotGripperParameter.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotBase.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotManipulator.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotJoint.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/JointLimitMonitor.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotJointParameterReadOnly.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotJointParameterPasswordProtected.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotJointParameter.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotSlaveMailboxMsg.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotSlaveMsg.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/ProtocolDefinitions.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/YouBotJointStorage.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/DataTrace.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/GripperDataTrace.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/JointTrajectoryController.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/base-kinematic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/base-kinematic/FourSwedishWheelOmniBaseKinematic.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/base-kinematic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/base-kinematic/FourSwedishWheelOmniBaseKinematicConfiguration.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/base-kinematic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/base-kinematic/WheeledBaseKinematic.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/Exceptions.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/Logger.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/Time.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/Units.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/ConfigFile.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/PidController.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/DataObjectLockFree.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/target.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/os/oro_arch.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os/oro_gcc" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/os/oro_gcc/oro_arch.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os/oro_i386" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/os/oro_i386/oro_arch.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os/oro_msvc" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/os/oro_msvc/oro_arch.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os/oro_powerpc" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree//os/oro_powerpc/oro_arch.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os/oro_powerpc" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/os/oro_powerpc/oro_atomic.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os/oro_powerpc" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/os/oro_powerpc/oro_system.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic/dataobjectlockfree/os/oro_x86_64" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic/dataobjectlockfree/os/oro_x86_64/oro_arch.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic-gripper" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic-gripper/Gripper.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic-gripper" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic-gripper/GripperData.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic-gripper" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic-gripper/GripperParameter.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic-joint" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic-joint/Joint.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic-joint" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic-joint/JointData.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic-joint" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic-joint/JointTrajectory.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/generic-joint" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/generic-joint/JointParameter.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/one-dof-gripper" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/one-dof-gripper/OneDOFGripper.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/youbot/one-dof-gripper" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/include/one-dof-gripper/OneDOFGripperData.hpp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/config" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/config/youbot-ethercat.cfg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/config" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/config/youbot-base.cfg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/config" TYPE FILE FILES "/home/zarevich/Documents/youbot_driver_rev2/config/youbot-manipulator.cfg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYouBotDriver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYouBotDriver.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYouBotDriver.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/zarevich/Documents/youbot_driver_rev2/build/libYouBotDriver.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYouBotDriver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYouBotDriver.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYouBotDriver.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/zarevich/Documents/youbot_driver_rev2/build/soem/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/zarevich/Documents/youbot_driver_rev2/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
