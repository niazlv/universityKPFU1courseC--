# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/niazleuskin/temp/university1courseC++/laba4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/niazleuskin/temp/university1courseC++/laba4/build

# Include any dependencies generated for this target.
include CMakeFiles/laba4_5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/laba4_5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/laba4_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laba4_5.dir/flags.make

CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o: CMakeFiles/laba4_5.dir/flags.make
CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o: /Users/niazleuskin/temp/university1courseC++/laba4/src/labwork4_5.cpp
CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o: CMakeFiles/laba4_5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/niazleuskin/temp/university1courseC++/laba4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o -MF CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o.d -o CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o -c /Users/niazleuskin/temp/university1courseC++/laba4/src/labwork4_5.cpp

CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/niazleuskin/temp/university1courseC++/laba4/src/labwork4_5.cpp > CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.i

CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/niazleuskin/temp/university1courseC++/laba4/src/labwork4_5.cpp -o CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.s

# Object files for target laba4_5
laba4_5_OBJECTS = \
"CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o"

# External object files for target laba4_5
laba4_5_EXTERNAL_OBJECTS =

bin/laba4_5: CMakeFiles/laba4_5.dir/src/labwork4_5.cpp.o
bin/laba4_5: CMakeFiles/laba4_5.dir/build.make
bin/laba4_5: CMakeFiles/laba4_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/niazleuskin/temp/university1courseC++/laba4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/laba4_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/laba4_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laba4_5.dir/build: bin/laba4_5
.PHONY : CMakeFiles/laba4_5.dir/build

CMakeFiles/laba4_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/laba4_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/laba4_5.dir/clean

CMakeFiles/laba4_5.dir/depend:
	cd /Users/niazleuskin/temp/university1courseC++/laba4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/niazleuskin/temp/university1courseC++/laba4 /Users/niazleuskin/temp/university1courseC++/laba4 /Users/niazleuskin/temp/university1courseC++/laba4/build /Users/niazleuskin/temp/university1courseC++/laba4/build /Users/niazleuskin/temp/university1courseC++/laba4/build/CMakeFiles/laba4_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/laba4_5.dir/depend

