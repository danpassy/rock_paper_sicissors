# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build

# Include any dependencies generated for this target.
include CMakeFiles/RockPaperScissors.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RockPaperScissors.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RockPaperScissors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RockPaperScissors.dir/flags.make

CMakeFiles/RockPaperScissors.dir/codegen:
.PHONY : CMakeFiles/RockPaperScissors.dir/codegen

CMakeFiles/RockPaperScissors.dir/main.cpp.o: CMakeFiles/RockPaperScissors.dir/flags.make
CMakeFiles/RockPaperScissors.dir/main.cpp.o: /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/main.cpp
CMakeFiles/RockPaperScissors.dir/main.cpp.o: CMakeFiles/RockPaperScissors.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RockPaperScissors.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RockPaperScissors.dir/main.cpp.o -MF CMakeFiles/RockPaperScissors.dir/main.cpp.o.d -o CMakeFiles/RockPaperScissors.dir/main.cpp.o -c /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/main.cpp

CMakeFiles/RockPaperScissors.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RockPaperScissors.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/main.cpp > CMakeFiles/RockPaperScissors.dir/main.cpp.i

CMakeFiles/RockPaperScissors.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RockPaperScissors.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/main.cpp -o CMakeFiles/RockPaperScissors.dir/main.cpp.s

CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o: CMakeFiles/RockPaperScissors.dir/flags.make
CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o: /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/computer_ai.cpp
CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o: CMakeFiles/RockPaperScissors.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o -MF CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o.d -o CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o -c /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/computer_ai.cpp

CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/computer_ai.cpp > CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.i

CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/computer_ai.cpp -o CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.s

CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o: CMakeFiles/RockPaperScissors.dir/flags.make
CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o: /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/game_logic.cpp
CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o: CMakeFiles/RockPaperScissors.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o -MF CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o.d -o CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o -c /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/game_logic.cpp

CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/game_logic.cpp > CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.i

CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/game_logic.cpp -o CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.s

CMakeFiles/RockPaperScissors.dir/src/player.cpp.o: CMakeFiles/RockPaperScissors.dir/flags.make
CMakeFiles/RockPaperScissors.dir/src/player.cpp.o: /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/player.cpp
CMakeFiles/RockPaperScissors.dir/src/player.cpp.o: CMakeFiles/RockPaperScissors.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RockPaperScissors.dir/src/player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RockPaperScissors.dir/src/player.cpp.o -MF CMakeFiles/RockPaperScissors.dir/src/player.cpp.o.d -o CMakeFiles/RockPaperScissors.dir/src/player.cpp.o -c /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/player.cpp

CMakeFiles/RockPaperScissors.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RockPaperScissors.dir/src/player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/player.cpp > CMakeFiles/RockPaperScissors.dir/src/player.cpp.i

CMakeFiles/RockPaperScissors.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RockPaperScissors.dir/src/player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/player.cpp -o CMakeFiles/RockPaperScissors.dir/src/player.cpp.s

CMakeFiles/RockPaperScissors.dir/src/score.cpp.o: CMakeFiles/RockPaperScissors.dir/flags.make
CMakeFiles/RockPaperScissors.dir/src/score.cpp.o: /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/score.cpp
CMakeFiles/RockPaperScissors.dir/src/score.cpp.o: CMakeFiles/RockPaperScissors.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RockPaperScissors.dir/src/score.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RockPaperScissors.dir/src/score.cpp.o -MF CMakeFiles/RockPaperScissors.dir/src/score.cpp.o.d -o CMakeFiles/RockPaperScissors.dir/src/score.cpp.o -c /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/score.cpp

CMakeFiles/RockPaperScissors.dir/src/score.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RockPaperScissors.dir/src/score.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/score.cpp > CMakeFiles/RockPaperScissors.dir/src/score.cpp.i

CMakeFiles/RockPaperScissors.dir/src/score.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RockPaperScissors.dir/src/score.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/score.cpp -o CMakeFiles/RockPaperScissors.dir/src/score.cpp.s

CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o: CMakeFiles/RockPaperScissors.dir/flags.make
CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o: /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/utils.cpp
CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o: CMakeFiles/RockPaperScissors.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o -MF CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o.d -o CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o -c /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/utils.cpp

CMakeFiles/RockPaperScissors.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RockPaperScissors.dir/src/utils.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/utils.cpp > CMakeFiles/RockPaperScissors.dir/src/utils.cpp.i

CMakeFiles/RockPaperScissors.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RockPaperScissors.dir/src/utils.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/src/utils.cpp -o CMakeFiles/RockPaperScissors.dir/src/utils.cpp.s

# Object files for target RockPaperScissors
RockPaperScissors_OBJECTS = \
"CMakeFiles/RockPaperScissors.dir/main.cpp.o" \
"CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o" \
"CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o" \
"CMakeFiles/RockPaperScissors.dir/src/player.cpp.o" \
"CMakeFiles/RockPaperScissors.dir/src/score.cpp.o" \
"CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o"

# External object files for target RockPaperScissors
RockPaperScissors_EXTERNAL_OBJECTS =

RockPaperScissors: CMakeFiles/RockPaperScissors.dir/main.cpp.o
RockPaperScissors: CMakeFiles/RockPaperScissors.dir/src/computer_ai.cpp.o
RockPaperScissors: CMakeFiles/RockPaperScissors.dir/src/game_logic.cpp.o
RockPaperScissors: CMakeFiles/RockPaperScissors.dir/src/player.cpp.o
RockPaperScissors: CMakeFiles/RockPaperScissors.dir/src/score.cpp.o
RockPaperScissors: CMakeFiles/RockPaperScissors.dir/src/utils.cpp.o
RockPaperScissors: CMakeFiles/RockPaperScissors.dir/build.make
RockPaperScissors: CMakeFiles/RockPaperScissors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable RockPaperScissors"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RockPaperScissors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RockPaperScissors.dir/build: RockPaperScissors
.PHONY : CMakeFiles/RockPaperScissors.dir/build

CMakeFiles/RockPaperScissors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RockPaperScissors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RockPaperScissors.dir/clean

CMakeFiles/RockPaperScissors.dir/depend:
	cd /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build /Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/CMakeFiles/RockPaperScissors.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/RockPaperScissors.dir/depend

