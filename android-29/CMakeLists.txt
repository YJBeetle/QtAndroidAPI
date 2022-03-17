cmake_minimum_required(VERSION 3.16)
project(QtAndroidAPI LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt6 COMPONENTS Core REQUIRED)

add_library(${PROJECT_NAME} INTERFACE)
target_link_libraries(${PROJECT_NAME} INTERFACE Qt6::Core)
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Test
option(QT_ANDROID_API_TEST "QtAndroidAPI test." OFF)
if(QT_ANDROID_API_TEST)
    include("./CmakeTest.inc.txt")
endif(QT_ANDROID_API_TEST)
