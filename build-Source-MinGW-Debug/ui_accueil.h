/********************************************************************************
** Form generated from reading UI file 'accueil.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accueil
{
public:
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *home;
    QPushButton *history;
    QPushButton *addr;
    QPushButton *editr;
    QPushButton *logout;
    QPushButton *panier;

    void setupUi(QWidget *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QString::fromUtf8("Accueil"));
        Accueil->resize(812, 540);
        Accueil->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(Accueil);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(300, 90, 361, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border:2px solid rgba(0, 85, 255,0.8);\n"
"background-color: rgba(255, 255, 255,0.4);\n"
"border-radius: 15%;\n"
""));
        scrollArea = new QScrollArea(Accueil);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(210, 140, 601, 501));
        scrollArea->setStyleSheet(QString::fromUtf8("border-radius:20px;"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 601, 501));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(Accueil);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-30, -40, 231, 691));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 85, 255);"));
        label_3 = new QLabel(Accueil);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 131, 121));
        label_3->setStyleSheet(QString::fromUtf8("border-radius:60px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:3px black solid;"));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_person_128px_1.png")));
        label_4 = new QLabel(Accueil);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 140, 201, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        home = new QPushButton(Accueil);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(50, 200, 101, 41));
        QFont font1;
        font1.setPointSize(12);
        home->setFont(font1);
        home->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:20px;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/fichier/icons8_home_48px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon);
        home->setIconSize(QSize(30, 30));
        history = new QPushButton(Accueil);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(50, 260, 101, 41));
        history->setFont(font1);
        history->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/fichier/icons8_activity_history_64px.png"), QSize(), QIcon::Normal, QIcon::Off);
        history->setIcon(icon1);
        history->setIconSize(QSize(30, 30));
        addr = new QPushButton(Accueil);
        addr->setObjectName(QString::fromUtf8("addr"));
        addr->setGeometry(QRect(50, 320, 101, 41));
        addr->setFont(font1);
        addr->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/fichier/icons8_add_100px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        addr->setIcon(icon2);
        addr->setIconSize(QSize(30, 30));
        editr = new QPushButton(Accueil);
        editr->setObjectName(QString::fromUtf8("editr"));
        editr->setGeometry(QRect(10, 390, 171, 41));
        editr->setFont(font1);
        editr->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build/fichier/icons8_edit_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        editr->setIcon(icon3);
        editr->setIconSize(QSize(30, 30));
        logout = new QPushButton(Accueil);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(0, 470, 201, 41));
        logout->setFont(font1);
        logout->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/build/fichier/icons8_logout_rounded_left_60px.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon4);
        logout->setIconSize(QSize(30, 30));
        panier = new QPushButton(Accueil);
        panier->setObjectName(QString::fromUtf8("panier"));
        panier->setGeometry(QRect(670, 10, 101, 41));
        panier->setFont(font);
        panier->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/build/fichier/icons8_shopping_cart_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        panier->setIcon(icon5);
        panier->setIconSize(QSize(30, 30));
        scrollArea->raise();
        lineEdit->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        home->raise();
        history->raise();
        addr->raise();
        editr->raise();
        logout->raise();
        panier->raise();

        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QWidget *Accueil)
    {
        Accueil->setWindowTitle(QCoreApplication::translate("Accueil", "Form", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Accueil", "     Searching.......", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("Accueil", "@Admin", nullptr));
        home->setText(QCoreApplication::translate("Accueil", "Home", nullptr));
        history->setText(QCoreApplication::translate("Accueil", "History", nullptr));
        addr->setText(QCoreApplication::translate("Accueil", "Add Car", nullptr));
        editr->setText(QCoreApplication::translate("Accueil", "   Edit or \n"
"Remove Car", nullptr));
        logout->setText(QCoreApplication::translate("Accueil", "Log out", nullptr));
        panier->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
