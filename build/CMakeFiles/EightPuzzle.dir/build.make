# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Citrus\Documents\GitHub\cs170-project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Citrus\Documents\GitHub\cs170-project1\build

# Include any dependencies generated for this target.
include CMakeFiles/EightPuzzle.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EightPuzzle.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EightPuzzle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EightPuzzle.dir/flags.make

CMakeFiles/EightPuzzle.dir/test.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/test.cpp.obj: ../test.cpp
CMakeFiles/EightPuzzle.dir/test.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EightPuzzle.dir/test.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/test.cpp.obj -MF CMakeFiles\EightPuzzle.dir\test.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\test.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\test.cpp

CMakeFiles/EightPuzzle.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/test.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\test.cpp > CMakeFiles\EightPuzzle.dir\test.cpp.i

CMakeFiles/EightPuzzle.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/test.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\test.cpp -o CMakeFiles\EightPuzzle.dir\test.cpp.s

CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.obj: ../src/AlgEuclidean.cpp
CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\AlgEuclidean.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\AlgEuclidean.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgEuclidean.cpp

CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgEuclidean.cpp > CMakeFiles\EightPuzzle.dir\src\AlgEuclidean.cpp.i

CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgEuclidean.cpp -o CMakeFiles\EightPuzzle.dir\src\AlgEuclidean.cpp.s

CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.obj: ../src/AlgGeneric.cpp
CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\AlgGeneric.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\AlgGeneric.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgGeneric.cpp

CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgGeneric.cpp > CMakeFiles\EightPuzzle.dir\src\AlgGeneric.cpp.i

CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgGeneric.cpp -o CMakeFiles\EightPuzzle.dir\src\AlgGeneric.cpp.s

CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.obj: ../src/AlgMisplaced.cpp
CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\AlgMisplaced.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\AlgMisplaced.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgMisplaced.cpp

CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgMisplaced.cpp > CMakeFiles\EightPuzzle.dir\src\AlgMisplaced.cpp.i

CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgMisplaced.cpp -o CMakeFiles\EightPuzzle.dir\src\AlgMisplaced.cpp.s

CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.obj: ../src/AlgUCS.cpp
CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\AlgUCS.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\AlgUCS.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgUCS.cpp

CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgUCS.cpp > CMakeFiles\EightPuzzle.dir\src\AlgUCS.cpp.i

CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\AlgUCS.cpp -o CMakeFiles\EightPuzzle.dir\src\AlgUCS.cpp.s

CMakeFiles/EightPuzzle.dir/src/Display.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/Display.cpp.obj: ../src/Display.cpp
CMakeFiles/EightPuzzle.dir/src/Display.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/EightPuzzle.dir/src/Display.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/Display.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\Display.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\Display.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Display.cpp

CMakeFiles/EightPuzzle.dir/src/Display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/Display.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Display.cpp > CMakeFiles\EightPuzzle.dir\src\Display.cpp.i

CMakeFiles/EightPuzzle.dir/src/Display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/Display.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Display.cpp -o CMakeFiles\EightPuzzle.dir\src\Display.cpp.s

CMakeFiles/EightPuzzle.dir/src/Node.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/Node.cpp.obj: ../src/Node.cpp
CMakeFiles/EightPuzzle.dir/src/Node.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/EightPuzzle.dir/src/Node.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/Node.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\Node.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\Node.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Node.cpp

CMakeFiles/EightPuzzle.dir/src/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/Node.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Node.cpp > CMakeFiles\EightPuzzle.dir\src\Node.cpp.i

CMakeFiles/EightPuzzle.dir/src/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/Node.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Node.cpp -o CMakeFiles\EightPuzzle.dir\src\Node.cpp.s

CMakeFiles/EightPuzzle.dir/src/Problem.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/Problem.cpp.obj: ../src/Problem.cpp
CMakeFiles/EightPuzzle.dir/src/Problem.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/EightPuzzle.dir/src/Problem.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/Problem.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\Problem.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\Problem.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Problem.cpp

CMakeFiles/EightPuzzle.dir/src/Problem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/Problem.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Problem.cpp > CMakeFiles\EightPuzzle.dir\src\Problem.cpp.i

CMakeFiles/EightPuzzle.dir/src/Problem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/Problem.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Problem.cpp -o CMakeFiles\EightPuzzle.dir\src\Problem.cpp.s

CMakeFiles/EightPuzzle.dir/src/Tree.cpp.obj: CMakeFiles/EightPuzzle.dir/flags.make
CMakeFiles/EightPuzzle.dir/src/Tree.cpp.obj: ../src/Tree.cpp
CMakeFiles/EightPuzzle.dir/src/Tree.cpp.obj: CMakeFiles/EightPuzzle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/EightPuzzle.dir/src/Tree.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EightPuzzle.dir/src/Tree.cpp.obj -MF CMakeFiles\EightPuzzle.dir\src\Tree.cpp.obj.d -o CMakeFiles\EightPuzzle.dir\src\Tree.cpp.obj -c C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Tree.cpp

CMakeFiles/EightPuzzle.dir/src/Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EightPuzzle.dir/src/Tree.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Tree.cpp > CMakeFiles\EightPuzzle.dir\src\Tree.cpp.i

CMakeFiles/EightPuzzle.dir/src/Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EightPuzzle.dir/src/Tree.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Citrus\Documents\GitHub\cs170-project1\src\Tree.cpp -o CMakeFiles\EightPuzzle.dir\src\Tree.cpp.s

# Object files for target EightPuzzle
EightPuzzle_OBJECTS = \
"CMakeFiles/EightPuzzle.dir/test.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/Display.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/Node.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/Problem.cpp.obj" \
"CMakeFiles/EightPuzzle.dir/src/Tree.cpp.obj"

# External object files for target EightPuzzle
EightPuzzle_EXTERNAL_OBJECTS =

EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/test.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/AlgEuclidean.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/AlgGeneric.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/AlgMisplaced.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/AlgUCS.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/Display.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/Node.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/Problem.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/src/Tree.cpp.obj
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/build.make
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/linklibs.rsp
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/objects1.rsp
EightPuzzle.exe: CMakeFiles/EightPuzzle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable EightPuzzle.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EightPuzzle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EightPuzzle.dir/build: EightPuzzle.exe
.PHONY : CMakeFiles/EightPuzzle.dir/build

CMakeFiles/EightPuzzle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EightPuzzle.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EightPuzzle.dir/clean

CMakeFiles/EightPuzzle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Citrus\Documents\GitHub\cs170-project1 C:\Users\Citrus\Documents\GitHub\cs170-project1 C:\Users\Citrus\Documents\GitHub\cs170-project1\build C:\Users\Citrus\Documents\GitHub\cs170-project1\build C:\Users\Citrus\Documents\GitHub\cs170-project1\build\CMakeFiles\EightPuzzle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EightPuzzle.dir/depend

