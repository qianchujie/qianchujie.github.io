# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany

# Include any dependencies generated for this target.
include CMakeFiles/cany.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cany.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cany.dir/flags.make

CMakeFiles/cany.dir/cany.cpp.o: CMakeFiles/cany.dir/flags.make
CMakeFiles/cany.dir/cany.cpp.o: cany.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cany.dir/cany.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cany.dir/cany.cpp.o -c /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany/cany.cpp

CMakeFiles/cany.dir/cany.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cany.dir/cany.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany/cany.cpp > CMakeFiles/cany.dir/cany.cpp.i

CMakeFiles/cany.dir/cany.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cany.dir/cany.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany/cany.cpp -o CMakeFiles/cany.dir/cany.cpp.s

CMakeFiles/cany.dir/cany.cpp.o.requires:

.PHONY : CMakeFiles/cany.dir/cany.cpp.o.requires

CMakeFiles/cany.dir/cany.cpp.o.provides: CMakeFiles/cany.dir/cany.cpp.o.requires
	$(MAKE) -f CMakeFiles/cany.dir/build.make CMakeFiles/cany.dir/cany.cpp.o.provides.build
.PHONY : CMakeFiles/cany.dir/cany.cpp.o.provides

CMakeFiles/cany.dir/cany.cpp.o.provides.build: CMakeFiles/cany.dir/cany.cpp.o


# Object files for target cany
cany_OBJECTS = \
"CMakeFiles/cany.dir/cany.cpp.o"

# External object files for target cany
cany_EXTERNAL_OBJECTS =

cany: CMakeFiles/cany.dir/cany.cpp.o
cany: CMakeFiles/cany.dir/build.make
cany: /usr/local/lib/libopencv_ml.so.3.4.7
cany: /usr/local/lib/libopencv_highgui.so.3.4.7
cany: /usr/local/lib/libopencv_stitching.so.3.4.7
cany: /usr/local/lib/libopencv_viz.so.3.4.7
cany: /usr/local/lib/libopencv_shape.so.3.4.7
cany: /usr/local/lib/libopencv_dnn.so.3.4.7
cany: /usr/local/lib/libopencv_superres.so.3.4.7
cany: /usr/local/lib/libopencv_videostab.so.3.4.7
cany: /usr/local/lib/libopencv_objdetect.so.3.4.7
cany: /usr/local/lib/libopencv_photo.so.3.4.7
cany: /usr/local/lib/libopencv_video.so.3.4.7
cany: /usr/local/lib/libopencv_videoio.so.3.4.7
cany: /usr/local/lib/libopencv_imgcodecs.so.3.4.7
cany: /usr/local/lib/libopencv_calib3d.so.3.4.7
cany: /usr/local/lib/libopencv_features2d.so.3.4.7
cany: /usr/local/lib/libopencv_imgproc.so.3.4.7
cany: /usr/local/lib/libopencv_flann.so.3.4.7
cany: /usr/local/lib/libopencv_core.so.3.4.7
cany: CMakeFiles/cany.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cany"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cany.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cany.dir/build: cany

.PHONY : CMakeFiles/cany.dir/build

CMakeFiles/cany.dir/requires: CMakeFiles/cany.dir/cany.cpp.o.requires

.PHONY : CMakeFiles/cany.dir/requires

CMakeFiles/cany.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cany.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cany.dir/clean

CMakeFiles/cany.dir/depend:
	cd /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany /home/qianchujie/Workspace/machine-vision/qianchujie.github.io/cany/CMakeFiles/cany.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cany.dir/depend

