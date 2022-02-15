/********************************************************************************
** Form generated from reading UI file 'transaction.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTION_H
#define UI_TRANSACTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transaction
{
public:
    QLabel *label_6;
    QLineEdit *marque;
    QLabel *label_4;
    QLineEdit *model;
    QLabel *label_3;
    QLineEdit *price;
    QLineEdit *matricule;
    QPushButton *addb;
    QLineEdit *kilo;
    QLabel *label_5;
    QLabel *label_7;
    QPushButton *addb_2;
    QLineEdit *state;
    QLabel *label_8;
    QTableView *tableView;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_10;
    QPushButton *logout;
    QPushButton *history;
    QPushButton *addr;
    QPushButton *home;
    QPushButton *editr;
    QLabel *label_2;

    void setupUi(QWidget *transaction)
    {
        if (transaction->objectName().isEmpty())
            transaction->setObjectName(QString::fromUtf8("transaction"));
        transaction->resize(812, 540);
        label_6 = new QLabel(transaction);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 120, 171, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        label_6->setFont(font);
        marque = new QLineEdit(transaction);
        marque->setObjectName(QString::fromUtf8("marque"));
        marque->setGeometry(QRect(230, 20, 281, 31));
        label_4 = new QLabel(transaction);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 60, 71, 21));
        label_4->setFont(font);
        model = new QLineEdit(transaction);
        model->setObjectName(QString::fromUtf8("model"));
        model->setGeometry(QRect(230, 80, 281, 31));
        label_3 = new QLabel(transaction);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 0, 71, 21));
        label_3->setFont(font);
        price = new QLineEdit(transaction);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(230, 250, 281, 31));
        matricule = new QLineEdit(transaction);
        matricule->setObjectName(QString::fromUtf8("matricule"));
        matricule->setGeometry(QRect(230, 140, 281, 31));
        addb = new QPushButton(transaction);
        addb->setObjectName(QString::fromUtf8("addb"));
        addb->setGeometry(QRect(240, 490, 101, 31));
        QFont font1;
        font1.setPointSize(11);
        addb->setFont(font1);
        addb->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-radius: 10px;\n"
"color: white;\n"
"box-shadow:6px 6px 6px 6px black inset;"));
        kilo = new QLineEdit(transaction);
        kilo->setObjectName(QString::fromUtf8("kilo"));
        kilo->setGeometry(QRect(230, 190, 281, 31));
        label_5 = new QLabel(transaction);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 170, 71, 21));
        label_5->setFont(font);
        label_7 = new QLabel(transaction);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 230, 71, 16));
        label_7->setFont(font);
        addb_2 = new QPushButton(transaction);
        addb_2->setObjectName(QString::fromUtf8("addb_2"));
        addb_2->setGeometry(QRect(350, 490, 101, 31));
        addb_2->setFont(font1);
        addb_2->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-radius: 10px;\n"
"color: white;\n"
"box-shadow:6px 6px 6px 6px black inset;"));
        state = new QLineEdit(transaction);
        state->setObjectName(QString::fromUtf8("state"));
        state->setGeometry(QRect(230, 310, 281, 31));
        label_8 = new QLabel(transaction);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 290, 71, 16));
        label_8->setFont(font);
        tableView = new QTableView(transaction);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(230, 350, 571, 131));
        label_9 = new QLabel(transaction);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 140, 201, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);
        label = new QLabel(transaction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 201, 691));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 85, 255);"));
        label_10 = new QLabel(transaction);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 10, 131, 121));
        label_10->setStyleSheet(QString::fromUtf8("border-radius:60px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:3px black solid;"));
        label_10->setFrameShape(QFrame::Box);
        label_10->setFrameShadow(QFrame::Sunken);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_person_128px_1.png")));
        logout = new QPushButton(transaction);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(0, 470, 201, 41));
        QFont font3;
        font3.setPointSize(12);
        logout->setFont(font3);
        logout->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/fichier/icons8_logout_rounded_left_60px.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon);
        logout->setIconSize(QSize(30, 30));
        history = new QPushButton(transaction);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(50, 260, 101, 41));
        history->setFont(font3);
        history->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/fichier/icons8_activity_history_64px.png"), QSize(), QIcon::Normal, QIcon::Off);
        history->setIcon(icon1);
        history->setIconSize(QSize(30, 30));
        addr = new QPushButton(transaction);
        addr->setObjectName(QString::fromUtf8("addr"));
        addr->setGeometry(QRect(50, 320, 101, 41));
        addr->setFont(font3);
        addr->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/fichier/icons8_add_100px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        addr->setIcon(icon2);
        addr->setIconSize(QSize(30, 30));
        home = new QPushButton(transaction);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(50, 200, 101, 41));
        home->setFont(font3);
        home->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build/fichier/icons8_home_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon3);
        home->setIconSize(QSize(30, 30));
        editr = new QPushButton(transaction);
        editr->setObjectName(QString::fromUtf8("editr"));
        editr->setGeometry(QRect(10, 390, 171, 41));
        editr->setFont(font3);
        editr->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:20px;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/build/fichier/icons8_edit_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        editr->setIcon(icon4);
        editr->setIconSize(QSize(30, 30));
        label_2 = new QLabel(transaction);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(196, 0, 621, 541));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2->raise();
        label->raise();
        label_6->raise();
        marque->raise();
        label_4->raise();
        model->raise();
        label_3->raise();
        price->raise();
        matricule->raise();
        addb->raise();
        kilo->raise();
        label_5->raise();
        label_7->raise();
        addb_2->raise();
        state->raise();
        label_8->raise();
        tableView->raise();
        label_9->raise();
        label_10->raise();
        logout->raise();
        history->raise();
        addr->raise();
        home->raise();
        editr->raise();

        retranslateUi(transaction);

        QMetaObject::connectSlotsByName(transaction);
    } // setupUi

    void retranslateUi(QWidget *transaction)
    {
        transaction->setWindowTitle(QCoreApplication::translate("transaction", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("transaction", "Registration number :", nullptr));
        marque->setText(QString());
        label_4->setText(QCoreApplication::translate("transaction", "Model :", nullptr));
        label_3->setText(QCoreApplication::translate("transaction", "Broand :", nullptr));
        addb->setText(QCoreApplication::translate("transaction", "Edit Car", nullptr));
        label_5->setText(QCoreApplication::translate("transaction", "Mileage :", nullptr));
        label_7->setText(QCoreApplication::translate("transaction", "Price :", nullptr));
        addb_2->setText(QCoreApplication::translate("transaction", "Remove Car", nullptr));
        label_8->setText(QCoreApplication::translate("transaction", "State :", nullptr));
        label_9->setText(QCoreApplication::translate("transaction", "Votre nom\n"
"@Admin", nullptr));
        label->setText(QString());
        label_10->setText(QString());
        logout->setText(QCoreApplication::translate("transaction", "Log out", nullptr));
        history->setText(QCoreApplication::translate("transaction", "History", nullptr));
        addr->setText(QCoreApplication::translate("transaction", "Add Car", nullptr));
        home->setText(QCoreApplication::translate("transaction", "Home", nullptr));
        editr->setText(QCoreApplication::translate("transaction", "   Edit or \n"
"Remove Car", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class transaction: public Ui_transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTION_H
