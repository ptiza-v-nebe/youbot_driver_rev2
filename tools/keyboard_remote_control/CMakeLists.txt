PROJECT(youBot_KeyboardRemoteControl)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.3)

## check required prerequisites
SET(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake-modules")
SET(Boost_USE_STATIC_LIBS ON)
SET(Boost_ADDITIONAL_VERSIONS "1.39" "1.39.0" "1.40" "1.40.0" "1.41" "1.41.0" "1.42" "1.42.0" "1.43" "1.43.0" "1.44" "1.44.0" "1.45" "1.45.0" "1.46" "1.46.0")
FIND_PACKAGE(Boost REQUIRED COMPONENTS thread date_time filesystem system)
FIND_PACKAGE(YoubotDriver REQUIRED)

## preprocessor definitions
ADD_DEFINITIONS(-DYOUBOT_CONFIGURATIONS_DIR="${YOUBOT_DRIVER_CONFIG_DIR}/")
ADD_DEFINITIONS(-DCONFIG_DIR="${PROJECT_SOURCE_DIR}/config")

## build parameters and paths
SET(CMAKE_BUILD_TYPE DEBUG) #enable debug mode (e.g. for embedded gdb in eclipse )
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/ CACHE PATH "Configure the executable output path.")
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib/ CACHE PATH "Configure the library output path.")



## Compile and link
ADD_EXECUTABLE(youBot_KeyboardRemoteControl
  src/main.cpp
)

TARGET_LINK_LIBRARIES(youBot_KeyboardRemoteControl
	${YOUBOT_DRIVER_LIBRARIES}
	${Boost_LIBRARIES}
	pthread
	ncurses
)

TARGET_INCLUDE_DIRECTORIES(youBot_KeyboardRemoteControl PRIVATE
	${YOUBOT_DRIVER_INCLUDE_DIR}
	${Boost_INCLUDE_DIR}
)

#INSTALL(TARGETS youBot_KeyboardRemoteControl RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
