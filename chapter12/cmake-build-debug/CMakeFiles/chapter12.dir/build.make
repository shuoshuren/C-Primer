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
CMAKE_SOURCE_DIR = D:\WorkSpaces\CLion\c++primer\chapter12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chapter12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter12.dir/flags.make

CMakeFiles/chapter12.dir/main.cpp.obj: CMakeFiles/chapter12.dir/flags.make
CMakeFiles/chapter12.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chapter12.dir/main.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter12.dir\main.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter12\main.cpp

CMakeFiles/chapter12.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter12.dir/main.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter12\main.cpp > CMakeFiles\chapter12.dir\main.cpp.i

CMakeFiles/chapter12.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter12.dir/main.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter12\main.cpp -o CMakeFiles\chapter12.dir\main.cpp.s

CMakeFiles/chapter12.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/chapter12.dir/main.cpp.obj.requires

CMakeFiles/chapter12.dir/main.cpp.obj.provides: CMakeFiles/chapter12.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter12.dir\build.make CMakeFiles/chapter12.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter12.dir/main.cpp.obj.provides

CMakeFiles/chapter12.dir/main.cpp.obj.provides.build: CMakeFiles/chapter12.dir/main.cpp.obj


CMakeFiles/chapter12.dir/StringBad.cpp.obj: CMakeFiles/chapter12.dir/flags.make
CMakeFiles/chapter12.dir/StringBad.cpp.obj: ../StringBad.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/chapter12.dir/StringBad.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter12.dir\StringBad.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter12\StringBad.cpp

CMakeFiles/chapter12.dir/StringBad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter12.dir/StringBad.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter12\StringBad.cpp > CMakeFiles\chapter12.dir\StringBad.cpp.i

CMakeFiles/chapter12.dir/StringBad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter12.dir/StringBad.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter12\StringBad.cpp -o CMakeFiles\chapter12.dir\StringBad.cpp.s

CMakeFiles/chapter12.dir/StringBad.cpp.obj.requires:

.PHONY : CMakeFiles/chapter12.dir/StringBad.cpp.obj.requires

CMakeFiles/chapter12.dir/StringBad.cpp.obj.provides: CMakeFiles/chapter12.dir/StringBad.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter12.dir\build.make CMakeFiles/chapter12.dir/StringBad.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter12.dir/StringBad.cpp.obj.provides

CMakeFiles/chapter12.dir/StringBad.cpp.obj.provides.build: CMakeFiles/chapter12.dir/StringBad.cpp.obj


CMakeFiles/chapter12.dir/String.cpp.obj: CMakeFiles/chapter12.dir/flags.make
CMakeFiles/chapter12.dir/String.cpp.obj: ../String.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/chapter12.dir/String.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter12.dir\String.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter12\String.cpp

CMakeFiles/chapter12.dir/String.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter12.dir/String.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter12\String.cpp > CMakeFiles\chapter12.dir\String.cpp.i

CMakeFiles/chapter12.dir/String.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter12.dir/String.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter12\String.cpp -o CMakeFiles\chapter12.dir\String.cpp.s

CMakeFiles/chapter12.dir/String.cpp.obj.requires:

.PHONY : CMakeFiles/chapter12.dir/String.cpp.obj.requires

CMakeFiles/chapter12.dir/String.cpp.obj.provides: CMakeFiles/chapter12.dir/String.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter12.dir\build.make CMakeFiles/chapter12.dir/String.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter12.dir/String.cpp.obj.provides

CMakeFiles/chapter12.dir/String.cpp.obj.provides.build: CMakeFiles/chapter12.dir/String.cpp.obj


CMakeFiles/chapter12.dir/Queue.cpp.obj: CMakeFiles/chapter12.dir/flags.make
CMakeFiles/chapter12.dir/Queue.cpp.obj: ../Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/chapter12.dir/Queue.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter12.dir\Queue.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter12\Queue.cpp

CMakeFiles/chapter12.dir/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter12.dir/Queue.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter12\Queue.cpp > CMakeFiles\chapter12.dir\Queue.cpp.i

CMakeFiles/chapter12.dir/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter12.dir/Queue.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter12\Queue.cpp -o CMakeFiles\chapter12.dir\Queue.cpp.s

CMakeFiles/chapter12.dir/Queue.cpp.obj.requires:

.PHONY : CMakeFiles/chapter12.dir/Queue.cpp.obj.requires

