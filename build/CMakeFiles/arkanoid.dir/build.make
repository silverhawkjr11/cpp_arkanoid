# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/saeed/Desktop/cpp_env/arkanoid

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/saeed/Desktop/cpp_env/arkanoid/build

# Include any dependencies generated for this target.
include CMakeFiles/arkanoid.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arkanoid.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arkanoid.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arkanoid.dir/flags.make

CMakeFiles/arkanoid.dir/src/main.cpp.o: CMakeFiles/arkanoid.dir/flags.make
CMakeFiles/arkanoid.dir/src/main.cpp.o: /home/saeed/Desktop/cpp_env/arkanoid/src/main.cpp
CMakeFiles/arkanoid.dir/src/main.cpp.o: CMakeFiles/arkanoid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/saeed/Desktop/cpp_env/arkanoid/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arkanoid.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arkanoid.dir/src/main.cpp.o -MF CMakeFiles/arkanoid.dir/src/main.cpp.o.d -o CMakeFiles/arkanoid.dir/src/main.cpp.o -c /home/saeed/Desktop/cpp_env/arkanoid/src/main.cpp

CMakeFiles/arkanoid.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arkanoid.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/saeed/Desktop/cpp_env/arkanoid/src/main.cpp > CMakeFiles/arkanoid.dir/src/main.cpp.i

CMakeFiles/arkanoid.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arkanoid.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/saeed/Desktop/cpp_env/arkanoid/src/main.cpp -o CMakeFiles/arkanoid.dir/src/main.cpp.s

CMakeFiles/arkanoid.dir/src/Ball.cpp.o: CMakeFiles/arkanoid.dir/flags.make
CMakeFiles/arkanoid.dir/src/Ball.cpp.o: /home/saeed/Desktop/cpp_env/arkanoid/src/Ball.cpp
CMakeFiles/arkanoid.dir/src/Ball.cpp.o: CMakeFiles/arkanoid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/saeed/Desktop/cpp_env/arkanoid/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/arkanoid.dir/src/Ball.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arkanoid.dir/src/Ball.cpp.o -MF CMakeFiles/arkanoid.dir/src/Ball.cpp.o.d -o CMakeFiles/arkanoid.dir/src/Ball.cpp.o -c /home/saeed/Desktop/cpp_env/arkanoid/src/Ball.cpp

CMakeFiles/arkanoid.dir/src/Ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arkanoid.dir/src/Ball.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/saeed/Desktop/cpp_env/arkanoid/src/Ball.cpp > CMakeFiles/arkanoid.dir/src/Ball.cpp.i

CMakeFiles/arkanoid.dir/src/Ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arkanoid.dir/src/Ball.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/saeed/Desktop/cpp_env/arkanoid/src/Ball.cpp -o CMakeFiles/arkanoid.dir/src/Ball.cpp.s

CMakeFiles/arkanoid.dir/src/Paddle.cpp.o: CMakeFiles/arkanoid.dir/flags.make
CMakeFiles/arkanoid.dir/src/Paddle.cpp.o: /home/saeed/Desktop/cpp_env/arkanoid/src/Paddle.cpp
CMakeFiles/arkanoid.dir/src/Paddle.cpp.o: CMakeFiles/arkanoid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/saeed/Desktop/cpp_env/arkanoid/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/arkanoid.dir/src/Paddle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arkanoid.dir/src/Paddle.cpp.o -MF CMakeFiles/arkanoid.dir/src/Paddle.cpp.o.d -o CMakeFiles/arkanoid.dir/src/Paddle.cpp.o -c /home/saeed/Desktop/cpp_env/arkanoid/src/Paddle.cpp

CMakeFiles/arkanoid.dir/src/Paddle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arkanoid.dir/src/Paddle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/saeed/Desktop/cpp_env/arkanoid/src/Paddle.cpp > CMakeFiles/arkanoid.dir/src/Paddle.cpp.i

CMakeFiles/arkanoid.dir/src/Paddle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arkanoid.dir/src/Paddle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/saeed/Desktop/cpp_env/arkanoid/src/Paddle.cpp -o CMakeFiles/arkanoid.dir/src/Paddle.cpp.s

