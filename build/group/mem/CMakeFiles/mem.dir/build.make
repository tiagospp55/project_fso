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
CMAKE_SOURCE_DIR = /home/tiago/Desktop/somm22-so-p3g2/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tiago/Desktop/somm22-so-p3g2/build

# Include any dependencies generated for this target.
include group/mem/CMakeFiles/mem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include group/mem/CMakeFiles/mem.dir/compiler_depend.make

# Include the progress variables for this target.
include group/mem/CMakeFiles/mem.dir/progress.make

# Include the compile flags for this target's objects.
include group/mem/CMakeFiles/mem.dir/flags.make

group/mem/CMakeFiles/mem.dir/mem.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem.cpp
group/mem/CMakeFiles/mem.dir/mem.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object group/mem/CMakeFiles/mem.dir/mem.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem.cpp.o -MF CMakeFiles/mem.dir/mem.cpp.o.d -o CMakeFiles/mem.dir/mem.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem.cpp

group/mem/CMakeFiles/mem.dir/mem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem.cpp > CMakeFiles/mem.dir/mem.cpp.i

group/mem/CMakeFiles/mem.dir/mem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem.cpp -o CMakeFiles/mem.dir/mem.cpp.s

group/mem/CMakeFiles/mem.dir/mem_init.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_init.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_init.cpp
group/mem/CMakeFiles/mem.dir/mem_init.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_init.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_init.cpp.o -MF CMakeFiles/mem.dir/mem_init.cpp.o.d -o CMakeFiles/mem.dir/mem_init.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_init.cpp

group/mem/CMakeFiles/mem.dir/mem_init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_init.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_init.cpp > CMakeFiles/mem.dir/mem_init.cpp.i

group/mem/CMakeFiles/mem.dir/mem_init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_init.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_init.cpp -o CMakeFiles/mem.dir/mem_init.cpp.s

group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_alloc.cpp
group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.o -MF CMakeFiles/mem.dir/mem_alloc.cpp.o.d -o CMakeFiles/mem.dir/mem_alloc.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_alloc.cpp

group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_alloc.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_alloc.cpp > CMakeFiles/mem.dir/mem_alloc.cpp.i

group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_alloc.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_alloc.cpp -o CMakeFiles/mem.dir/mem_alloc.cpp.s

group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_ff_alloc.cpp
group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.o -MF CMakeFiles/mem.dir/mem_ff_alloc.cpp.o.d -o CMakeFiles/mem.dir/mem_ff_alloc.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_ff_alloc.cpp

group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_ff_alloc.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_ff_alloc.cpp > CMakeFiles/mem.dir/mem_ff_alloc.cpp.i

group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_ff_alloc.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_ff_alloc.cpp -o CMakeFiles/mem.dir/mem_ff_alloc.cpp.s

group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_nf_alloc.cpp
group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.o -MF CMakeFiles/mem.dir/mem_nf_alloc.cpp.o.d -o CMakeFiles/mem.dir/mem_nf_alloc.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_nf_alloc.cpp

group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_nf_alloc.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_nf_alloc.cpp > CMakeFiles/mem.dir/mem_nf_alloc.cpp.i

group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_nf_alloc.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_nf_alloc.cpp -o CMakeFiles/mem.dir/mem_nf_alloc.cpp.s

group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_bf_alloc.cpp
group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.o -MF CMakeFiles/mem.dir/mem_bf_alloc.cpp.o.d -o CMakeFiles/mem.dir/mem_bf_alloc.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_bf_alloc.cpp

group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_bf_alloc.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_bf_alloc.cpp > CMakeFiles/mem.dir/mem_bf_alloc.cpp.i

group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_bf_alloc.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_bf_alloc.cpp -o CMakeFiles/mem.dir/mem_bf_alloc.cpp.s

group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_wf_alloc.cpp
group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.o -MF CMakeFiles/mem.dir/mem_wf_alloc.cpp.o.d -o CMakeFiles/mem.dir/mem_wf_alloc.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_wf_alloc.cpp

group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_wf_alloc.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_wf_alloc.cpp > CMakeFiles/mem.dir/mem_wf_alloc.cpp.i

group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_wf_alloc.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_wf_alloc.cpp -o CMakeFiles/mem.dir/mem_wf_alloc.cpp.s

group/mem/CMakeFiles/mem.dir/mem_free.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_free.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_free.cpp
group/mem/CMakeFiles/mem.dir/mem_free.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_free.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_free.cpp.o -MF CMakeFiles/mem.dir/mem_free.cpp.o.d -o CMakeFiles/mem.dir/mem_free.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_free.cpp

group/mem/CMakeFiles/mem.dir/mem_free.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_free.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_free.cpp > CMakeFiles/mem.dir/mem_free.cpp.i

