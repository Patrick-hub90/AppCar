/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QLineEdit *marque;
    QLineEdit *kilo;
    QLabel *label_3;
    QPushButton *addb;
    QLabel *label_6;
    QLineEdit *price;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *model;
    QLineEdit *state;
    QLineEdit *matricule;

    void setupUi(QWidget *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QString::fromUtf8("edit"));
        edit->resize(322, 401);
        marque = new QLineEdit(edit);
        marque->setObjectName(QString::fromUtf8("marque"));
        marque->setGeometry(QRect(40, 40, 231, 31));
        kilo = new QLineEdit(edit);
        kilo->setObjectName(QString::fromUtf8("kilo"));
        kilo->setGeometry(QRect(40, 210, 231, 31));
        label_3 = new QLabel(edit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 71, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        label_3->setFont(font);
        addb = new QPushButton(edit);
        addb->setObjectName(QString::fromUtf8("addb"));
        addb->setGeometry(QRect(90, 360, 101, 31));
        QFont font1;
        font1.setPointSize(11);
        addb->setFont(font1);
        addb->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-radius: 10px;\n"
"color: white;\n"
"box-shadow:6px 6px 6px 6px black inset;"));
        label_6 = new QLabel(edit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 130, 151, 31));
        label_6->setFont(font);
        price = new QLineEdit(edit);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(40, 260, 231, 31));
        label_8 = new QLabel(edit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 290, 71, 21));
        label_8->setFont(font);
        label_4 = new QLabel(edit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 80, 71, 21));
        label_4->setFont(font);
        label_7 = new QLabel(edit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 240, 71, 21));
        label_7->setFont(font);
        label_5 = new QLabel(edit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 190, 71, 21));
        label_5->setFont(font);
        label = new QLabel(edit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 321, 401));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        model = new QLineEdit(edit);
        model->setObjectName(QString::fromUtf8("model"));
        model->setGeometry(QRect(40, 100, 231, 31));
        state = new QLineEdit(edit);
        state->setObjectName(QString::fromUtf8("state"));
        state->setGeometry(QRect(40, 310, 231, 31));
        matricule = new QLineEdit(edit);
        matricule->setObjectName(QString::fromUtf8("matricule"));
        matricule->setGeometry(QRect(40, 160, 231, 31));
        label->raise();
        marque->raise();
        kilo->raise();
        label_3->raise();
        addb->raise();
        label_6->raise();
        price->raise();
        label_8->raise();
        label_4->raise();
        label_7->raise();
        label_5->raise();
        model->raise();
        state->raise();
        matricule->raise();

        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QWidget *edit)
    {
        edit->setWindowTitle(QCoreApplication::translate("edit", "Form", nullptr));
        marque->setText(QString());
        label_3->setText(QCoreApplication::translate("edit", "Broand :", nullptr));
        addb->setText(QCoreApplication::translate("edit", "Edit Car", nullptr));
        label_6->setText(QCoreApplication::translate("edit", "Registration number :", nullptr));
        label_8->setText(QCoreApplication::translate("edit", "State :", nullptr));
        label_4->setText(QCoreApplication::translate("edit", "Model :", nullptr));
        label_7->setText(QCoreApplication::translate("edit", "Price :", nullptr));
        label_5->setText(QCoreApplication::translate("edit", "Mileage :", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
