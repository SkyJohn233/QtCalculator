//
// Created by skyjohn on 2020/7/24.
//

#include "mySqrtWindow.h"
#include "../../../calc/calculator.h"

MySqrtWindow::MySqrtWindow(QWidget *w){
    this->setupUi(w);
    QObject::connect(this->pushButtonSqrt,&QPushButton::clicked, w, [this](bool)->void{
        double a=this->sqrtnum->toPlainText().toDouble();
        this->answer->setText(QString::fromStdString(Calcultor::mysqrt(a)));
        this->sqrtnum->clear();
    });
}