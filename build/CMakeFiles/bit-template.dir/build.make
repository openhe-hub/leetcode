# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = D:\software\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\software\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\program\cpp\leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\program\cpp\leetcode\build

# Include any dependencies generated for this target.
include CMakeFiles/bit-template.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bit-template.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bit-template.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bit-template.dir/flags.make

CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.obj: CMakeFiles/bit-template.dir/flags.make
CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.obj: D:/program/cpp/leetcode/src/bit/bit-template.cpp
CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.obj: CMakeFiles/bit-template.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.obj"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.obj -MF CMakeFiles\bit-template.dir\src\bit\bit-template.cpp.obj.d -o CMakeFiles\bit-template.dir\src\bit\bit-template.cpp.obj -c D:\program\cpp\leetcode\src\bit\bit-template.cpp

CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.i"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\program\cpp\leetcode\src\bit\bit-template.cpp > CMakeFiles\bit-template.dir\src\bit\bit-template.cpp.i

CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.s"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\program\cpp\leetcode\src\bit\bit-template.cpp -o CMakeFiles\bit-template.dir\src\bit\bit-template.cpp.s

# Object files for target bit-template
bit__template_OBJECTS = \
"CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.obj"

# External object files for target bit-template
bit__template_EXTERNAL_OBJECTS =

bit-template.exe: CMakeFiles/bit-template.dir/src/bit/bit-template.cpp.obj
bit-template.exe: CMakeFiles/bit-template.dir/build.make
bit-template.exe: CMakeFiles/bit-template.dir/linklibs.rsp
bit-template.exe: CMakeFiles/bit-template.dir/objects1.rsp
bit-template.exe: CMakeFiles/bit-template.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bit-template.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bit-template.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bit-template.dir/build: bit-template.exe
.PHONY : CMakeFiles/bit-template.dir/build

CMakeFiles/bit-template.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bit-template.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bit-template.dir/clean

CMakeFiles/bit-template.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\program\cpp\leetcode D:\program\cpp\leetcode D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build\CMakeFiles\bit-template.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bit-template.dir/depend
