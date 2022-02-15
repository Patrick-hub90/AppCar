/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *lpassword;
    QLabel *label_8;
    QLineEdit *lpseudo;
    QPushButton *sign;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QLabel *passw;
    QLabel *label_9;
    QPushButton *sign_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(752, 461);
        lpassword = new QLineEdit(login);
        lpassword->setObjectName(QString::fromUtf8("lpassword"));
        lpassword->setGeometry(QRect(290, 230, 211, 31));
        lpassword->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(login);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(350, 100, 61, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        font.setBold(true);
        font.setStrikeOut(false);
        label_8->setFont(font);
        lpseudo = new QLineEdit(login);
        lpseudo->setObjectName(QString::fromUtf8("lpseudo"));
        lpseudo->setGeometry(QRect(290, 180, 211, 31));
        sign = new QPushButton(login);
        sign->setObjectName(QString::fromUtf8("sign"));
        sign->setGeometry(QRect(320, 290, 161, 31));
        QFont font1;
        font1.setPointSize(11);
        sign->setFont(font1);
        sign->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-radius: 10px;\n"
"color: white;\n"
"box-shadow:6px 6px 6px 6px black inset;"));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 190, 81, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("System")});
        font2.setPointSize(19);
        font2.setBold(true);
        label_3->setFont(font2);
        label_5 = new QLabel(login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 240, 71, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("System")});
        font3.setBold(true);
        label_5->setFont(font3);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 812, 540));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        passw = new QLabel(login);
        passw->setObjectName(QString::fromUtf8("passw"));
        passw->setGeometry(QRect(310, 151, 171, 20));
        label_9 = new QLabel(login);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(330, 330, 151, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("System")});
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setUnderline(false);
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("color: darkblue;"));
        sign_2 = new QPushButton(login);
        sign_2->setObjectName(QString::fromUtf8("sign_2"));
        sign_2->setGeometry(QRect(320, 350, 161, 31));
        sign_2->setFont(font1);
        sign_2->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-radius: 10px;\n"
"color: white;\n"
"box-shadow:6px 6px 6px 6px black inset;"));
        label->raise();
        lpassword->raise();
        label_8->raise();
        lpseudo->raise();
        sign->raise();
        label_3->raise();
        label_5->raise();
        passw->raise();
        label_9->raise();
        sign_2->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        label_8->setText(QCoreApplication::translate("login", "Login", nullptr));
        sign->setText(QCoreApplication::translate("login", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Pseudo :", nullptr));
        label_5->setText(QCoreApplication::translate("login", "Password :", nullptr));
        label->setText(QString());
        passw->setText(QString());
        label_9->setText(QCoreApplication::translate("login", "Haven't you account ?", nullptr));
        sign_2->setText(QCoreApplication::translate("login", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
