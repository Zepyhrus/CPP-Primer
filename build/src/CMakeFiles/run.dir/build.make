# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sherk/Workspace/CPP/CPP-Primer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sherk/Workspace/CPP/CPP-Primer/build

# Include any dependencies generated for this target.
include src/CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/run.dir/flags.make

src/CMakeFiles/run.dir/Sales_item.cc.o: src/CMakeFiles/run.dir/flags.make
src/CMakeFiles/run.dir/Sales_item.cc.o: ../src/Sales_item.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sherk/Workspace/CPP/CPP-Primer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/run.dir/Sales_item.cc.o"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/Sales_item.cc.o -c /home/sherk/Workspace/CPP/CPP-Primer/src/Sales_item.cc

src/CMakeFiles/run.dir/Sales_item.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/Sales_item.cc.i"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sherk/Workspace/CPP/CPP-Primer/src/Sales_item.cc > CMakeFiles/run.dir/Sales_item.cc.i

src/CMakeFiles/run.dir/Sales_item.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/Sales_item.cc.s"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sherk/Workspace/CPP/CPP-Primer/src/Sales_item.cc -o CMakeFiles/run.dir/Sales_item.cc.s

src/CMakeFiles/run.dir/Sales_item.cc.o.requires:

.PHONY : src/CMakeFiles/run.dir/Sales_item.cc.o.requires

src/CMakeFiles/run.dir/Sales_item.cc.o.provides: src/CMakeFiles/run.dir/Sales_item.cc.o.requires
	$(MAKE) -f src/CMakeFiles/run.dir/build.make src/CMakeFiles/run.dir/Sales_item.cc.o.provides.build
.PHONY : src/CMakeFiles/run.dir/Sales_item.cc.o.provides

src/CMakeFiles/run.dir/Sales_item.cc.o.provides.build: src/CMakeFiles/run.dir/Sales_item.cc.o


# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/Sales_item.cc.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

../bin/run: src/CMakeFiles/run.dir/Sales_item.cc.o
../bin/run: src/CMakeFiles/run.dir/build.make
../bin/run: src/CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sherk/Workspace/CPP/CPP-Primer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/run"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/run.dir/build: ../bin/run

.PHONY : src/CMakeFiles/run.dir/build

src/CMakeFiles/run.dir/requires: src/CMakeFiles/run.dir/Sales_item.cc.o.requires

.PHONY : src/CMakeFiles/run.dir/requires

src/CMakeFiles/run.dir/clean:
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/run.dir/clean

src/CMakeFiles/run.dir/depend:
	cd /home/sherk/Workspace/CPP/CPP-Primer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sherk/Workspace/CPP/CPP-Primer /home/sherk/Workspace/CPP/CPP-Primer/src /home/sherk/Workspace/CPP/CPP-Primer/build /home/sherk/Workspace/CPP/CPP-Primer/build/src /home/sherk/Workspace/CPP/CPP-Primer/build/src/CMakeFiles/run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/run.dir/depend

