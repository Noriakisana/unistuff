# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/jochenm/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jochenm/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jochenm/CLionProjects/stud

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jochenm/CLionProjects/stud/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stud.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/stud.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stud.dir/flags.make

CMakeFiles/stud.dir/ue8.cpp.o: CMakeFiles/stud.dir/flags.make
CMakeFiles/stud.dir/ue8.cpp.o: ../ue8.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jochenm/CLionProjects/stud/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stud.dir/ue8.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stud.dir/ue8.cpp.o -c /home/jochenm/CLionProjects/stud/ue8.cpp

CMakeFiles/stud.dir/ue8.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stud.dir/ue8.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jochenm/CLionProjects/stud/ue8.cpp > CMakeFiles/stud.dir/ue8.cpp.i

CMakeFiles/stud.dir/ue8.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stud.dir/ue8.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jochenm/CLionProjects/stud/ue8.cpp -o CMakeFiles/stud.dir/ue8.cpp.s

# Object files for target stud
stud_OBJECTS = \
"CMakeFiles/stud.dir/ue8.cpp.o"

# External object files for target stud
stud_EXTERNAL_OBJECTS =

stud: CMakeFiles/stud.dir/ue8.cpp.o
stud: CMakeFiles/stud.dir/build.make
stud: CMakeFiles/stud.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jochenm/CLionProjects/stud/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stud"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stud.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stud.dir/build: stud
.PHONY : CMakeFiles/stud.dir/build

CMakeFiles/stud.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stud.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stud.dir/clean

CMakeFiles/stud.dir/depend:
	cd /home/jochenm/CLionProjects/stud/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jochenm/CLionProjects/stud /home/jochenm/CLionProjects/stud /home/jochenm/CLionProjects/stud/cmake-build-debug /home/jochenm/CLionProjects/stud/cmake-build-debug /home/jochenm/CLionProjects/stud/cmake-build-debug/CMakeFiles/stud.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stud.dir/depend

