# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/parallels/Desktop/CLI-resume

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/Desktop/CLI-resume/build

# Include any dependencies generated for this target.
include CMakeFiles/abhav-resume.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/abhav-resume.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/abhav-resume.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/abhav-resume.dir/flags.make

CMakeFiles/abhav-resume.dir/src/main.cpp.o: CMakeFiles/abhav-resume.dir/flags.make
CMakeFiles/abhav-resume.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/abhav-resume.dir/src/main.cpp.o: CMakeFiles/abhav-resume.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Desktop/CLI-resume/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/abhav-resume.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/abhav-resume.dir/src/main.cpp.o -MF CMakeFiles/abhav-resume.dir/src/main.cpp.o.d -o CMakeFiles/abhav-resume.dir/src/main.cpp.o -c /home/parallels/Desktop/CLI-resume/src/main.cpp

CMakeFiles/abhav-resume.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abhav-resume.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Desktop/CLI-resume/src/main.cpp > CMakeFiles/abhav-resume.dir/src/main.cpp.i

CMakeFiles/abhav-resume.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abhav-resume.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Desktop/CLI-resume/src/main.cpp -o CMakeFiles/abhav-resume.dir/src/main.cpp.s

CMakeFiles/abhav-resume.dir/src/resume.cpp.o: CMakeFiles/abhav-resume.dir/flags.make
CMakeFiles/abhav-resume.dir/src/resume.cpp.o: ../src/resume.cpp
CMakeFiles/abhav-resume.dir/src/resume.cpp.o: CMakeFiles/abhav-resume.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Desktop/CLI-resume/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/abhav-resume.dir/src/resume.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/abhav-resume.dir/src/resume.cpp.o -MF CMakeFiles/abhav-resume.dir/src/resume.cpp.o.d -o CMakeFiles/abhav-resume.dir/src/resume.cpp.o -c /home/parallels/Desktop/CLI-resume/src/resume.cpp

CMakeFiles/abhav-resume.dir/src/resume.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/abhav-resume.dir/src/resume.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Desktop/CLI-resume/src/resume.cpp > CMakeFiles/abhav-resume.dir/src/resume.cpp.i

CMakeFiles/abhav-resume.dir/src/resume.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/abhav-resume.dir/src/resume.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Desktop/CLI-resume/src/resume.cpp -o CMakeFiles/abhav-resume.dir/src/resume.cpp.s

# Object files for target abhav-resume
abhav__resume_OBJECTS = \
"CMakeFiles/abhav-resume.dir/src/main.cpp.o" \
"CMakeFiles/abhav-resume.dir/src/resume.cpp.o"

# External object files for target abhav-resume
abhav__resume_EXTERNAL_OBJECTS =

abhav-resume: CMakeFiles/abhav-resume.dir/src/main.cpp.o
abhav-resume: CMakeFiles/abhav-resume.dir/src/resume.cpp.o
abhav-resume: CMakeFiles/abhav-resume.dir/build.make
abhav-resume: CMakeFiles/abhav-resume.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/Desktop/CLI-resume/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable abhav-resume"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/abhav-resume.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/abhav-resume.dir/build: abhav-resume
.PHONY : CMakeFiles/abhav-resume.dir/build

CMakeFiles/abhav-resume.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/abhav-resume.dir/cmake_clean.cmake
.PHONY : CMakeFiles/abhav-resume.dir/clean

CMakeFiles/abhav-resume.dir/depend:
	cd /home/parallels/Desktop/CLI-resume/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/Desktop/CLI-resume /home/parallels/Desktop/CLI-resume /home/parallels/Desktop/CLI-resume/build /home/parallels/Desktop/CLI-resume/build /home/parallels/Desktop/CLI-resume/build/CMakeFiles/abhav-resume.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/abhav-resume.dir/depend

