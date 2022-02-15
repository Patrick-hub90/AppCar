/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QLabel *photo;
    QLabel *marque;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *collection;
    QPushButton *locate;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *kilo_2;
    QLabel *label_19;
    QLabel *etat_2;
    QLabel *matricule;
    QLabel *label_22;
    QLabel *modele;
    QLabel *fuel;
    QLabel *kilo;
    QLabel *pric;
    QLabel *pric_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QString::fromUtf8("info"));
        info->resize(732, 319);
        info->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        photo = new QLabel(info);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setGeometry(QRect(10, 80, 231, 201));
        photo->setFrameShape(QFrame::NoFrame);
        photo->setScaledContents(true);
        marque = new QLabel(info);
        marque->setObjectName(QString::fromUtf8("marque"));
        marque->setGeometry(QRect(10, 0, 181, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        marque->setFont(font);
        marque->setFrameShape(QFrame::NoFrame);
        label_8 = new QLabel(info);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 80, 141, 20));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_8->setFont(font1);
        label_8->setFrameShape(QFrame::NoFrame);
        label_9 = new QLabel(info);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 60, 81, 21));
        QFont font2;
        font2.setPointSize(11);
        label_9->setFont(font2);
        label_9->setFrameShape(QFrame::NoFrame);
        label_10 = new QLabel(info);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 110, 91, 21));
        label_10->setFont(font2);
        label_10->setFrameShape(QFrame::NoFrame);
        label_11 = new QLabel(info);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(550, 80, 181, 21));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        label_11->setFont(font3);
        label_11->setFrameShape(QFrame::NoFrame);
        label_12 = new QLabel(info);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(550, 110, 181, 16));
        label_12->setFont(font3);
        label_12->setFrameShape(QFrame::NoFrame);
        label_13 = new QLabel(info);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(550, 140, 181, 16));
        label_13->setFont(font3);
        label_13->setFrameShape(QFrame::NoFrame);
        label_14 = new QLabel(info);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(550, 170, 181, 16));
        label_14->setFont(font3);
        label_14->setFrameShape(QFrame::NoFrame);
        label_15 = new QLabel(info);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(550, 200, 181, 16));
        label_15->setFont(font3);
        label_15->setFrameShape(QFrame::NoFrame);
        collection = new QPushButton(info);
        collection->setObjectName(QString::fromUtf8("collection"));
        collection->setGeometry(QRect(340, 280, 171, 31));
        collection->setFont(font1);
        collection->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"border-radius: 10px;\n"
"color: white;"));
        locate = new QPushButton(info);
        locate->setObjectName(QString::fromUtf8("locate"));
        locate->setGeometry(QRect(530, 280, 171, 31));
        locate->setFont(font1);
        locate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"border-radius: 10px;\n"
"color: white;"));
        label_18 = new QLabel(info);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(680, 0, 81, 51));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(false);
        label_18->setFont(font4);
        label_16 = new QLabel(info);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(550, 60, 41, 21));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        label_16->setFont(font5);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        kilo_2 = new QLabel(info);
        kilo_2->setObjectName(QString::fromUtf8("kilo_2"));
        kilo_2->setGeometry(QRect(320, 130, 81, 16));
        kilo_2->setFont(font5);
        kilo_2->setFrameShape(QFrame::NoFrame);
        label_19 = new QLabel(info);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(320, 160, 81, 16));
        QFont font6;
        font6.setPointSize(12);
        label_19->setFont(font6);
        etat_2 = new QLabel(info);
        etat_2->setObjectName(QString::fromUtf8("etat_2"));
        etat_2->setGeometry(QRect(320, 180, 91, 16));
        etat_2->setFont(font5);
        matricule = new QLabel(info);
        matricule->setObjectName(QString::fromUtf8("matricule"));
        matricule->setGeometry(QRect(320, 230, 161, 16));
        matricule->setFont(font5);
        label_22 = new QLabel(info);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(320, 210, 141, 16));
        label_22->setFont(font2);
        modele = new QLabel(info);
        modele->setObjectName(QString::fromUtf8("modele"));
        modele->setGeometry(QRect(10, 40, 181, 31));
        QFont font7;
        font7.setPointSize(16);
        modele->setFont(font7);
        modele->setFrameShape(QFrame::NoFrame);
        fuel = new QLabel(info);
        fuel->setObjectName(QString::fromUtf8("fuel"));
        fuel->setGeometry(QRect(260, 60, 47, 41));
        fuel->setFrameShape(QFrame::NoFrame);
        fuel->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_gas_station_48px.png")));
        fuel->setScaledContents(true);
        kilo = new QLabel(info);
        kilo->setObjectName(QString::fromUtf8("kilo"));
        kilo->setGeometry(QRect(260, 110, 47, 51));
        kilo->setFrameShape(QFrame::NoFrame);
        kilo->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_speed_48px_1.png")));
        kilo->setScaledContents(true);
        pric = new QLabel(info);
        pric->setObjectName(QString::fromUtf8("pric"));
        pric->setGeometry(QRect(600, 0, 41, 51));
        QFont font8;
        font8.setPointSize(28);
        font8.setBold(true);
        pric->setFont(font8);
        pric_2 = new QLabel(info);
        pric_2->setObjectName(QString::fromUtf8("pric_2"));
        pric_2->setGeometry(QRect(650, 0, 31, 51));
        pric_2->setFont(font8);
        label = new QLabel(info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 80, 21, 21));
        label->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_ok_96px.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 110, 21, 21));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_ok_96px.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(info);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(520, 140, 21, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_ok_96px.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(info);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 170, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_ok_96px.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(520, 200, 21, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_ok_96px.png")));
        label_5->setScaledContents(true);

        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QWidget *info)
    {
        info->setWindowTitle(QCoreApplication::translate("info", "Form", nullptr));
        photo->setText(QString());
        marque->setText(QString());
        label_8->setText(QCoreApplication::translate("info", "Full to restore full", nullptr));
        label_9->setText(QCoreApplication::translate("info", "Fuel policy", nullptr));
        label_10->setText(QCoreApplication::translate("info", "Mileage", nullptr));
        label_11->setText(QCoreApplication::translate("info", "Collision damage insurance", nullptr));
        label_12->setText(QCoreApplication::translate("info", "Theft insurance", nullptr));
        label_13->setText(QCoreApplication::translate("info", "Public liability", nullptr));
        label_14->setText(QCoreApplication::translate("info", "Order cancellation", nullptr));
        label_15->setText(QCoreApplication::translate("info", "Amendment", nullptr));
        collection->setText(QCoreApplication::translate("info", "Add to Collection", nullptr));
        locate->setText(QCoreApplication::translate("info", "Locate", nullptr));
        label_18->setText(QCoreApplication::translate("info", "/ Day", nullptr));
        label_16->setText(QCoreApplication::translate("info", "Free", nullptr));
        kilo_2->setText(QCoreApplication::translate("info", "000", nullptr));
        label_19->setText(QCoreApplication::translate("info", "Etat", nullptr));
        etat_2->setText(QCoreApplication::translate("info", "111111", nullptr));
        matricule->setText(QCoreApplication::translate("info", "222", nullptr));
        label_22->setText(QCoreApplication::translate("info", "Registration number", nullptr));
        modele->setText(QString());
        fuel->setText(QString());
        kilo->setText(QString());
        pric->setText(QString());
        pric_2->setText(QCoreApplication::translate("info", "$", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
