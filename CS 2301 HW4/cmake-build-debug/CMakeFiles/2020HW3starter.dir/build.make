# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/2020HW3starter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2020HW3starter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2020HW3starter.dir/flags.make

CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.obj: CMakeFiles/2020HW3starter.dir/flags.make
CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.obj: CMakeFiles/2020HW3starter.dir/includes_C.rsp
CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.obj: ../src/2020HW3starter.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2020HW3starter.dir\src\2020HW3starter.c.obj -c "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\2020HW3starter.c"

CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\2020HW3starter.c" > CMakeFiles\2020HW3starter.dir\src\2020HW3starter.c.i

CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\2020HW3starter.c" -o CMakeFiles\2020HW3starter.dir\src\2020HW3starter.c.s

CMakeFiles/2020HW3starter.dir/src/AdjMat.c.obj: CMakeFiles/2020HW3starter.dir/flags.make
CMakeFiles/2020HW3starter.dir/src/AdjMat.c.obj: CMakeFiles/2020HW3starter.dir/includes_C.rsp
CMakeFiles/2020HW3starter.dir/src/AdjMat.c.obj: ../src/AdjMat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/2020HW3starter.dir/src/AdjMat.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2020HW3starter.dir\src\AdjMat.c.obj -c "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\AdjMat.c"

CMakeFiles/2020HW3starter.dir/src/AdjMat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2020HW3starter.dir/src/AdjMat.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\AdjMat.c" > CMakeFiles\2020HW3starter.dir\src\AdjMat.c.i

CMakeFiles/2020HW3starter.dir/src/AdjMat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2020HW3starter.dir/src/AdjMat.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\AdjMat.c" -o CMakeFiles\2020HW3starter.dir\src\AdjMat.c.s

CMakeFiles/2020HW3starter.dir/src/LinkedList.c.obj: CMakeFiles/2020HW3starter.dir/flags.make
CMakeFiles/2020HW3starter.dir/src/LinkedList.c.obj: CMakeFiles/2020HW3starter.dir/includes_C.rsp
CMakeFiles/2020HW3starter.dir/src/LinkedList.c.obj: ../src/LinkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/2020HW3starter.dir/src/LinkedList.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2020HW3starter.dir\src\LinkedList.c.obj -c "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\LinkedList.c"

CMakeFiles/2020HW3starter.dir/src/LinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2020HW3starter.dir/src/LinkedList.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\LinkedList.c" > CMakeFiles\2020HW3starter.dir\src\LinkedList.c.i

CMakeFiles/2020HW3starter.dir/src/LinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2020HW3starter.dir/src/LinkedList.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\LinkedList.c" -o CMakeFiles\2020HW3starter.dir\src\LinkedList.c.s

CMakeFiles/2020HW3starter.dir/src/production.c.obj: CMakeFiles/2020HW3starter.dir/flags.make
CMakeFiles/2020HW3starter.dir/src/production.c.obj: CMakeFiles/2020HW3starter.dir/includes_C.rsp
CMakeFiles/2020HW3starter.dir/src/production.c.obj: ../src/production.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/2020HW3starter.dir/src/production.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2020HW3starter.dir\src\production.c.obj -c "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\production.c"

CMakeFiles/2020HW3starter.dir/src/production.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2020HW3starter.dir/src/production.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\production.c" > CMakeFiles\2020HW3starter.dir\src\production.c.i

CMakeFiles/2020HW3starter.dir/src/production.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2020HW3starter.dir/src/production.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\production.c" -o CMakeFiles\2020HW3starter.dir\src\production.c.s

CMakeFiles/2020HW3starter.dir/src/tests.c.obj: CMakeFiles/2020HW3starter.dir/flags.make
CMakeFiles/2020HW3starter.dir/src/tests.c.obj: CMakeFiles/2020HW3starter.dir/includes_C.rsp
CMakeFiles/2020HW3starter.dir/src/tests.c.obj: ../src/tests.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/2020HW3starter.dir/src/tests.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\2020HW3starter.dir\src\tests.c.obj -c "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\tests.c"

CMakeFiles/2020HW3starter.dir/src/tests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/2020HW3starter.dir/src/tests.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\tests.c" > CMakeFiles\2020HW3starter.dir\src\tests.c.i

CMakeFiles/2020HW3starter.dir/src/tests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/2020HW3starter.dir/src/tests.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\src\tests.c" -o CMakeFiles\2020HW3starter.dir\src\tests.c.s

# Object files for target 2020HW3starter
2020HW3starter_OBJECTS = \
"CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.obj" \
"CMakeFiles/2020HW3starter.dir/src/AdjMat.c.obj" \
"CMakeFiles/2020HW3starter.dir/src/LinkedList.c.obj" \
"CMakeFiles/2020HW3starter.dir/src/production.c.obj" \
"CMakeFiles/2020HW3starter.dir/src/tests.c.obj"

# External object files for target 2020HW3starter
2020HW3starter_EXTERNAL_OBJECTS =

2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/src/2020HW3starter.c.obj
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/src/AdjMat.c.obj
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/src/LinkedList.c.obj
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/src/production.c.obj
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/src/tests.c.obj
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/build.make
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/linklibs.rsp
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/objects1.rsp
2020HW3starter.exe: CMakeFiles/2020HW3starter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable 2020HW3starter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2020HW3starter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2020HW3starter.dir/build: 2020HW3starter.exe

.PHONY : CMakeFiles/2020HW3starter.dir/build

CMakeFiles/2020HW3starter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2020HW3starter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2020HW3starter.dir/clean

CMakeFiles/2020HW3starter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter" "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter" "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug" "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug" "C:\Users\supad\Desktop\Temp Code Folder\2020HW3starter\cmake-build-debug\CMakeFiles\2020HW3starter.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/2020HW3starter.dir/depend

