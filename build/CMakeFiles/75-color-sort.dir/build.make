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
include CMakeFiles/75-color-sort.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/75-color-sort.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/75-color-sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/75-color-sort.dir/flags.make

CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.obj: CMakeFiles/75-color-sort.dir/flags.make
CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.obj: D:/program/cpp/leetcode/src/sort/75-sort-color.cpp
CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.obj: CMakeFiles/75-color-sort.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.obj"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.obj -MF CMakeFiles\75-color-sort.dir\src\sort\75-sort-color.cpp.obj.d -o CMakeFiles\75-color-sort.dir\src\sort\75-sort-color.cpp.obj -c D:\program\cpp\leetcode\src\sort\75-sort-color.cpp

CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.i"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\program\cpp\leetcode\src\sort\75-sort-color.cpp > CMakeFiles\75-color-sort.dir\src\sort\75-sort-color.cpp.i

CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.s"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\program\cpp\leetcode\src\sort\75-sort-color.cpp -o CMakeFiles\75-color-sort.dir\src\sort\75-sort-color.cpp.s

# Object files for target 75-color-sort
75__color__sort_OBJECTS = \
"CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.obj"

# External object files for target 75-color-sort
75__color__sort_EXTERNAL_OBJECTS =

75-color-sort.exe: CMakeFiles/75-color-sort.dir/src/sort/75-sort-color.cpp.obj
75-color-sort.exe: CMakeFiles/75-color-sort.dir/build.make
75-color-sort.exe: CMakeFiles/75-color-sort.dir/linklibs.rsp
75-color-sort.exe: CMakeFiles/75-color-sort.dir/objects1.rsp
75-color-sort.exe: CMakeFiles/75-color-sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 75-color-sort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\75-color-sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/75-color-sort.dir/build: 75-color-sort.exe
.PHONY : CMakeFiles/75-color-sort.dir/build

CMakeFiles/75-color-sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\75-color-sort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/75-color-sort.dir/clean

CMakeFiles/75-color-sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\program\cpp\leetcode D:\program\cpp\leetcode D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build\CMakeFiles\75-color-sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/75-color-sort.dir/depend

