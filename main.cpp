//
// Created by skyjohn on 2020/5/23.
//

#include "calculator.h"
#include "mainwindow.h"
#include <bits/stdc++.h>

int main(int argc,char *argv[]){
    QApplication apply(argc,argv);
    QMainWindow w;
    worker wk1;
    wk1.mysetup(&w);
    w.show();
    return apply.exec();
}