# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Software\tools\cmake-3.6.3\bin\cmake.exe

# The command to remove a file.
RM = D:\Software\tools\cmake-3.6.3\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\WorkSpaces\CLion\c++primer\chapter7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\WorkSpaces\CLion\c++primer\chapter7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chapter7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter7.dir/flags.make

CMakeFiles/chapter7.dir/main.cpp.obj: CMakeFiles/chapter7.dir/flags.make
CMakeFiles/chapter7.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chapter7.dir/main.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter7.dir\main.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter7\main.cpp

CMakeFiles/chapter7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter7.dir/main.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter7\main.cpp > CMakeFiles\chapter7.dir\main.cpp.i

CMakeFiles/chapter7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter7.dir/main.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter7\main.cpp -o CMakeFiles\chapter7.dir\main.cpp.s

CMakeFiles/chapter7.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/chapter7.dir/main.cpp.obj.requires

CMakeFiles/chapter7.dir/main.cpp.obj.provides: CMakeFiles/chapter7.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter7.dir\build.make CMakeFiles/chapter7.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter7.dir/main.cpp.obj.provides

CMakeFiles/chapter7.dir/main.cpp.obj.provides.build: CMakeFiles/chapter7.dir/main.cpp.obj


# Object files for target chapter7
chapter7_OBJECTS = \
"CMakeFiles/chapter7.dir/main.cpp.obj"

# External object files for target chapter7
chapter7_EXTERNAL_OBJECTS =

chapter7.exe: CMakeFiles/chapter7.dir/main.cpp.obj
chapter7.exe: CMakeFiles/chapter7.dir/build.make
chapter7.exe: CMakeFiles/chapter7.dir/linklibs.rsp
chapter7.exe: CMakeFiles/chapter7.dir/objects1.rsp
chapter7.exe: CMakeFiles/chapter7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chapter7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\chapter7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter7.dir/build: chapter7.exe

.PHONY : CMakeFiles/chapter7.dir/build

CMakeFiles/chapter7.dir/requires: CMakeFiles/chapter7.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/chapter7.dir/requires

CMakeFiles/chapter7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\chapter7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/chapter7.dir/clean

CMakeFiles/chapter7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\WorkSpaces\CLion\c++primer\chapter7 D:\WorkSpaces\CLion\c++primer\chapter7 D:\WorkSpaces\CLion\c++primer\chapter7\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter7\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter7\cmake-build-debug\CMakeFiles\chapter7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chapter7.dir/depend