CMakeFiles/chapter12.dir/Queue.cpp.obj.provides: CMakeFiles/chapter12.dir/Queue.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter12.dir\build.make CMakeFiles/chapter12.dir/Queue.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter12.dir/Queue.cpp.obj.provides

CMakeFiles/chapter12.dir/Queue.cpp.obj.provides.build: CMakeFiles/chapter12.dir/Queue.cpp.obj


CMakeFiles/chapter12.dir/Customer.cpp.obj: CMakeFiles/chapter12.dir/flags.make
CMakeFiles/chapter12.dir/Customer.cpp.obj: ../Customer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/chapter12.dir/Customer.cpp.obj"
	D:\Software\tools\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chapter12.dir\Customer.cpp.obj -c D:\WorkSpaces\CLion\c++primer\chapter12\Customer.cpp

CMakeFiles/chapter12.dir/Customer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter12.dir/Customer.cpp.i"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpaces\CLion\c++primer\chapter12\Customer.cpp > CMakeFiles\chapter12.dir\Customer.cpp.i

CMakeFiles/chapter12.dir/Customer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter12.dir/Customer.cpp.s"
	D:\Software\tools\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpaces\CLion\c++primer\chapter12\Customer.cpp -o CMakeFiles\chapter12.dir\Customer.cpp.s

CMakeFiles/chapter12.dir/Customer.cpp.obj.requires:

.PHONY : CMakeFiles/chapter12.dir/Customer.cpp.obj.requires

CMakeFiles/chapter12.dir/Customer.cpp.obj.provides: CMakeFiles/chapter12.dir/Customer.cpp.obj.requires
	$(MAKE) -f CMakeFiles\chapter12.dir\build.make CMakeFiles/chapter12.dir/Customer.cpp.obj.provides.build
.PHONY : CMakeFiles/chapter12.dir/Customer.cpp.obj.provides

CMakeFiles/chapter12.dir/Customer.cpp.obj.provides.build: CMakeFiles/chapter12.dir/Customer.cpp.obj


# Object files for target chapter12
chapter12_OBJECTS = \
"CMakeFiles/chapter12.dir/main.cpp.obj" \
"CMakeFiles/chapter12.dir/StringBad.cpp.obj" \
"CMakeFiles/chapter12.dir/String.cpp.obj" \
"CMakeFiles/chapter12.dir/Queue.cpp.obj" \
"CMakeFiles/chapter12.dir/Customer.cpp.obj"

# External object files for target chapter12
chapter12_EXTERNAL_OBJECTS =

chapter12.exe: CMakeFiles/chapter12.dir/main.cpp.obj
chapter12.exe: CMakeFiles/chapter12.dir/StringBad.cpp.obj
chapter12.exe: CMakeFiles/chapter12.dir/String.cpp.obj
chapter12.exe: CMakeFiles/chapter12.dir/Queue.cpp.obj
chapter12.exe: CMakeFiles/chapter12.dir/Customer.cpp.obj
chapter12.exe: CMakeFiles/chapter12.dir/build.make
chapter12.exe: CMakeFiles/chapter12.dir/linklibs.rsp
chapter12.exe: CMakeFiles/chapter12.dir/objects1.rsp
chapter12.exe: CMakeFiles/chapter12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable chapter12.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\chapter12.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter12.dir/build: chapter12.exe

.PHONY : CMakeFiles/chapter12.dir/build

CMakeFiles/chapter12.dir/requires: CMakeFiles/chapter12.dir/main.cpp.obj.requires
CMakeFiles/chapter12.dir/requires: CMakeFiles/chapter12.dir/StringBad.cpp.obj.requires
CMakeFiles/chapter12.dir/requires: CMakeFiles/chapter12.dir/String.cpp.obj.requires
CMakeFiles/chapter12.dir/requires: CMakeFiles/chapter12.dir/Queue.cpp.obj.requires
CMakeFiles/chapter12.dir/requires: CMakeFiles/chapter12.dir/Customer.cpp.obj.requires

.PHONY : CMakeFiles/chapter12.dir/requires

CMakeFiles/chapter12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\chapter12.dir\cmake_clean.cmake
.PHONY : CMakeFiles/chapter12.dir/clean

CMakeFiles/chapter12.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\WorkSpaces\CLion\c++primer\chapter12 D:\WorkSpaces\CLion\c++primer\chapter12 D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug D:\WorkSpaces\CLion\c++primer\chapter12\cmake-build-debug\CMakeFiles\chapter12.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chapter12.dir/depend

