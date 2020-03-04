cmake_minimum_required(VERSION 2.8)

project(soble)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

include_directories(${OpebCV_INCLUDE_DIRS})

add_executable(soble soble.cpp)

target_link_libraries(soble ${OpenCV_LIBS})

