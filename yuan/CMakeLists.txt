cmake_minimum_required(VERSION 2.8)

project(yuan)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

include_directories(${OpebCV_INCLUDE_DIRS})

add_executable(yuan yuan.cpp)

target_link_libraries(yuan ${OpenCV_LIBS})

