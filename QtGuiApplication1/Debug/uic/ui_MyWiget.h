/********************************************************************************
** Form generated from reading UI file 'MyWiget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIGET_H
#define UI_MYWIGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWigetClass
{
public:
    QPushButton *btn_loadfile;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_ans;
    QLabel *label_3;
    QComboBox *comboBox_type;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QComboBox *comboBox_delete;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *MyWigetClass)
    {
        if (MyWigetClass->objectName().isEmpty())
            MyWigetClass->setObjectName(QString::fromUtf8("MyWigetClass"));
        MyWigetClass->resize(1033, 874);
        btn_loadfile = new QPushButton(MyWigetClass);
        btn_loadfile->setObjectName(QString::fromUtf8("btn_loadfile"));
        btn_loadfile->setGeometry(QRect(30, 20, 93, 28));
        label = new QLabel(MyWigetClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 40, 72, 15));
        label_2 = new QLabel(MyWigetClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 40, 101, 16));
        lineEdit_ans = new QLineEdit(MyWigetClass);
        lineEdit_ans->setObjectName(QString::fromUtf8("lineEdit_ans"));
        lineEdit_ans->setGeometry(QRect(300, 210, 113, 31));
        label_3 = new QLabel(MyWigetClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 220, 241, 20));
        comboBox_type = new QComboBox(MyWigetClass);
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->setObjectName(QString::fromUtf8("comboBox_type"));
        comboBox_type->setGeometry(QRect(180, 70, 87, 31));
        btn_add = new QPushButton(MyWigetClass);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(30, 70, 121, 31));
        btn_delete = new QPushButton(MyWigetClass);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setGeometry(QRect(30, 150, 121, 31));
        comboBox_delete = new QComboBox(MyWigetClass);
        comboBox_delete->setObjectName(QString::fromUtf8("comboBox_delete"));
        comboBox_delete->setGeometry(QRect(180, 150, 201, 31));
        textEdit = new QTextEdit(MyWigetClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 280, 741, 551));
        lineEdit_1 = new QLineEdit(MyWigetClass);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(300, 70, 101, 31));
        lineEdit_2 = new QLineEdit(MyWigetClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(430, 70, 101, 31));
        label_4 = new QLabel(MyWigetClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 40, 111, 16));
        label_5 = new QLabel(MyWigetClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(560, 40, 101, 16));
        lineEdit_3 = new QLineEdit(MyWigetClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(560, 70, 101, 31));
        label_6 = new QLabel(MyWigetClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(690, 40, 111, 16));
        lineEdit_4 = new QLineEdit(MyWigetClass);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(690, 70, 101, 31));
        label_7 = new QLabel(MyWigetClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 120, 72, 15));
        label_8 = new QLabel(MyWigetClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(190, 120, 221, 16));

        retranslateUi(MyWigetClass);

        QMetaObject::connectSlotsByName(MyWigetClass);
    } // setupUi

    void retranslateUi(QWidget *MyWigetClass)
    {
        MyWigetClass->setWindowTitle(QCoreApplication::translate("MyWigetClass", "MyWiget", nullptr));
        btn_loadfile->setText(QCoreApplication::translate("MyWigetClass", "Load File", nullptr));
        label->setText(QCoreApplication::translate("MyWigetClass", "Type", nullptr));
        label_2->setText(QCoreApplication::translate("MyWigetClass", "first_number", nullptr));
        label_3->setText(QCoreApplication::translate("MyWigetClass", "IntersectPoint Num is\357\274\232", nullptr));
        comboBox_type->setItemText(0, QCoreApplication::translate("MyWigetClass", "circle", nullptr));
        comboBox_type->setItemText(1, QCoreApplication::translate("MyWigetClass", "line", nullptr));
        comboBox_type->setItemText(2, QCoreApplication::translate("MyWigetClass", "segment", nullptr));
        comboBox_type->setItemText(3, QCoreApplication::translate("MyWigetClass", "ray", nullptr));

        btn_add->setText(QCoreApplication::translate("MyWigetClass", "add object", nullptr));
        btn_delete->setText(QCoreApplication::translate("MyWigetClass", "delete object", nullptr));
        label_4->setText(QCoreApplication::translate("MyWigetClass", "second_number", nullptr));
        label_5->setText(QCoreApplication::translate("MyWigetClass", "thrid_number", nullptr));
        label_6->setText(QCoreApplication::translate("MyWigetClass", "fourth_number", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MyWigetClass", "select object to delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWigetClass: public Ui_MyWigetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIGET_H