CMakeFiles/arkanoid.dir/src/Brick.cpp.o: CMakeFiles/arkanoid.dir/flags.make
CMakeFiles/arkanoid.dir/src/Brick.cpp.o: /home/saeed/Desktop/cpp_env/arkanoid/src/Brick.cpp
CMakeFiles/arkanoid.dir/src/Brick.cpp.o: CMakeFiles/arkanoid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/saeed/Desktop/cpp_env/arkanoid/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/arkanoid.dir/src/Brick.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arkanoid.dir/src/Brick.cpp.o -MF CMakeFiles/arkanoid.dir/src/Brick.cpp.o.d -o CMakeFiles/arkanoid.dir/src/Brick.cpp.o -c /home/saeed/Desktop/cpp_env/arkanoid/src/Brick.cpp

CMakeFiles/arkanoid.dir/src/Brick.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arkanoid.dir/src/Brick.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/saeed/Desktop/cpp_env/arkanoid/src/Brick.cpp > CMakeFiles/arkanoid.dir/src/Brick.cpp.i

CMakeFiles/arkanoid.dir/src/Brick.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arkanoid.dir/src/Brick.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/saeed/Desktop/cpp_env/arkanoid/src/Brick.cpp -o CMakeFiles/arkanoid.dir/src/Brick.cpp.s

CMakeFiles/arkanoid.dir/src/Game.cpp.o: CMakeFiles/arkanoid.dir/flags.make
CMakeFiles/arkanoid.dir/src/Game.cpp.o: /home/saeed/Desktop/cpp_env/arkanoid/src/Game.cpp
CMakeFiles/arkanoid.dir/src/Game.cpp.o: CMakeFiles/arkanoid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/saeed/Desktop/cpp_env/arkanoid/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/arkanoid.dir/src/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arkanoid.dir/src/Game.cpp.o -MF CMakeFiles/arkanoid.dir/src/Game.cpp.o.d -o CMakeFiles/arkanoid.dir/src/Game.cpp.o -c /home/saeed/Desktop/cpp_env/arkanoid/src/Game.cpp

CMakeFiles/arkanoid.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arkanoid.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/saeed/Desktop/cpp_env/arkanoid/src/Game.cpp > CMakeFiles/arkanoid.dir/src/Game.cpp.i

CMakeFiles/arkanoid.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arkanoid.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/saeed/Desktop/cpp_env/arkanoid/src/Game.cpp -o CMakeFiles/arkanoid.dir/src/Game.cpp.s

# Object files for target arkanoid
arkanoid_OBJECTS = \
"CMakeFiles/arkanoid.dir/src/main.cpp.o" \
"CMakeFiles/arkanoid.dir/src/Ball.cpp.o" \
"CMakeFiles/arkanoid.dir/src/Paddle.cpp.o" \
"CMakeFiles/arkanoid.dir/src/Brick.cpp.o" \
"CMakeFiles/arkanoid.dir/src/Game.cpp.o"

# External object files for target arkanoid
arkanoid_EXTERNAL_OBJECTS =

arkanoid: CMakeFiles/arkanoid.dir/src/main.cpp.o
arkanoid: CMakeFiles/arkanoid.dir/src/Ball.cpp.o
arkanoid: CMakeFiles/arkanoid.dir/src/Paddle.cpp.o
arkanoid: CMakeFiles/arkanoid.dir/src/Brick.cpp.o
arkanoid: CMakeFiles/arkanoid.dir/src/Game.cpp.o
arkanoid: CMakeFiles/arkanoid.dir/build.make
arkanoid: /usr/lib/libsfml-graphics.so.2.6.1
arkanoid: /usr/lib/libsfml-audio.so.2.6.1
arkanoid: /usr/lib/libsfml-window.so.2.6.1
arkanoid: /usr/lib/libsfml-system.so.2.6.1
arkanoid: CMakeFiles/arkanoid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/saeed/Desktop/cpp_env/arkanoid/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable arkanoid"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arkanoid.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arkanoid.dir/build: arkanoid
.PHONY : CMakeFiles/arkanoid.dir/build

CMakeFiles/arkanoid.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arkanoid.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arkanoid.dir/clean

CMakeFiles/arkanoid.dir/depend:
	cd /home/saeed/Desktop/cpp_env/arkanoid/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/saeed/Desktop/cpp_env/arkanoid /home/saeed/Desktop/cpp_env/arkanoid /home/saeed/Desktop/cpp_env/arkanoid/build /home/saeed/Desktop/cpp_env/arkanoid/build /home/saeed/Desktop/cpp_env/arkanoid/build/CMakeFiles/arkanoid.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/arkanoid.dir/depend

