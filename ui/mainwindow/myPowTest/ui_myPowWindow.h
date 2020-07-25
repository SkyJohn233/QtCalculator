/********************************************************************************
** Form generated from reading UI file 'myPowWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPOWWINDOW_H
#define UI_MYPOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myPowWindowUi
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEditNum1;
    QTextEdit *textEditNum2;
    QPushButton *pushButtonPow;
    QLabel *Answer;

    void setupUi(QWidget *myPowWindowUi)
    {
        if (myPowWindowUi->objectName().isEmpty())
            myPowWindowUi->setObjectName(QString::fromUtf8("myPowWindowUi"));
        myPowWindowUi->resize(474, 323);
        horizontalLayoutWidget = new QWidget(myPowWindowUi);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 30, 271, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEditNum1 = new QTextEdit(horizontalLayoutWidget);
        textEditNum1->setObjectName(QString::fromUtf8("textEditNum1"));

        horizontalLayout->addWidget(textEditNum1);

        textEditNum2 = new QTextEdit(horizontalLayoutWidget);
        textEditNum2->setObjectName(QString::fromUtf8("textEditNum2"));

        horizontalLayout->addWidget(textEditNum2);

        pushButtonPow = new QPushButton(myPowWindowUi);
        pushButtonPow->setObjectName(QString::fromUtf8("pushButtonPow"));
        pushButtonPow->setGeometry(QRect(110, 200, 151, 51));
        Answer = new QLabel(myPowWindowUi);
        Answer->setObjectName(QString::fromUtf8("Answer"));
        Answer->setGeometry(QRect(150, 140, 81, 31));

        retranslateUi(myPowWindowUi);

        QMetaObject::connectSlotsByName(myPowWindowUi);
    } // setupUi

    void retranslateUi(QWidget *myPowWindowUi)
    {
        myPowWindowUi->setWindowTitle(QCoreApplication::translate("myPowWindowUi", "myPowTest", nullptr));
        pushButtonPow->setText(QCoreApplication::translate("myPowWindowUi", "myPow(double,int)", nullptr));
        Answer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myPowWindowUi: public Ui_myPowWindowUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPOWWINDOW_H
