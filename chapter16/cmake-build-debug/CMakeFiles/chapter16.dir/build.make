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
CMAKE_SOURCE_DIR = D:\WorkSpaces\CLion\c++primer\chapter16

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\WorkSpaces\CLion\c++primer\chapter16\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chapter16.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter16.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter16.dir/flags.make

CMakeFiles/chapter16.dir/main.cpp.obj: CMakeFiles/chapter16.dir/flags.make
CMakeFiles/chapter16.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter16\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chapter16.dir/main.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter16.dir\main.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter16\main.cpp

CMakeFiles/chapter16.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter16.dir/main.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter16\main.cpp > CMakeFiles\chapter16.dir\main.cpp.i

CMakeFiles/chapter16.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter16.dir/main.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter16\main.cpp -o CMakeFiles\chapter16.dir\main.cpp.s

CMakeFiles/chapter16.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/chapter16.dir/main.cpp.obj.requires

CMakeFiles/chapter16.dir/main.cpp.obj.provides: CMakeFiles/chapter16.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter16.dir\build.make CMakeFiles/chapter16.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter16.dir/main.cpp.obj.provides

CMakeFiles/chapter16.dir/main.cpp.obj.provides.build: CMakeFiles/chapter16.dir/main.cpp.obj


CMakeFiles/chapter16.dir/smartptr.cpp.obj: CMakeFiles/chapter16.dir/flags.make
CMakeFiles/chapter16.dir/smartptr.cpp.obj: ../smartptr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter16\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/chapter16.dir/smartptr.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter16.dir\smartptr.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter16\smartptr.cpp

CMakeFiles/chapter16.dir/smartptr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter16.dir/smartptr.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter16\smartptr.cpp > CMakeFiles\chapter16.dir\smartptr.cpp.i

CMakeFiles/chapter16.dir/smartptr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter16.dir/smartptr.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter16\smartptr.cpp -o CMakeFiles\chapter16.dir\smartptr.cpp.s

CMakeFiles/chapter16.dir/smartptr.cpp.obj.requires:

.PHONY : CMakeFiles/chapter16.dir/smartptr.cpp.obj.requires

CMakeFiles/chapter16.dir/smartptr.cpp.obj.provides: CMakeFiles/chapter16.dir/smartptr.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter16.dir\build.make CMakeFiles/chapter16.dir/smartptr.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter16.dir/smartptr.cpp.obj.provides

CMakeFiles/chapter16.dir/smartptr.cpp.obj.provides.build: CMakeFiles/chapter16.dir/smartptr.cpp.obj


# Object files for target chapter16
chapter16_OBJECTS = \
"CMakeFiles/chapter16.dir/main.cpp.obj" \
"CMakeFiles/chapter16.dir/smartptr.cpp.obj"

# External object files for target chapter16
chapter16_EXTERNAL_OBJECTS =

chapter16.exe: CMakeFiles/chapter16.dir/main.cpp.obj
chapter16.exe: CMakeFiles/chapter16.dir/smartptr.cpp.obj
chapter16.exe: CMakeFiles/chapter16.dir/build.make
chapter16.exe: CMakeFiles/chapter16.dir/linklibs.rsp
chapter16.exe: CMakeFiles/chapter16.dir/objects1.rsp
chapter16.exe: CMakeFiles/chapter16.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter16\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable chapter16.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\chapter16.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter16.dir/build: chapter16.exe

.PHONY : CMakeFiles/chapter16.dir/build

CMakeFiles/chapter16.dir/requires: CMakeFiles/chapter16.dir/main.cpp.obj.requires
CMakeFiles/chapter16.dir/requires: CMakeFiles/chapter16.dir/smartptr.cpp.obj.requires

.PHONY : CMakeFiles/chapter16.dir/requires

CMakeFiles/chapter16.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\chapter16.dir\cmake_clean.cmake
.PHONY : CMakeFiles/chapter16.dir/clean

CMakeFiles/chapter16.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\WorkSpaces\CLion\c++primer\chapter16 D:\WorkSpaces\CLion\c++primer\chapter16 D:\WorkSpaces\CLion\c++primer\chapter16\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter16\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter16\cmake-build-debug\CMakeFiles\chapter16.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chapter16.dir/depend

