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
CMAKE_SOURCE_DIR = /root/cpp/learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/cpp/learn/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/merge_sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/merge_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/merge_sort.dir/flags.make

CMakeFiles/merge_sort.dir/merge_sort.cpp.o: CMakeFiles/merge_sort.dir/flags.make
CMakeFiles/merge_sort.dir/merge_sort.cpp.o: ../merge_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/cpp/learn/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/merge_sort.dir/merge_sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/merge_sort.dir/merge_sort.cpp.o -c /root/cpp/learn/merge_sort.cpp

CMakeFiles/merge_sort.dir/merge_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/merge_sort.dir/merge_sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/cpp/learn/merge_sort.cpp > CMakeFiles/merge_sort.dir/merge_sort.cpp.i

CMakeFiles/merge_sort.dir/merge_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/merge_sort.dir/merge_sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/cpp/learn/merge_sort.cpp -o CMakeFiles/merge_sort.dir/merge_sort.cpp.s

CMakeFiles/merge_sort.dir/merge_sort.cpp.o.requires:

.PHONY : CMakeFiles/merge_sort.dir/merge_sort.cpp.o.requires

CMakeFiles/merge_sort.dir/merge_sort.cpp.o.provides: CMakeFiles/merge_sort.dir/merge_sort.cpp.o.requires
	$(MAKE) -f CMakeFiles/merge_sort.dir/build.make CMakeFiles/merge_sort.dir/merge_sort.cpp.o.provides.build
.PHONY : CMakeFiles/merge_sort.dir/merge_sort.cpp.o.provides

CMakeFiles/merge_sort.dir/merge_sort.cpp.o.provides.build: CMakeFiles/merge_sort.dir/merge_sort.cpp.o


CMakeFiles/merge_sort.dir/quick_sort.cpp.o: CMakeFiles/merge_sort.dir/flags.make
CMakeFiles/merge_sort.dir/quick_sort.cpp.o: ../quick_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/cpp/learn/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/merge_sort.dir/quick_sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/merge_sort.dir/quick_sort.cpp.o -c /root/cpp/learn/quick_sort.cpp

CMakeFiles/merge_sort.dir/quick_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/merge_sort.dir/quick_sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/cpp/learn/quick_sort.cpp > CMakeFiles/merge_sort.dir/quick_sort.cpp.i

CMakeFiles/merge_sort.dir/quick_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/merge_sort.dir/quick_sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/cpp/learn/quick_sort.cpp -o CMakeFiles/merge_sort.dir/quick_sort.cpp.s

CMakeFiles/merge_sort.dir/quick_sort.cpp.o.requires:

.PHONY : CMakeFiles/merge_sort.dir/quick_sort.cpp.o.requires

CMakeFiles/merge_sort.dir/quick_sort.cpp.o.provides: CMakeFiles/merge_sort.dir/quick_sort.cpp.o.requires
	$(MAKE) -f CMakeFiles/merge_sort.dir/build.make CMakeFiles/merge_sort.dir/quick_sort.cpp.o.provides.build
.PHONY : CMakeFiles/merge_sort.dir/quick_sort.cpp.o.provides

CMakeFiles/merge_sort.dir/quick_sort.cpp.o.provides.build: CMakeFiles/merge_sort.dir/quick_sort.cpp.o


# Object files for target merge_sort
merge_sort_OBJECTS = \
"CMakeFiles/merge_sort.dir/merge_sort.cpp.o" \
"CMakeFiles/merge_sort.dir/quick_sort.cpp.o"

# External object files for target merge_sort
merge_sort_EXTERNAL_OBJECTS =

../bin/merge_sort: CMakeFiles/merge_sort.dir/merge_sort.cpp.o
../bin/merge_sort: CMakeFiles/merge_sort.dir/quick_sort.cpp.o
../bin/merge_sort: CMakeFiles/merge_sort.dir/build.make
../bin/merge_sort: CMakeFiles/merge_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/cpp/learn/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/merge_sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/merge_sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/merge_sort.dir/build: ../bin/merge_sort

.PHONY : CMakeFiles/merge_sort.dir/build

CMakeFiles/merge_sort.dir/requires: CMakeFiles/merge_sort.dir/merge_sort.cpp.o.requires
CMakeFiles/merge_sort.dir/requires: CMakeFiles/merge_sort.dir/quick_sort.cpp.o.requires

.PHONY : CMakeFiles/merge_sort.dir/requires

CMakeFiles/merge_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/merge_sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/merge_sort.dir/clean

CMakeFiles/merge_sort.dir/depend:
	cd /root/cpp/learn/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/cpp/learn /root/cpp/learn /root/cpp/learn/cmake-build-debug /root/cpp/learn/cmake-build-debug /root/cpp/learn/cmake-build-debug/CMakeFiles/merge_sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/merge_sort.dir/depend

