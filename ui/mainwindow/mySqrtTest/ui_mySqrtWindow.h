/********************************************************************************
** Form generated from reading UI file 'mySqrtWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSQRTWINDOW_H
#define UI_MYSQRTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mySqrtWindowUi
{
public:
    QPushButton *pushButtonSqrt;
    QTextEdit *sqrtnum;
    QLabel *answer;

    void setupUi(QWidget *mySqrtWindowUi)
    {
        if (mySqrtWindowUi->objectName().isEmpty())
            mySqrtWindowUi->setObjectName(QString::fromUtf8("mySqrtWindowUi"));
        mySqrtWindowUi->resize(400, 300);
        pushButtonSqrt = new QPushButton(mySqrtWindowUi);
        pushButtonSqrt->setObjectName(QString::fromUtf8("pushButtonSqrt"));
        pushButtonSqrt->setGeometry(QRect(140, 210, 89, 25));
        sqrtnum = new QTextEdit(mySqrtWindowUi);
        sqrtnum->setObjectName(QString::fromUtf8("sqrtnum"));
        sqrtnum->setGeometry(QRect(120, 30, 104, 70));
        answer = new QLabel(mySqrtWindowUi);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(140, 130, 91, 41));
        answer->setFrameShadow(QFrame::Plain);

        retranslateUi(mySqrtWindowUi);

        QMetaObject::connectSlotsByName(mySqrtWindowUi);
    } // setupUi

    void retranslateUi(QWidget *mySqrtWindowUi)
    {
        mySqrtWindowUi->setWindowTitle(QCoreApplication::translate("mySqrtWindowUi", "Form", nullptr));
        pushButtonSqrt->setText(QCoreApplication::translate("mySqrtWindowUi", "Sqrt(double x)", nullptr));
        answer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mySqrtWindowUi: public Ui_mySqrtWindowUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSQRTWINDOW_H
