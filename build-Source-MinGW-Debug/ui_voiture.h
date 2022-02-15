/********************************************************************************
** Form generated from reading UI file 'voiture.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOITURE_H
#define UI_VOITURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_voiture
{
public:
    QPushButton *detail;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *marque;
    QLabel *prix;
    QLabel *labelt;
    QLabel *image;

    void setupUi(QWidget *voiture)
    {
        if (voiture->objectName().isEmpty())
            voiture->setObjectName(QString::fromUtf8("voiture"));
        voiture->resize(202, 241);
        voiture->setLayoutDirection(Qt::LeftToRight);
        voiture->setAutoFillBackground(false);
        voiture->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border:3px black solid;\n"
"background-color: rgb(255, 255, 255);"));
        detail = new QPushButton(voiture);
        detail->setObjectName(QString::fromUtf8("detail"));
        detail->setGeometry(QRect(-20, 200, 251, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(12);
        font.setBold(true);
        detail->setFont(font);
        detail->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"color: white;\n"
"border:3px black solid;"));
        label = new QLabel(voiture);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 201, 241));
        label->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:5px black solid;"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(voiture);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, 130, 241, 71));
        label_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius:1px;\n"
""));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(voiture);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 130, 61, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_5->setFont(font1);
        label_6 = new QLabel(voiture);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 170, 111, 20));
        label_6->setFont(font1);
        marque = new QLabel(voiture);
        marque->setObjectName(QString::fromUtf8("marque"));
        marque->setGeometry(QRect(80, 130, 121, 21));
        QFont font2;
        font2.setPointSize(12);
        marque->setFont(font2);
        marque->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        prix = new QLabel(voiture);
        prix->setObjectName(QString::fromUtf8("prix"));
        prix->setGeometry(QRect(120, 160, 71, 31));
        prix->setFont(font2);
        prix->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelt = new QLabel(voiture);
        labelt->setObjectName(QString::fromUtf8("labelt"));
        labelt->setGeometry(QRect(5, 1, 191, 111));
        image = new QLabel(voiture);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(-10, 0, 241, 131));
        image->setScaledContents(true);
        label_2->raise();
        label->raise();
        detail->raise();
        labelt->raise();
        label_5->raise();
        label_6->raise();
        marque->raise();
        prix->raise();
        image->raise();

        retranslateUi(voiture);

        QMetaObject::connectSlotsByName(voiture);
    } // setupUi

    void retranslateUi(QWidget *voiture)
    {
        voiture->setWindowTitle(QCoreApplication::translate("voiture", "Form", nullptr));
        detail->setText(QCoreApplication::translate("voiture", "Select", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_5->setText(QCoreApplication::translate("voiture", "Mark :", nullptr));
        label_6->setText(QCoreApplication::translate("voiture", "Price by  day:", nullptr));
        marque->setText(QString());
        prix->setText(QString());
        labelt->setText(QString());
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class voiture: public Ui_voiture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOITURE_H
