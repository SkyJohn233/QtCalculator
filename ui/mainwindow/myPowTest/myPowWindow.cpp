//
// Created by skyjohn on 2020/7/24.
//

#include "myPowWindow.h"


MyPowWindow::MyPowWindow(QWidget *widget){
    this->setupUi(widget);
    QObject::connect(pushButtonPow,&QPushButton::clicked,[this](bool)->void{
        double num1=this->textEditNum1->toPlainText().toDouble();
        int num2 = (int)(this->textEditNum2->toPlainText().toDouble());
        QString answer = QString::fromStdString(
                Calcultor::mypow(num1,num2)
                );
        this->Answer->setText(answer);
        this->textEditNum1->clear();
        this->textEditNum2->clear();
    });
}