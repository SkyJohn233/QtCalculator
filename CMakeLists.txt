cmake_minimum_required(VERSION 3.15)
project(1)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)

find_package(Qt5 REQUIRED Widgets Core Gamepad Sql)
#find_package(Qt5Gamepad REQUIRED NO_DEFAULT_PATH)
add_executable(1 calculator.cpp calculator.h mainwindow.cpp mainwindow.h main.cpp)
target_link_libraries(1 Qt5::Widgets Qt5::Gamepad)