/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QLabel *label;
    QLineEdit *kilo;
    QLineEdit *model;
    QLineEdit *marque;
    QPushButton *addb;
    QLineEdit *matricule;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *line;
    QLabel *bro;
    QLineEdit *price;
    QLabel *label_7;
    QToolButton *select;
    QLabel *kilo_2;
    QTextEdit *textEdit;
    QLabel *label_11;
    QLabel *image;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_9;
    QPushButton *home;
    QPushButton *addr;
    QPushButton *logout;
    QPushButton *editr;
    QPushButton *history;

    void setupUi(QWidget *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName(QString::fromUtf8("add"));
        add->resize(812, 540);
        label = new QLabel(add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, -10, 631, 671));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        kilo = new QLineEdit(add);
        kilo->setObjectName(QString::fromUtf8("kilo"));
        kilo->setGeometry(QRect(230, 200, 241, 31));
        model = new QLineEdit(add);
        model->setObjectName(QString::fromUtf8("model"));
        model->setGeometry(QRect(230, 90, 241, 31));
        marque = new QLineEdit(add);
        marque->setObjectName(QString::fromUtf8("marque"));
        marque->setGeometry(QRect(230, 40, 241, 31));
        addb = new QPushButton(add);
        addb->setObjectName(QString::fromUtf8("addb"));
        addb->setGeometry(QRect(230, 480, 161, 41));
        QFont font;
        font.setPointSize(11);
        addb->setFont(font);
        addb->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(0, 85, 255);\n"
"color:white;\n"
""));
        matricule = new QLineEdit(add);
        matricule->setObjectName(QString::fromUtf8("matricule"));
        matricule->setGeometry(QRect(230, 150, 241, 31));
        label_3 = new QLabel(add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 20, 71, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        label_3->setFont(font1);
        label_4 = new QLabel(add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 70, 71, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(add);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 180, 71, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 120, 151, 31));
        label_6->setFont(font1);
        line = new QLineEdit(add);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(270, 290, 201, 31));
        bro = new QLabel(add);
        bro->setObjectName(QString::fromUtf8("bro"));
        bro->setGeometry(QRect(460, 410, 231, 16));
        price = new QLineEdit(add);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(230, 250, 241, 31));
        label_7 = new QLabel(add);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 230, 71, 21));
        label_7->setFont(font1);
        select = new QToolButton(add);
        select->setObjectName(QString::fromUtf8("select"));
        select->setGeometry(QRect(230, 290, 41, 31));
        kilo_2 = new QLabel(add);
        kilo_2->setObjectName(QString::fromUtf8("kilo_2"));
        kilo_2->setGeometry(QRect(230, 320, 241, 20));
        textEdit = new QTextEdit(add);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(230, 360, 361, 111));
        label_11 = new QLabel(add);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(230, 330, 151, 31));
        label_11->setFont(font1);
        image = new QLabel(add);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(510, 40, 281, 281));
        label_8 = new QLabel(add);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 140, 201, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-40, 0, 241, 721));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 85, 255);"));
        label_9 = new QLabel(add);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 10, 131, 121));
        label_9->setStyleSheet(QString::fromUtf8("border-radius:60px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:3px black solid;"));
        label_9->setFrameShape(QFrame::Box);
        label_9->setFrameShadow(QFrame::Sunken);
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_person_128px_1.png")));
        home = new QPushButton(add);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(50, 200, 101, 41));
        QFont font3;
        font3.setPointSize(12);
        home->setFont(font3);
        home->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/fichier/icons8_home_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon);
        home->setIconSize(QSize(30, 30));
        addr = new QPushButton(add);
        addr->setObjectName(QString::fromUtf8("addr"));
        addr->setGeometry(QRect(50, 320, 101, 41));
        addr->setFont(font3);
        addr->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:20px;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/fichier/icons8_add_100px.png"), QSize(), QIcon::Normal, QIcon::Off);
        addr->setIcon(icon1);
        addr->setIconSize(QSize(30, 30));
        logout = new QPushButton(add);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(0, 470, 201, 41));
        logout->setFont(font3);
        logout->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/fichier/icons8_logout_rounded_left_60px.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon2);
        logout->setIconSize(QSize(30, 30));
        editr = new QPushButton(add);
        editr->setObjectName(QString::fromUtf8("editr"));
        editr->setGeometry(QRect(10, 390, 171, 41));
        editr->setFont(font3);
        editr->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build/fichier/icons8_edit_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        editr->setIcon(icon3);
        editr->setIconSize(QSize(30, 30));
        history = new QPushButton(add);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(50, 260, 101, 41));
        history->setFont(font3);
        history->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/build/fichier/icons8_activity_history_64px.png"), QSize(), QIcon::Normal, QIcon::Off);
        history->setIcon(icon4);
        history->setIconSize(QSize(30, 30));
        label_2->raise();
        label->raise();
        kilo->raise();
        model->raise();
        marque->raise();
        addb->raise();
        matricule->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        line->raise();
        bro->raise();
        price->raise();
        label_7->raise();
        select->raise();
        kilo_2->raise();
        textEdit->raise();
        label_11->raise();
        image->raise();
        label_8->raise();
        label_9->raise();
        home->raise();
        addr->raise();
        logout->raise();
        editr->raise();
        history->raise();

        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QWidget *add)
    {
        add->setWindowTitle(QCoreApplication::translate("add", "Form", nullptr));
        label->setText(QString());
        marque->setText(QString());
        addb->setText(QCoreApplication::translate("add", "Add Car", nullptr));
        label_3->setText(QCoreApplication::translate("add", "Broand :", nullptr));
        label_4->setText(QCoreApplication::translate("add", "Model :", nullptr));
        label_5->setText(QCoreApplication::translate("add", "Mileage :", nullptr));
        label_6->setText(QCoreApplication::translate("add", "Registration number :", nullptr));
        bro->setText(QString());
        label_7->setText(QCoreApplication::translate("add", "Price :", nullptr));
        select->setText(QCoreApplication::translate("add", "...", nullptr));
        kilo_2->setText(QString());
        label_11->setText(QCoreApplication::translate("add", "Description :", nullptr));
        image->setText(QString());
        label_8->setText(QCoreApplication::translate("add", "Votre nom\n"
"@Admin", nullptr));
        label_2->setText(QString());
        label_9->setText(QString());
        home->setText(QCoreApplication::translate("add", "Home", nullptr));
        addr->setText(QCoreApplication::translate("add", "Add Car", nullptr));
        logout->setText(QCoreApplication::translate("add", "Log out", nullptr));
        editr->setText(QCoreApplication::translate("add", "   Edit or \n"
"Remove Car", nullptr));
        history->setText(QCoreApplication::translate("add", "History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
