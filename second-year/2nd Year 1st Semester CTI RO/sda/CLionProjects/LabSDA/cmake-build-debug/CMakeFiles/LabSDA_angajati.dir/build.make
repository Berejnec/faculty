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
include CMakeFiles/LabSDA_angajati.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/LabSDA_angajati.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LabSDA_angajati.dir/flags.make

CMakeFiles/LabSDA_angajati.dir/angajati.c.obj: CMakeFiles/LabSDA_angajati.dir/flags.make
CMakeFiles/LabSDA_angajati.dir/angajati.c.obj: ../angajati.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LabSDA_angajati.dir/angajati.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LabSDA_angajati.dir\angajati.c.obj -c C:\Users\Adi\CLionProjects\LabSDA\angajati.c

CMakeFiles/LabSDA_angajati.dir/angajati.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LabSDA_angajati.dir/angajati.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Adi\CLionProjects\LabSDA\angajati.c > CMakeFiles\LabSDA_angajati.dir\angajati.c.i

CMakeFiles/LabSDA_angajati.dir/angajati.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LabSDA_angajati.dir/angajati.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Adi\CLionProjects\LabSDA\angajati.c -o CMakeFiles\LabSDA_angajati.dir\angajati.c.s

# Object files for target LabSDA_angajati
LabSDA_angajati_OBJECTS = \
"CMakeFiles/LabSDA_angajati.dir/angajati.c.obj"

# External object files for target LabSDA_angajati
LabSDA_angajati_EXTERNAL_OBJECTS =

LabSDA_angajati.exe: CMakeFiles/LabSDA_angajati.dir/angajati.c.obj
LabSDA_angajati.exe: CMakeFiles/LabSDA_angajati.dir/build.make
LabSDA_angajati.exe: CMakeFiles/LabSDA_angajati.dir/linklibs.rsp
LabSDA_angajati.exe: CMakeFiles/LabSDA_angajati.dir/objects1.rsp
LabSDA_angajati.exe: CMakeFiles/LabSDA_angajati.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LabSDA_angajati.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LabSDA_angajati.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LabSDA_angajati.dir/build: LabSDA_angajati.exe
.PHONY : CMakeFiles/LabSDA_angajati.dir/build

CMakeFiles/LabSDA_angajati.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LabSDA_angajati.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LabSDA_angajati.dir/clean

CMakeFiles/LabSDA_angajati.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Adi\CLionProjects\LabSDA C:\Users\Adi\CLionProjects\LabSDA C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug C:\Users\Adi\CLionProjects\LabSDA\cmake-build-debug\CMakeFiles\LabSDA_angajati.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LabSDA_angajati.dir/depend

