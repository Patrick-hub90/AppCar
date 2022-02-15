/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLineEdit *email;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QLabel *label_10;
    QLabel *label_5;
    QRadioButton *feminin;
    QLabel *label_12;
    QLineEdit *confirm;
    QLabel *label_7;
    QRadioButton *masculin;
    QPushButton *sign;
    QLabel *eml;
    QLabel *pse;
    QLabel *user;
    QLabel *conf;
    QLabel *pass;
    QPushButton *login;
    QLabel *label;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(812, 540);
        signup->setStyleSheet(QString::fromUtf8(""));
        email = new QLineEdit(signup);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(160, 180, 211, 31));
        label_9 = new QLabel(signup);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 410, 191, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(false);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: darkblue;"));
        label_8 = new QLabel(signup);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 70, 251, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setStrikeOut(false);
        label_8->setFont(font1);
        label_4 = new QLabel(signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 190, 71, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("System")});
        font2.setBold(true);
        label_4->setFont(font2);
        username = new QLineEdit(signup);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(160, 130, 211, 31));
        label_2 = new QLabel(signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 140, 91, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("System")});
        font3.setPointSize(19);
        font3.setBold(true);
        label_2->setFont(font3);
        password = new QLineEdit(signup);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(160, 260, 211, 31));
        label_10 = new QLabel(signup);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 110, 321, 271));
        label_10->setFrameShape(QFrame::NoFrame);
        label_5 = new QLabel(signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 270, 71, 21));
        label_5->setFont(font2);
        feminin = new QRadioButton(signup);
        feminin->setObjectName(QString::fromUtf8("feminin"));
        feminin->setGeometry(QRect(230, 230, 50, 20));
        label_12 = new QLabel(signup);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(80, 230, 61, 16));
        label_12->setFont(font2);
        confirm = new QLineEdit(signup);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(160, 310, 211, 31));
        label_7 = new QLabel(signup);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 320, 71, 21));
        label_7->setFont(font2);
        masculin = new QRadioButton(signup);
        masculin->setObjectName(QString::fromUtf8("masculin"));
        masculin->setGeometry(QRect(160, 230, 50, 21));
        sign = new QPushButton(signup);
        sign->setObjectName(QString::fromUtf8("sign"));
        sign->setGeometry(QRect(180, 370, 161, 31));
        QFont font4;
        font4.setPointSize(11);
        sign->setFont(font4);
        sign->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-radius: 10px;\n"
"color: white;\n"
"box-shadow:6px 6px 6px 6px black inset;"));
        eml = new QLabel(signup);
        eml->setObjectName(QString::fromUtf8("eml"));
        eml->setGeometry(QRect(160, 210, 211, 16));
        pse = new QLabel(signup);
        pse->setObjectName(QString::fromUtf8("pse"));
        pse->setGeometry(QRect(160, 290, 211, 20));
        user = new QLabel(signup);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(160, 160, 211, 20));
        conf = new QLabel(signup);
        conf->setObjectName(QString::fromUtf8("conf"));
        conf->setGeometry(QRect(160, 340, 211, 21));
        pass = new QLabel(signup);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(160, 290, 211, 16));
        login = new QPushButton(signup);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(180, 440, 161, 31));
        login->setFont(font4);
        login->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-radius: 10px;\n"
"color: white;\n"
"box-shadow:6px 6px 6px 6px black inset;"));
        label = new QLabel(signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 812, 540));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label->raise();
        email->raise();
        label_9->raise();
        label_8->raise();
        label_4->raise();
        username->raise();
        label_2->raise();
        password->raise();
        label_10->raise();
        label_5->raise();
        feminin->raise();
        label_12->raise();
        confirm->raise();
        label_7->raise();
        masculin->raise();
        sign->raise();
        eml->raise();
        pse->raise();
        user->raise();
        conf->raise();
        pass->raise();
        login->raise();

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("signup", "Have you already account ?", nullptr));
        label_8->setText(QCoreApplication::translate("signup", "Sign Up for Parc", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Email :", nullptr));
        username->setText(QString());
        label_2->setText(QCoreApplication::translate("signup", "Username :", nullptr));
        label_10->setText(QString());
        label_5->setText(QCoreApplication::translate("signup", "Password :", nullptr));
        feminin->setText(QCoreApplication::translate("signup", "F", nullptr));
        label_12->setText(QCoreApplication::translate("signup", "Gender :", nullptr));
        label_7->setText(QCoreApplication::translate("signup", "Confirm :", nullptr));
        masculin->setText(QCoreApplication::translate("signup", "M", nullptr));
        sign->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        eml->setText(QString());
        pse->setText(QString());
        user->setText(QString());
        conf->setText(QString());
        pass->setText(QString());
        login->setText(QCoreApplication::translate("signup", "Login", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
