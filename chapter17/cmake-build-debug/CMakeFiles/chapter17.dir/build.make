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
CMAKE_SOURCE_DIR = D:\WorkSpaces\CLion\c++primer\chapter17

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\WorkSpaces\CLion\c++primer\chapter17\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chapter17.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter17.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter17.dir/flags.make

CMakeFiles/chapter17.dir/main.cpp.obj: CMakeFiles/chapter17.dir/flags.make
CMakeFiles/chapter17.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter17\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chapter17.dir/main.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter17.dir\main.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter17\main.cpp

CMakeFiles/chapter17.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter17.dir/main.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter17\main.cpp > CMakeFiles\chapter17.dir\main.cpp.i

CMakeFiles/chapter17.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter17.dir/main.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter17\main.cpp -o CMakeFiles\chapter17.dir\main.cpp.s

CMakeFiles/chapter17.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/chapter17.dir/main.cpp.obj.requires

CMakeFiles/chapter17.dir/main.cpp.obj.provides: CMakeFiles/chapter17.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter17.dir\build.make CMakeFiles/chapter17.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter17.dir/main.cpp.obj.provides

CMakeFiles/chapter17.dir/main.cpp.obj.provides.build: CMakeFiles/chapter17.dir/main.cpp.obj


# Object files for target chapter17
chapter17_OBJECTS = \
"CMakeFiles/chapter17.dir/main.cpp.obj"

# External object files for target chapter17
chapter17_EXTERNAL_OBJECTS =

chapter17.exe: CMakeFiles/chapter17.dir/main.cpp.obj
chapter17.exe: CMakeFiles/chapter17.dir/build.make
chapter17.exe: CMakeFiles/chapter17.dir/linklibs.rsp
chapter17.exe: CMakeFiles/chapter17.dir/objects1.rsp
chapter17.exe: CMakeFiles/chapter17.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter17\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chapter17.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\chapter17.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter17.dir/build: chapter17.exe

.PHONY : CMakeFiles/chapter17.dir/build

CMakeFiles/chapter17.dir/requires: CMakeFiles/chapter17.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/chapter17.dir/requires

CMakeFiles/chapter17.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\chapter17.dir\cmake_clean.cmake
.PHONY : CMakeFiles/chapter17.dir/clean

CMakeFiles/chapter17.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\WorkSpaces\CLion\c++primer\chapter17 D:\WorkSpaces\CLion\c++primer\chapter17 D:\WorkSpaces\CLion\c++primer\chapter17\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter17\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter17\cmake-build-debug\CMakeFiles\chapter17.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chapter17.dir/depend
