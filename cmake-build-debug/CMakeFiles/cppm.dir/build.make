# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vmaricru/Desktop/cppm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vmaricru/Desktop/cppm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cppm.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/cppm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppm.dir/flags.make

CMakeFiles/cppm.dir/m7/ex02/main.cpp.o: CMakeFiles/cppm.dir/flags.make
CMakeFiles/cppm.dir/m7/ex02/main.cpp.o: ../m7/ex02/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vmaricru/Desktop/cppm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppm.dir/m7/ex02/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cppm.dir/m7/ex02/main.cpp.o -c /Users/vmaricru/Desktop/cppm/m7/ex02/main.cpp

CMakeFiles/cppm.dir/m7/ex02/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppm.dir/m7/ex02/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vmaricru/Desktop/cppm/m7/ex02/main.cpp > CMakeFiles/cppm.dir/m7/ex02/main.cpp.i

CMakeFiles/cppm.dir/m7/ex02/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppm.dir/m7/ex02/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vmaricru/Desktop/cppm/m7/ex02/main.cpp -o CMakeFiles/cppm.dir/m7/ex02/main.cpp.s

# Object files for target cppm
cppm_OBJECTS = \
"CMakeFiles/cppm.dir/m7/ex02/main.cpp.o"

# External object files for target cppm
cppm_EXTERNAL_OBJECTS =

cppm: CMakeFiles/cppm.dir/m7/ex02/main.cpp.o
cppm: CMakeFiles/cppm.dir/build.make
cppm: CMakeFiles/cppm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vmaricru/Desktop/cppm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cppm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cppm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppm.dir/build: cppm
.PHONY : CMakeFiles/cppm.dir/build

CMakeFiles/cppm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cppm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cppm.dir/clean

CMakeFiles/cppm.dir/depend:
	cd /Users/vmaricru/Desktop/cppm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vmaricru/Desktop/cppm /Users/vmaricru/Desktop/cppm /Users/vmaricru/Desktop/cppm/cmake-build-debug /Users/vmaricru/Desktop/cppm/cmake-build-debug /Users/vmaricru/Desktop/cppm/cmake-build-debug/CMakeFiles/cppm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cppm.dir/depend

