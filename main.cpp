//
// Created by skyjohn on 2020/5/23.
//

#include "calc/calculator.h"
#include "ui/mainwindow/mainwindow.h"


int main(int argc,char *argv[]){
    QApplication apply(argc,argv);
    QMainWindow m;
    QWidget w1,w2;
    worker wk1(&m,&w1,&w2);
    wk1.mysetup();
    m.show();
    return apply.exec();
}