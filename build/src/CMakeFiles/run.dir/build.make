# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

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

src/CMakeFiles/run.dir/main.cpp.o: src/CMakeFiles/run.dir/flags.make
src/CMakeFiles/run.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sherk/Workspace/CPP/CPP-Primer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/run.dir/main.cpp.o"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/main.cpp.o -c /home/sherk/Workspace/CPP/CPP-Primer/src/main.cpp

src/CMakeFiles/run.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/main.cpp.i"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sherk/Workspace/CPP/CPP-Primer/src/main.cpp > CMakeFiles/run.dir/main.cpp.i

src/CMakeFiles/run.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/main.cpp.s"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sherk/Workspace/CPP/CPP-Primer/src/main.cpp -o CMakeFiles/run.dir/main.cpp.s

# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/main.cpp.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

../bin/run: src/CMakeFiles/run.dir/main.cpp.o
../bin/run: src/CMakeFiles/run.dir/build.make
../bin/run: /home/sherk/Workspace/pytorch/torch/lib/libtorch.so
../bin/run: /home/sherk/Workspace/pytorch/torch/lib/libc10.so
../bin/run: /usr/lib/x86_64-linux-gnu/libcuda.so
../bin/run: /usr/local/cuda/lib64/libnvrtc.so
../bin/run: /usr/local/cuda/lib64/libnvToolsExt.so
../bin/run: /usr/local/cuda/lib64/libcudart.so
../bin/run: /home/sherk/Workspace/pytorch/torch/lib/libc10_cuda.so
../bin/run: /usr/lib/x86_64-linux-gnu/libgflags.so.2.2.1
../bin/run: /home/sherk/Workspace/pytorch/torch/lib/libc10_cuda.so
../bin/run: /home/sherk/Workspace/pytorch/torch/lib/libc10.so
../bin/run: /home/sherk/anaconda3/envs/torch-gpu/lib/libnvToolsExt.so
../bin/run: /usr/local/cuda/lib64/libcudart.so
../bin/run: /usr/local/cuda/lib64/libcufft.so
../bin/run: /usr/local/cuda/lib64/libcurand.so
../bin/run: /usr/local/cuda/lib64/libcudnn.so
../bin/run: /usr/local/cuda/lib64/libcublas.so
../bin/run: src/CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sherk/Workspace/CPP/CPP-Primer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/run"
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/run.dir/build: ../bin/run

.PHONY : src/CMakeFiles/run.dir/build

src/CMakeFiles/run.dir/clean:
	cd /home/sherk/Workspace/CPP/CPP-Primer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/run.dir/clean

src/CMakeFiles/run.dir/depend:
	cd /home/sherk/Workspace/CPP/CPP-Primer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sherk/Workspace/CPP/CPP-Primer /home/sherk/Workspace/CPP/CPP-Primer/src /home/sherk/Workspace/CPP/CPP-Primer/build /home/sherk/Workspace/CPP/CPP-Primer/build/src /home/sherk/Workspace/CPP/CPP-Primer/build/src/CMakeFiles/run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/run.dir/depend

