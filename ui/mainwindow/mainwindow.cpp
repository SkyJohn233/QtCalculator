//
// Created by skyjohn on 2020/5/23.
//

#include "mainwindow.h"
#include "../../calc/calculator.h"
#include "bits/stdc++.h"
#include "myPowTest/myPowWindow.h"
#include <cstdlib>
using std::string;

worker::worker(QMainWindow* tm1,QWidget *tw1,QWidget *tw2):m1(tm1),w1(tw1),w2(tw2){
    Calcultor::init();
    myPowWindow = new MyPowWindow(w1);
    mySqrtWindow = new MySqrtWindow(w2);
    this->calc=Calcultor();
}

worker::~worker(){
    delete myPowWindow;
    delete mySqrtWindow;
}
void worker::mysetup() {

    this->setupUi(this->m1);
    QObject::connect(testMyPow,&QPushButton::clicked,[this](bool)->void{
        this->w1->show();
    });
    QObject::connect(testMySqrt,&QPushButton::clicked,[this](bool)->void{
        this->w2->show();
    });
    QObject::connect(pushButtonGetAnswer,&QPushButton::clicked,[this](bool)->void{
        string tmp = this->Question->toPlainText().toStdString();
        std::cout<<tmp<<std::endl;
        QString answer;
        answer=QString::fromStdString(this->calc.calculte(tmp));
        std::cout<<answer.toStdString()<<std::endl;
        this->Answer->setPlainText(answer);
        this->calc.errorcode=0;
    });
    QObject::connect(pushButtonLeft,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="(");
    });
    QObject::connect(pushButtonRight,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+=")");
    });
    QObject::connect(pushButtonClear,&QPushButton::clicked,[this](bool)->void{
        this->Question->clear();
        this->Answer->clear();
    });
    QObject::connect(pushButtonAdd,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="+");
    });
    QObject::connect(pushButtonMinus,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="-");
    });
    QObject::connect(pushButtonMul,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="*");
    });
    QObject::connect(pushButtonDiv,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="/");
    });
    QObject::connect(pushButtonPow,&QPushButton::clicked,[this](bool)-> void{
        this->Question->setPlainText(this->Question->toPlainText()+="^");
    });
    QObject::connect(pushButton0,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="0");
    });
    QObject::connect(pushButton1,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="1");
    });
    QObject::connect(pushButton2,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="2");
    });
    QObject::connect(pushButton3,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="3");
    });
    QObject::connect(pushButton4,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="4");
    });
    QObject::connect(pushButton5,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="5");
    });
    QObject::connect(pushButton6,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="6");
    });
    QObject::connect(pushButton7,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="7");
    });
    QObject::connect(pushButton8,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="8");
    });
    QObject::connect(pushButton9,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+="9");
    });
    QObject::connect(pushButtonPoint,&QPushButton::clicked,[this](bool)->void{
        this->Question->setPlainText(this->Question->toPlainText()+=".");
    });
}