# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/build

# Include any dependencies generated for this target.
include CMakeFiles/youBot_dataTrace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/youBot_dataTrace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/youBot_dataTrace.dir/flags.make

CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o: CMakeFiles/youBot_dataTrace.dir/flags.make
CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o -c /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/src/main.cpp

CMakeFiles/youBot_dataTrace.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/youBot_dataTrace.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/src/main.cpp > CMakeFiles/youBot_dataTrace.dir/src/main.cpp.i

CMakeFiles/youBot_dataTrace.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/youBot_dataTrace.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/src/main.cpp -o CMakeFiles/youBot_dataTrace.dir/src/main.cpp.s

CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.requires

CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.provides: CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/youBot_dataTrace.dir/build.make CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.provides

CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.provides.build: CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o


# Object files for target youBot_dataTrace
youBot_dataTrace_OBJECTS = \
"CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o"

# External object files for target youBot_dataTrace
youBot_dataTrace_EXTERNAL_OBJECTS =

../bin/youBot_dataTrace: CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o
../bin/youBot_dataTrace: CMakeFiles/youBot_dataTrace.dir/build.make
../bin/youBot_dataTrace: /usr/local/lib/libYouBotDriver.so
../bin/youBot_dataTrace: /usr/lib/x86_64-linux-gnu/libboost_thread.a
../bin/youBot_dataTrace: /usr/lib/x86_64-linux-gnu/libboost_date_time.a
../bin/youBot_dataTrace: /usr/lib/x86_64-linux-gnu/libboost_filesystem.a
../bin/youBot_dataTrace: /usr/lib/x86_64-linux-gnu/libboost_system.a
../bin/youBot_dataTrace: /usr/lib/x86_64-linux-gnu/libboost_chrono.a
../bin/youBot_dataTrace: /usr/lib/x86_64-linux-gnu/libboost_atomic.a
../bin/youBot_dataTrace: /usr/lib/x86_64-linux-gnu/libpthread.so
../bin/youBot_dataTrace: CMakeFiles/youBot_dataTrace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/youBot_dataTrace"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/youBot_dataTrace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/youBot_dataTrace.dir/build: ../bin/youBot_dataTrace

.PHONY : CMakeFiles/youBot_dataTrace.dir/build

CMakeFiles/youBot_dataTrace.dir/requires: CMakeFiles/youBot_dataTrace.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/youBot_dataTrace.dir/requires

CMakeFiles/youBot_dataTrace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/youBot_dataTrace.dir/cmake_clean.cmake
.PHONY : CMakeFiles/youBot_dataTrace.dir/clean

CMakeFiles/youBot_dataTrace.dir/depend:
	cd /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/build /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/build /home/zarevich/Documents/youbot_driver_rev2/tools/dataTraceExample/build/CMakeFiles/youBot_dataTrace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/youBot_dataTrace.dir/depend

