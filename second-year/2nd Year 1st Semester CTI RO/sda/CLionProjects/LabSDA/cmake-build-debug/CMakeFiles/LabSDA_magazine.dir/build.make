# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Adi\CLionProjects\LabSDA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LabSDA_magazine.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/LabSDA_magazine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LabSDA_magazine.dir/flags.make

CMakeFiles/LabSDA_magazine.dir/magazine.c.obj: CMakeFiles/LabSDA_magazine.dir/flags.make
CMakeFiles/LabSDA_magazine.dir/magazine.c.obj: ../magazine.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LabSDA_magazine.dir/magazine.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LabSDA_magazine.dir\magazine.c.obj -c C:\Users\Adi\CLionProjects\LabSDA\magazine.c

CMakeFiles/LabSDA_magazine.dir/magazine.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LabSDA_magazine.dir/magazine.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Adi\CLionProjects\LabSDA\magazine.c > CMakeFiles\LabSDA_magazine.dir\magazine.c.i

CMakeFiles/LabSDA_magazine.dir/magazine.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LabSDA_magazine.dir/magazine.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Adi\CLionProjects\LabSDA\magazine.c -o CMakeFiles\LabSDA_magazine.dir\magazine.c.s

# Object files for target LabSDA_magazine
LabSDA_magazine_OBJECTS = \
"CMakeFiles/LabSDA_magazine.dir/magazine.c.obj"

# External object files for target LabSDA_magazine
LabSDA_magazine_EXTERNAL_OBJECTS =

LabSDA_magazine.exe: CMakeFiles/LabSDA_magazine.dir/magazine.c.obj
LabSDA_magazine.exe: CMakeFiles/LabSDA_magazine.dir/build.make
LabSDA_magazine.exe: CMakeFiles/LabSDA_magazine.dir/linklibs.rsp
LabSDA_magazine.exe: CMakeFiles/LabSDA_magazine.dir/objects1.rsp
LabSDA_magazine.exe: CMakeFiles/LabSDA_magazine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LabSDA_magazine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LabSDA_magazine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LabSDA_magazine.dir/build: LabSDA_magazine.exe
.PHONY : CMakeFiles/LabSDA_magazine.dir/build

CMakeFiles/LabSDA_magazine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LabSDA_magazine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LabSDA_magazine.dir/clean

CMakeFiles/LabSDA_magazine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Adi\CLionProjects\LabSDA C:\Users\Adi\CLionProjects\LabSDA C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug\CMakeFiles\LabSDA_magazine.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LabSDA_magazine.dir/depend

