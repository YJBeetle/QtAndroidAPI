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

qt_add_executable(${PROJECT_NAME} MANUAL_FINALIZATION ${SRC_LIST})
set_property(TARGET ${PROJECT_NAME} APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/android)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)
target_link_libraries(${PROJECT_NAME} PRIVATE QtAndroidAPI)

qt_finalize_executable(${PROJECT_NAME})
