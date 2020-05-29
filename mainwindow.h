//
// Created by skyjohn on 2020/5/23.
//

#ifndef INC_1_MAINWINDOW_H
#define INC_1_MAINWINDOW_H
#include "ui_mainwindow.h"
#include "calculator.h"
using Ui::MainWindow;
class worker:public MainWindow {

public:
    void mysetup(QMainWindow* mainwindow);
    Calcultor calc;
    worker();
};


#endif //INC_1_MAINWINDOW_H
