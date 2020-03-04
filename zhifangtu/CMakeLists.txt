cmake_minimum_required(VERSION 2.8)

project(zhifangtu)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

include_directories(${OpebCV_INCLUDE_DIRS})

add_executable(zhifangtu zhifangtu.cpp)

target_link_libraries(zhifangtu ${OpenCV_LIBS})

