# Install script for directory: /home/iris/folder/vrep_common

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE PROGRAM FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/_setup_util.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE PROGRAM FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/env.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/setup.bash")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/setup.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/setup.zsh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local" TYPE FILE FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrep_common/msg" TYPE FILE FILES
    "/home/iris/folder/vrep_common/msg/ForceSensorData.msg"
    "/home/iris/folder/vrep_common/msg/JointSetStateData.msg"
    "/home/iris/folder/vrep_common/msg/ObjectGroupData.msg"
    "/home/iris/folder/vrep_common/msg/ProximitySensorData.msg"
    "/home/iris/folder/vrep_common/msg/VisionSensorData.msg"
    "/home/iris/folder/vrep_common/msg/VisionSensorDepthBuff.msg"
    "/home/iris/folder/vrep_common/msg/VrepInfo.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrep_common/srv" TYPE FILE FILES
    "/home/iris/folder/vrep_common/srv/simRosAddStatusbarMessage.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetDialogInput.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetUIEventButton.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetJointState.srv"
    "/home/iris/folder/vrep_common/srv/simRosAppendStringSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetDialogResult.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetUIHandle.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetJointTargetPosition.srv"
    "/home/iris/folder/vrep_common/srv/simRosAuxiliaryConsoleClose.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetDistanceHandle.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetUISlider.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetJointTargetVelocity.srv"
    "/home/iris/folder/vrep_common/srv/simRosAuxiliaryConsoleOpen.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetFloatingParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetVisionSensorDepthBuffer.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetModelProperty.srv"
    "/home/iris/folder/vrep_common/srv/simRosAuxiliaryConsolePrint.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetFloatSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetVisionSensorImage.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetObjectFloatParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosAuxiliaryConsoleShow.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetInfo.srv"
    "/home/iris/folder/vrep_common/srv/simRosLoadModel.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetObjectIntParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosBreakForceSensor.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetIntegerParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosLoadScene.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetObjectParent.srv"
    "/home/iris/folder/vrep_common/srv/simRosClearFloatSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetIntegerSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosLoadUI.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetObjectPose.srv"
    "/home/iris/folder/vrep_common/srv/simRosClearIntegerSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetJointMatrix.srv"
    "/home/iris/folder/vrep_common/srv/simRosPauseSimulation.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetObjectPosition.srv"
    "/home/iris/folder/vrep_common/srv/simRosClearStringSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetJointState.srv"
    "/home/iris/folder/vrep_common/srv/simRosReadCollision.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetObjectQuaternion.srv"
    "/home/iris/folder/vrep_common/srv/simRosCloseScene.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetLastErrors.srv"
    "/home/iris/folder/vrep_common/srv/simRosReadDistance.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetObjectSelection.srv"
    "/home/iris/folder/vrep_common/srv/simRosCopyPasteObjects.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetModelProperty.srv"
    "/home/iris/folder/vrep_common/srv/simRosReadForceSensor.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetSphericalJointMatrix.srv"
    "/home/iris/folder/vrep_common/srv/simRosCreateDummy.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectChild.srv"
    "/home/iris/folder/vrep_common/srv/simRosReadProximitySensor.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetStringSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosDisablePublisher.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectFloatParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosReadVisionSensor.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetUIButtonLabel.srv"
    "/home/iris/folder/vrep_common/srv/simRosDisableSubscriber.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectGroupData.srv"
    "/home/iris/folder/vrep_common/srv/simRosRemoveObject.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetUIButtonProperty.srv"
    "/home/iris/folder/vrep_common/srv/simRosDisplayDialog.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectHandle.srv"
    "/home/iris/folder/vrep_common/srv/simRosRemoveUI.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetUISlider.srv"
    "/home/iris/folder/vrep_common/srv/simRosEnablePublisher.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectIntParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetArrayParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetVisionSensorImage.srv"
    "/home/iris/folder/vrep_common/srv/simRosEnableSubscriber.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectParent.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetBooleanParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosStartSimulation.srv"
    "/home/iris/folder/vrep_common/srv/simRosEndDialog.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectPose.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetFloatingParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosStopSimulation.srv"
    "/home/iris/folder/vrep_common/srv/simRosEraseFile.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjectSelection.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetFloatSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosSynchronous.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetAndClearStringSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetObjects.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetIntegerParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosSynchronousTrigger.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetArrayParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetStringParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetIntegerSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosTransferFile.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetBooleanParameter.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetStringSignal.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetJointForce.srv"
    "/home/iris/folder/vrep_common/srv/simRosRemoveModel.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetCollisionHandle.srv"
    "/home/iris/folder/vrep_common/srv/simRosGetUIButtonProperty.srv"
    "/home/iris/folder/vrep_common/srv/simRosSetJointPosition.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrep_common/cmake" TYPE FILE FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/vrep_common-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/iris/folder/vrep_common/build/devel/include/vrep_common")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/iris/folder/vrep_common/build/devel/share/roseus/ros/vrep_common")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/iris/folder/vrep_common/build/devel/share/common-lisp/ros/vrep_common")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/iris/folder/vrep_common/build/devel/lib/python2.7/dist-packages/vrep_common")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/iris/folder/vrep_common/build/devel/lib/python2.7/dist-packages/vrep_common")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/vrep_common.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrep_common/cmake" TYPE FILE FILES "/home/iris/folder/vrep_common/build/catkin_generated/installspace/vrep_common-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrep_common/cmake" TYPE FILE FILES
    "/home/iris/folder/vrep_common/build/catkin_generated/installspace/vrep_commonConfig.cmake"
    "/home/iris/folder/vrep_common/build/catkin_generated/installspace/vrep_commonConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vrep_common" TYPE FILE FILES "/home/iris/folder/vrep_common/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/iris/folder/vrep_common/build/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "/home/iris/folder/vrep_common/build/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "/home/iris/folder/vrep_common/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()
