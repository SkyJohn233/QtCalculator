cmake_minimum_required(VERSION 3.15)
project(1)

set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)

find_package(Qt5 REQUIRED Widgets Core Gamepad Sql)
#find_package(Qt5Gamepad REQUIRED NO_DEFAULT_PATH)
add_executable(1 calc/calculator.cpp calc/calculator.h ui/mainwindow/mainwindow.cpp ui/mainwindow/mainwindow.h main.cpp ui/mainwindow/ui_mainwindow.h ui/mainwindow/myPowTest/ui_myPowWindow.h ui/mainwindow/myPowTest/myPowWindow.cpp ui/mainwindow/myPowTest/myPowWindow.h ui/mainwindow/mySqrtTest/mySqrtWindow.cpp ui/mainwindow/mySqrtTest/mySqrtWindow.h)
target_link_libraries(1 Qt5::Widgets Qt5::Gamepad)