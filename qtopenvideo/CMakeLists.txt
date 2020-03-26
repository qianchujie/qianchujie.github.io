cmake_minimum_required(VERSION 3.1.0)

project(mainwindow)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Qt5 COMPONENTS PrintSupport REQUIRED)

include_directories(${OpebCV_INCLUDE_DIRS})

aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME}
    mainwindow.cpp
    main.cpp
    imageviewer.cpp
)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::PrintSupport ${OpenCV_LIBS})

/q
