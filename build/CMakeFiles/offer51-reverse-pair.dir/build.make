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
include CMakeFiles/offer51-reverse-pair.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/offer51-reverse-pair.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/offer51-reverse-pair.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/offer51-reverse-pair.dir/flags.make

CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.obj: CMakeFiles/offer51-reverse-pair.dir/flags.make
CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.obj: D:/program/cpp/leetcode/src/bit/offer51-reverse-pair.cpp
CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.obj: CMakeFiles/offer51-reverse-pair.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.obj"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.obj -MF CMakeFiles\offer51-reverse-pair.dir\src\bit\offer51-reverse-pair.cpp.obj.d -o CMakeFiles\offer51-reverse-pair.dir\src\bit\offer51-reverse-pair.cpp.obj -c D:\program\cpp\leetcode\src\bit\offer51-reverse-pair.cpp

CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.i"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\program\cpp\leetcode\src\bit\offer51-reverse-pair.cpp > CMakeFiles\offer51-reverse-pair.dir\src\bit\offer51-reverse-pair.cpp.i

CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.s"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\program\cpp\leetcode\src\bit\offer51-reverse-pair.cpp -o CMakeFiles\offer51-reverse-pair.dir\src\bit\offer51-reverse-pair.cpp.s

# Object files for target offer51-reverse-pair
offer51__reverse__pair_OBJECTS = \
"CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.obj"

# External object files for target offer51-reverse-pair
offer51__reverse__pair_EXTERNAL_OBJECTS =

offer51-reverse-pair.exe: CMakeFiles/offer51-reverse-pair.dir/src/bit/offer51-reverse-pair.cpp.obj
offer51-reverse-pair.exe: CMakeFiles/offer51-reverse-pair.dir/build.make
offer51-reverse-pair.exe: CMakeFiles/offer51-reverse-pair.dir/linklibs.rsp
offer51-reverse-pair.exe: CMakeFiles/offer51-reverse-pair.dir/objects1.rsp
offer51-reverse-pair.exe: CMakeFiles/offer51-reverse-pair.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\program\cpp\leetcode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable offer51-reverse-pair.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\offer51-reverse-pair.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/offer51-reverse-pair.dir/build: offer51-reverse-pair.exe
.PHONY : CMakeFiles/offer51-reverse-pair.dir/build

CMakeFiles/offer51-reverse-pair.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\offer51-reverse-pair.dir\cmake_clean.cmake
.PHONY : CMakeFiles/offer51-reverse-pair.dir/clean

CMakeFiles/offer51-reverse-pair.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\program\cpp\leetcode D:\program\cpp\leetcode D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build D:\program\cpp\leetcode\build\CMakeFiles\offer51-reverse-pair.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/offer51-reverse-pair.dir/depend

