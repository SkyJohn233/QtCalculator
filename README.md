
- QT version 5.13.0

**A simple Qt Gui Program**

- project directory:

```shell
.
├── calc
│   ├── calculator.cpp
│   └── calculator.h
├── cmake-build-debug
│   ├── 1
│   ├── 1_autogen
│   │   ├── include
│   │   │   └── ui_mainwindow.h
│   │   ├── moc_predefs.h
│   │   └── mocs_compilation.cpp
│   ├── 1.cbp
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   │   ├── 1_autogen.dir
│   │   │   ├── AutogenInfo.cmake
│   │   │   ├── AutogenOldSettings.txt
│   │   │   ├── build.make
│   │   │   ├── cmake_clean.cmake
│   │   │   ├── DependInfo.cmake
│   │   │   ├── depend.internal
│   │   │   ├── depend.make
│   │   │   ├── ParseCache.txt
│   │   │   └── progress.make
│   │   ├── 1.dir
│   │   │   ├── 1_autogen
│   │   │   │   └── mocs_compilation.cpp.o
│   │   │   ├── build.make
│   │   │   ├── calc
│   │   │   │   └── calculator.cpp.o
│   │   │   ├── cmake_clean.cmake
│   │   │   ├── CXX.includecache
│   │   │   ├── DependInfo.cmake
│   │   │   ├── depend.internal
│   │   │   ├── depend.make
│   │   │   ├── flags.make
│   │   │   ├── link.txt
│   │   │   ├── main.cpp.o
│   │   │   ├── progress.make
│   │   │   └── ui
│   │   │       └── mainwindow
│   │   │           ├── mainwindow.cpp.o
│   │   │           ├── myPowTest
│   │   │           │   └── myPowWindow.cpp.o
│   │   │           └── mySqrtTest
│   │   │               └── mySqrtWindow.cpp.o
│   │   ├── 3.15.3
│   │   │   ├── CMakeCCompiler.cmake
│   │   │   ├── CMakeCXXCompiler.cmake
│   │   │   ├── CMakeDetermineCompilerABI_C.bin
│   │   │   ├── CMakeDetermineCompilerABI_CXX.bin
│   │   │   ├── CMakeSystem.cmake
│   │   │   ├── CompilerIdC
│   │   │   │   ├── a.out
│   │   │   │   ├── CMakeCCompilerId.c
│   │   │   │   └── tmp
│   │   │   └── CompilerIdCXX
│   │   │       ├── a.out
│   │   │       ├── CMakeCXXCompilerId.cpp
│   │   │       └── tmp
│   │   ├── clion-environment.txt
│   │   ├── clion-log.txt
│   │   ├── cmake.check_cache
│   │   ├── CMakeDirectoryInformation.cmake
│   │   ├── CMakeOutput.log
│   │   ├── CMakeRuleHashes.txt
│   │   ├── CMakeTmp
│   │   ├── Makefile2
│   │   ├── Makefile.cmake
│   │   ├── progress.marks
│   │   └── TargetDirectories.txt
│   ├── cmake_install.cmake
│   └── Makefile
├── CMakeLists.txt
├── main.cpp
├── README.md
└── ui
    └── mainwindow
        ├── mainwindow.cpp
        ├── mainwindow.h
        ├── mainwindow.ui
        ├── myPowTest
        │   ├── myPowWindow.cpp
        │   ├── myPowWindow.h
        │   ├── myPowWindow.ui
        │   └── ui_myPowWindow.h
        ├── mySqrtTest
        │   ├── mySqrtWindow.cpp
        │   ├── mySqrtWindow.h
        │   ├── mySqrtWindow.ui
        │   └── ui_mySqrtWindow.h
        └── ui_mainwindow.h

```
- in directory calc:

Main calculator-functional class

- in directory ui:

ui files and ui-related cpp and hpp files

to form a QT ui window, there are four files needed: (use "a" as file name example)a.cpp, a.hpp, ui_a.h a.ui 

a.ui is QT-designer file and ui_a.h is created by uic(a tool in QT library) which is a tool making .ui file (files in from xml) to .h file.

a.hpp include ui_a.h and define our own class and a.cpp implement the class in a.hpp.
