# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\LZH\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\LZH\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\LZH\Clion\project\Leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\LZH\Clion\project\Leetcode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/code1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/code1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/code1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/code1.dir/flags.make

CMakeFiles/code1.dir/easy/code169.cpp.obj: CMakeFiles/code1.dir/flags.make
CMakeFiles/code1.dir/easy/code169.cpp.obj: ../easy/code169.cpp
CMakeFiles/code1.dir/easy/code169.cpp.obj: CMakeFiles/code1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\LZH\Clion\project\Leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/code1.dir/easy/code169.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/code1.dir/easy/code169.cpp.obj -MF CMakeFiles\code1.dir\easy\code169.cpp.obj.d -o CMakeFiles\code1.dir\easy\code169.cpp.obj -c E:\LZH\Clion\project\Leetcode\easy\code169.cpp

CMakeFiles/code1.dir/easy/code169.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/code1.dir/easy/code169.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\LZH\Clion\project\Leetcode\easy\code169.cpp > CMakeFiles\code1.dir\easy\code169.cpp.i

CMakeFiles/code1.dir/easy/code169.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/code1.dir/easy/code169.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\LZH\Clion\project\Leetcode\easy\code169.cpp -o CMakeFiles\code1.dir\easy\code169.cpp.s

# Object files for target code1
code1_OBJECTS = \
"CMakeFiles/code1.dir/easy/code169.cpp.obj"

# External object files for target code1
code1_EXTERNAL_OBJECTS =

code1.exe: CMakeFiles/code1.dir/easy/code169.cpp.obj
code1.exe: CMakeFiles/code1.dir/build.make
code1.exe: CMakeFiles/code1.dir/linklibs.rsp
code1.exe: CMakeFiles/code1.dir/objects1.rsp
code1.exe: CMakeFiles/code1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\LZH\Clion\project\Leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable code1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\code1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/code1.dir/build: code1.exe
.PHONY : CMakeFiles/code1.dir/build

CMakeFiles/code1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\code1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/code1.dir/clean

CMakeFiles/code1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\LZH\Clion\project\Leetcode E:\LZH\Clion\project\Leetcode E:\LZH\Clion\project\Leetcode\cmake-build-debug E:\LZH\Clion\project\Leetcode\cmake-build-debug E:\LZH\Clion\project\Leetcode\cmake-build-debug\CMakeFiles\code1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/code1.dir/depend
