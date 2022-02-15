/********************************************************************************
** Form generated from reading UI file 'locate.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATE_H
#define UI_LOCATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *username;
    QLineEdit *email;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *user;
    QLabel *eml;
    QGroupBox *groupBox_2;
    QComboBox *car;
    QSpinBox *qte;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *prie;
    QDateTimeEdit *debut;
    QDateTimeEdit *fin;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *locate;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *editr;
    QPushButton *home;
    QPushButton *logout;
    QPushButton *history;
    QPushButton *addr;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(812, 540);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 0, 611, 540));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 30, 551, 151));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        groupBox->setFont(font);
        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(140, 40, 281, 31));
        email = new QLineEdit(groupBox);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(140, 90, 281, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 61, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 100, 61, 21));
        label_3->setFont(font1);
        user = new QLabel(groupBox);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(140, 70, 281, 20));
        user->setFont(font1);
        eml = new QLabel(groupBox);
        eml->setObjectName(QString::fromUtf8("eml"));
        eml->setGeometry(QRect(140, 120, 281, 20));
        eml->setFont(font1);
        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(240, 190, 551, 231));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        groupBox_2->setFont(font2);
        car = new QComboBox(groupBox_2);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(150, 40, 241, 31));
        qte = new QSpinBox(groupBox_2);
        qte->setObjectName(QString::fromUtf8("qte"));
        qte->setGeometry(QRect(150, 80, 241, 31));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 50, 61, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 90, 61, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 200, 61, 21));
        label_6->setFont(font1);
        prie = new QLabel(groupBox_2);
        prie->setObjectName(QString::fromUtf8("prie"));
        prie->setGeometry(QRect(140, 190, 101, 31));
        prie->setFrameShape(QFrame::NoFrame);
        prie->setMidLineWidth(7);
        debut = new QDateTimeEdit(groupBox_2);
        debut->setObjectName(QString::fromUtf8("debut"));
        debut->setGeometry(QRect(150, 140, 101, 31));
        debut->setFont(font1);
        fin = new QDateTimeEdit(groupBox_2);
        fin->setObjectName(QString::fromUtf8("fin"));
        fin->setGeometry(QRect(290, 140, 101, 31));
        fin->setFont(font1);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 120, 61, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 120, 61, 21));
        label_8->setFont(font1);
        locate = new QPushButton(Form);
        locate->setObjectName(QString::fromUtf8("locate"));
        locate->setGeometry(QRect(600, 460, 141, 31));
        QFont font3;
        font3.setPointSize(12);
        locate->setFont(font3);
        locate->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(0, 85, 255);\n"
""));
        label_9 = new QLabel(Form);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 140, 201, 41));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(Form);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(-30, -40, 231, 691));
        label_10->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 85, 255);"));
        label_11 = new QLabel(Form);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 10, 131, 121));
        label_11->setStyleSheet(QString::fromUtf8("border-radius:60px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:3px black solid;"));
        label_11->setFrameShape(QFrame::Box);
        label_11->setFrameShadow(QFrame::Sunken);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_person_128px_1.png")));
        editr = new QPushButton(Form);
        editr->setObjectName(QString::fromUtf8("editr"));
        editr->setGeometry(QRect(10, 390, 171, 41));
        editr->setFont(font3);
        editr->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/fichier/icons8_edit_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        editr->setIcon(icon);
        editr->setIconSize(QSize(30, 30));
        home = new QPushButton(Form);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(50, 200, 101, 41));
        home->setFont(font3);
        home->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/fichier/icons8_home_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon1);
        home->setIconSize(QSize(30, 30));
        logout = new QPushButton(Form);
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
        history = new QPushButton(Form);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(50, 260, 101, 41));
        history->setFont(font3);
        history->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build/fichier/icons8_activity_history_64px.png"), QSize(), QIcon::Normal, QIcon::Off);
        history->setIcon(icon3);
        history->setIconSize(QSize(30, 30));
        addr = new QPushButton(Form);
        addr->setObjectName(QString::fromUtf8("addr"));
        addr->setGeometry(QRect(50, 320, 101, 41));
        addr->setFont(font3);
        addr->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/build/fichier/icons8_add_100px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        addr->setIcon(icon4);
        addr->setIconSize(QSize(30, 30));
        label_10->raise();
        label->raise();
        groupBox->raise();
        groupBox_2->raise();
        locate->raise();
        label_9->raise();
        label_11->raise();
        editr->raise();
        home->raise();
        logout->raise();
        history->raise();
        addr->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Form", "Client", nullptr));
        label_2->setText(QCoreApplication::translate("Form", " Name :", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Email :", nullptr));
        user->setText(QString());
        eml->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Form", "Location Cars", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Cars :", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "Qte :", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "Total :", nullptr));
        prie->setText(QString());
        label_7->setText(QCoreApplication::translate("Form", "Start:", nullptr));
        label_8->setText(QCoreApplication::translate("Form", "End :", nullptr));
        locate->setText(QCoreApplication::translate("Form", "Locate", nullptr));
        label_9->setText(QCoreApplication::translate("Form", "Votre nom\n"
"@Admin", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        editr->setText(QCoreApplication::translate("Form", "   Edit or \n"
"Remove Car", nullptr));
        home->setText(QCoreApplication::translate("Form", "Home", nullptr));
        logout->setText(QCoreApplication::translate("Form", "Log out", nullptr));
        history->setText(QCoreApplication::translate("Form", "History", nullptr));
        addr->setText(QCoreApplication::translate("Form", "Add Car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATE_H