group/mem/CMakeFiles/mem.dir/mem_free.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_free.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_free.cpp -o CMakeFiles/mem.dir/mem_free.cpp.s

group/mem/CMakeFiles/mem.dir/mem_print.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_print.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_print.cpp
group/mem/CMakeFiles/mem.dir/mem_print.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_print.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_print.cpp.o -MF CMakeFiles/mem.dir/mem_print.cpp.o.d -o CMakeFiles/mem.dir/mem_print.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_print.cpp

group/mem/CMakeFiles/mem.dir/mem_print.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_print.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_print.cpp > CMakeFiles/mem.dir/mem_print.cpp.i

group/mem/CMakeFiles/mem.dir/mem_print.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_print.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_print.cpp -o CMakeFiles/mem.dir/mem_print.cpp.s

group/mem/CMakeFiles/mem.dir/mem_getters.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_getters.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_getters.cpp
group/mem/CMakeFiles/mem.dir/mem_getters.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_getters.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_getters.cpp.o -MF CMakeFiles/mem.dir/mem_getters.cpp.o.d -o CMakeFiles/mem.dir/mem_getters.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_getters.cpp

group/mem/CMakeFiles/mem.dir/mem_getters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_getters.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_getters.cpp > CMakeFiles/mem.dir/mem_getters.cpp.i

group/mem/CMakeFiles/mem.dir/mem_getters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_getters.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_getters.cpp -o CMakeFiles/mem.dir/mem_getters.cpp.s

group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.o: group/mem/CMakeFiles/mem.dir/flags.make
group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.o: /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_policy_as_string.cpp
group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.o: group/mem/CMakeFiles/mem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.o"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.o -MF CMakeFiles/mem.dir/mem_policy_as_string.cpp.o.d -o CMakeFiles/mem.dir/mem_policy_as_string.cpp.o -c /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_policy_as_string.cpp

group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mem.dir/mem_policy_as_string.cpp.i"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_policy_as_string.cpp > CMakeFiles/mem.dir/mem_policy_as_string.cpp.i

group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mem.dir/mem_policy_as_string.cpp.s"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tiago/Desktop/somm22-so-p3g2/src/group/mem/mem_policy_as_string.cpp -o CMakeFiles/mem.dir/mem_policy_as_string.cpp.s

# Object files for target mem
mem_OBJECTS = \
"CMakeFiles/mem.dir/mem.cpp.o" \
"CMakeFiles/mem.dir/mem_init.cpp.o" \
"CMakeFiles/mem.dir/mem_alloc.cpp.o" \
"CMakeFiles/mem.dir/mem_ff_alloc.cpp.o" \
"CMakeFiles/mem.dir/mem_nf_alloc.cpp.o" \
"CMakeFiles/mem.dir/mem_bf_alloc.cpp.o" \
"CMakeFiles/mem.dir/mem_wf_alloc.cpp.o" \
"CMakeFiles/mem.dir/mem_free.cpp.o" \
"CMakeFiles/mem.dir/mem_print.cpp.o" \
"CMakeFiles/mem.dir/mem_getters.cpp.o" \
"CMakeFiles/mem.dir/mem_policy_as_string.cpp.o"

# External object files for target mem
mem_EXTERNAL_OBJECTS =

/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_init.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_alloc.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_ff_alloc.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_nf_alloc.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_bf_alloc.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_wf_alloc.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_free.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_print.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_getters.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/mem_policy_as_string.cpp.o
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/build.make
/home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a: group/mem/CMakeFiles/mem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tiago/Desktop/somm22-so-p3g2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX static library /home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a"
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && $(CMAKE_COMMAND) -P CMakeFiles/mem.dir/cmake_clean_target.cmake
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
group/mem/CMakeFiles/mem.dir/build: /home/tiago/Desktop/somm22-so-p3g2/lib/libmem.a
.PHONY : group/mem/CMakeFiles/mem.dir/build

group/mem/CMakeFiles/mem.dir/clean:
	cd /home/tiago/Desktop/somm22-so-p3g2/build/group/mem && $(CMAKE_COMMAND) -P CMakeFiles/mem.dir/cmake_clean.cmake
.PHONY : group/mem/CMakeFiles/mem.dir/clean

group/mem/CMakeFiles/mem.dir/depend:
	cd /home/tiago/Desktop/somm22-so-p3g2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tiago/Desktop/somm22-so-p3g2/src /home/tiago/Desktop/somm22-so-p3g2/src/group/mem /home/tiago/Desktop/somm22-so-p3g2/build /home/tiago/Desktop/somm22-so-p3g2/build/group/mem /home/tiago/Desktop/somm22-so-p3g2/build/group/mem/CMakeFiles/mem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : group/mem/CMakeFiles/mem.dir/depend

