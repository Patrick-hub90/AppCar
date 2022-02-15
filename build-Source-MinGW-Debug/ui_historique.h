/********************************************************************************
** Form generated from reading UI file 'historique.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIQUE_H
#define UI_HISTORIQUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remove
{
public:
    QGroupBox *groupBox;
    QComboBox *model;
    QComboBox *kilo;
    QComboBox *state;
    QComboBox *regis;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *price;
    QLabel *label_6;
    QComboBox *marque;
    QTableView *tableView;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *home;
    QPushButton *addr;
    QPushButton *editr;
    QPushButton *history;
    QPushButton *logout;

    void setupUi(QWidget *remove)
    {
        if (remove->objectName().isEmpty())
            remove->setObjectName(QString::fromUtf8("remove"));
        remove->resize(812, 540);
        groupBox = new QGroupBox(remove);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 0, 591, 171));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);\n"
"\n"
""));
        model = new QComboBox(groupBox);
        model->setObjectName(QString::fromUtf8("model"));
        model->setGeometry(QRect(180, 50, 141, 31));
        QFont font1;
        font1.setPointSize(12);
        model->setFont(font1);
        model->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        model->setEditable(false);
        model->setPlaceholderText(QString::fromUtf8(""));
        model->setDuplicatesEnabled(false);
        model->setFrame(false);
        kilo = new QComboBox(groupBox);
        kilo->setObjectName(QString::fromUtf8("kilo"));
        kilo->setGeometry(QRect(380, 50, 141, 31));
        kilo->setFont(font1);
        kilo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        kilo->setEditable(false);
        kilo->setPlaceholderText(QString::fromUtf8(""));
        kilo->setDuplicatesEnabled(false);
        kilo->setFrame(false);
        state = new QComboBox(groupBox);
        state->setObjectName(QString::fromUtf8("state"));
        state->setGeometry(QRect(10, 130, 141, 31));
        state->setFont(font1);
        state->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        state->setEditable(false);
        state->setPlaceholderText(QString::fromUtf8(""));
        state->setDuplicatesEnabled(false);
        state->setFrame(false);
        regis = new QComboBox(groupBox);
        regis->setObjectName(QString::fromUtf8("regis"));
        regis->setGeometry(QRect(380, 130, 151, 31));
        regis->setFont(font1);
        regis->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        regis->setEditable(false);
        regis->setPlaceholderText(QString::fromUtf8(""));
        regis->setDuplicatesEnabled(false);
        regis->setFrame(false);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 71, 16));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 30, 81, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 30, 71, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 61, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 110, 151, 16));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        price = new QComboBox(groupBox);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(180, 130, 141, 31));
        price->setFont(font1);
        price->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        price->setEditable(false);
        price->setPlaceholderText(QString::fromUtf8(""));
        price->setDuplicatesEnabled(false);
        price->setFrame(false);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 110, 71, 16));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        marque = new QComboBox(groupBox);
        marque->setObjectName(QString::fromUtf8("marque"));
        marque->setGeometry(QRect(10, 50, 141, 31));
        marque->setFont(font1);
        marque->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        marque->setEditable(false);
        marque->setPlaceholderText(QString::fromUtf8(""));
        marque->setDuplicatesEnabled(false);
        marque->setFrame(false);
        tableView = new QTableView(remove);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(210, 180, 591, 341));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font2.setPointSize(12);
        tableView->setFont(font2);
        tableView->setFrameShape(QFrame::Box);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        label_7 = new QLabel(remove);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(200, 0, 621, 561));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(remove);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 140, 201, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(remove);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 201, 691));
        label_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 85, 255);"));
        label_10 = new QLabel(remove);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 10, 131, 121));
        label_10->setStyleSheet(QString::fromUtf8("border-radius:60px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:3px black solid;"));
        label_10->setFrameShape(QFrame::Box);
        label_10->setFrameShadow(QFrame::Sunken);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/build/fichier/icons8_person_128px_1.png")));
        home = new QPushButton(remove);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(50, 200, 101, 41));
        home->setFont(font1);
        home->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/fichier/icons8_home_32px.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon);
        home->setIconSize(QSize(30, 30));
        addr = new QPushButton(remove);
        addr->setObjectName(QString::fromUtf8("addr"));
        addr->setGeometry(QRect(50, 320, 101, 41));
        addr->setFont(font1);
        addr->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/fichier/icons8_add_100px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        addr->setIcon(icon1);
        addr->setIconSize(QSize(30, 30));
        editr = new QPushButton(remove);
        editr->setObjectName(QString::fromUtf8("editr"));
        editr->setGeometry(QRect(10, 390, 171, 41));
        editr->setFont(font1);
        editr->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0, 0, 127,0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/fichier/icons8_edit_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        editr->setIcon(icon2);
        editr->setIconSize(QSize(30, 30));
        history = new QPushButton(remove);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(50, 260, 101, 41));
        history->setFont(font1);
        history->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:20px;\n"
"background-color: rgba(0, 0, 127,0.2);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build/fichier/icons8_activity_history_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        history->setIcon(icon3);
        history->setIconSize(QSize(30, 30));
        logout = new QPushButton(remove);
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
        label_9->raise();
        label_7->raise();
        groupBox->raise();
        tableView->raise();
        label_8->raise();
        label_10->raise();
        home->raise();
        addr->raise();
        editr->raise();
        history->raise();
        logout->raise();

        retranslateUi(remove);

        QMetaObject::connectSlotsByName(remove);
    } // setupUi

    void retranslateUi(QWidget *remove)
    {
        remove->setWindowTitle(QCoreApplication::translate("remove", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("remove", "Filter", nullptr));
        label->setText(QCoreApplication::translate("remove", "Id:", nullptr));
        label_2->setText(QCoreApplication::translate("remove", "Customer :", nullptr));
        label_3->setText(QCoreApplication::translate("remove", "Email :", nullptr));
        label_4->setText(QCoreApplication::translate("remove", "Start :", nullptr));
        label_5->setText(QCoreApplication::translate("remove", "Start :", nullptr));
        label_6->setText(QCoreApplication::translate("remove", "End :", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("remove", "Votre nom\n"
"@Admin", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        home->setText(QCoreApplication::translate("remove", "Home", nullptr));
        addr->setText(QCoreApplication::translate("remove", "Add Car", nullptr));
        editr->setText(QCoreApplication::translate("remove", "   Edit or \n"
"Remove Car", nullptr));
        history->setText(QCoreApplication::translate("remove", "History", nullptr));
        logout->setText(QCoreApplication::translate("remove", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove: public Ui_remove {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIQUE_H
