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
include CMakeFiles/1331-array-rank.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/1331-array-rank.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/1331-array-rank.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1331-array-rank.dir/flags.make

CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.obj: CMakeFiles/1331-array-rank.dir/flags.make
CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.obj: D:/program/cpp/leetcode/src/discretization/1331-array-rank.cpp
CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.obj: CMakeFiles/1331-array-rank.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.obj"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.obj -MF CMakeFiles\1331-array-rank.dir\src\discretization\1331-array-rank.cpp.obj.d -o CMakeFiles\1331-array-rank.dir\src\discretization\1331-array-rank.cpp.obj -c D:\program\cpp\leetcode\src\discretization\1331-array-rank.cpp

CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.i"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\program\cpp\leetcode\src\discretization\1331-array-rank.cpp > CMakeFiles\1331-array-rank.dir\src\discretization\1331-array-rank.cpp.i

CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.s"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\program\cpp\leetcode\src\discretization\1331-array-rank.cpp -o CMakeFiles\1331-array-rank.dir\src\discretization\1331-array-rank.cpp.s

# Object files for target 1331-array-rank
1331__array__rank_OBJECTS = \
"CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.obj"

# External object files for target 1331-array-rank
1331__array__rank_EXTERNAL_OBJECTS =

1331-array-rank.exe: CMakeFiles/1331-array-rank.dir/src/discretization/1331-array-rank.cpp.obj
1331-array-rank.exe: CMakeFiles/1331-array-rank.dir/build.make
1331-array-rank.exe: CMakeFiles/1331-array-rank.dir/linklibs.rsp
1331-array-rank.exe: CMakeFiles/1331-array-rank.dir/objects1.rsp
1331-array-rank.exe: CMakeFiles/1331-array-rank.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1331-array-rank.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1331-array-rank.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1331-array-rank.dir/build: 1331-array-rank.exe
.PHONY : CMakeFiles/1331-array-rank.dir/build

CMakeFiles/1331-array-rank.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1331-array-rank.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1331-array-rank.dir/clean

CMakeFiles/1331-array-rank.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\program\cpp\leetcode D:\program\cpp\leetcode D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build\CMakeFiles\1331-array-rank.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1331-array-rank.dir/depend

