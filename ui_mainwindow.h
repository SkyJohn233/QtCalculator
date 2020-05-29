/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonMinus;
    QPushButton *pushButtonMul;
    QPushButton *pushButtonDiv;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton2;
    QPushButton *pushButton8;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton1;
    QPushButton *pushButton7;
    QPushButton *pushButton3;
    QPushButton *pushButton6;
    QPushButton *pushButton9;
    QPushButton *pushButton0;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonPoint;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonRight;
    QPlainTextEdit *Answer;
    QPlainTextEdit *Question;
    QPushButton *pushButtonGetAnswer;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(570, 30, 160, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAdd = new QPushButton(verticalLayoutWidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));

        verticalLayout->addWidget(pushButtonAdd);

        pushButtonMinus = new QPushButton(verticalLayoutWidget);
        pushButtonMinus->setObjectName(QString::fromUtf8("pushButtonMinus"));

        verticalLayout->addWidget(pushButtonMinus);

        pushButtonMul = new QPushButton(verticalLayoutWidget);
        pushButtonMul->setObjectName(QString::fromUtf8("pushButtonMul"));

        verticalLayout->addWidget(pushButtonMul);

        pushButtonDiv = new QPushButton(verticalLayoutWidget);
        pushButtonDiv->setObjectName(QString::fromUtf8("pushButtonDiv"));

        verticalLayout->addWidget(pushButtonDiv);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 310, 661, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        gridLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        gridLayout->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        gridLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButton0 = new QPushButton(gridLayoutWidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));

        gridLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButtonClear = new QPushButton(gridLayoutWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 3, 0, 1, 1);

        pushButtonPoint = new QPushButton(gridLayoutWidget);
        pushButtonPoint->setObjectName(QString::fromUtf8("pushButtonPoint"));

        gridLayout->addWidget(pushButtonPoint, 3, 2, 1, 1);

        pushButtonLeft = new QPushButton(gridLayoutWidget);
        pushButtonLeft->setObjectName(QString::fromUtf8("pushButtonLeft"));

        gridLayout->addWidget(pushButtonLeft, 4, 0, 1, 1);

        pushButtonRight = new QPushButton(gridLayoutWidget);
        pushButtonRight->setObjectName(QString::fromUtf8("pushButtonRight"));

        gridLayout->addWidget(pushButtonRight, 4, 1, 1, 1);

        Answer = new QPlainTextEdit(centralwidget);
        Answer->setObjectName(QString::fromUtf8("Answer"));
        Answer->setGeometry(QRect(70, 160, 301, 81));
        Question = new QPlainTextEdit(centralwidget);
        Question->setObjectName(QString::fromUtf8("Question"));
        Question->setGeometry(QRect(70, 40, 301, 75));
        pushButtonGetAnswer = new QPushButton(centralwidget);
        pushButtonGetAnswer->setObjectName(QString::fromUtf8("pushButtonGetAnswer"));
        pushButtonGetAnswer->setGeometry(QRect(420, 140, 94, 27));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButtonDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        pushButtonPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButtonLeft->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButtonRight->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        Answer->setPlainText(QString());
        pushButtonGetAnswer->setText(QCoreApplication::translate("MainWindow", "GetAnswer", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
