cmake_minimum_required(VERSION 3.5)

project(QtAndroidApiExample LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

if(NOT ANDROID)
    message(FATAL_ERROR "Only Android")
endif()

file(GLOB_RECURSE SRC_LIST
    ./*.cpp
    ./*.hpp
    ./*.ui
)

add_subdirectory(../../android-29 QtAndroidAPI)

add_library(${PROJECT_NAME} SHARED ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} PRIVATE QtAndroidAPI)
