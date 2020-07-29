//
// Created by skyjohn on 2020/5/23.
//

#ifndef INC_1_MAINWINDOW_H
#define INC_1_MAINWINDOW_H
#include "ui_mainwindow.h"
#include "../../calc/calculator.h"
#include "myPowTest/myPowWindow.h"
#include "mySqrtTest/mySqrtWindow.h"
using Ui::MainWindow;
class worker:public MainWindow {

public:
    void mysetup();
    Calcultor calc;
    QMainWindow *m1;
    QWidget *w1,*w2;
    MyPowWindow *myPowWindow;
    MySqrtWindow *mySqrtWindow;
    worker(QMainWindow*,QWidget*,QWidget*);
    ~worker();
};


#endif //INC_1_MAINWINDOW_H
