/********************************************************************************
** Form generated from reading UI file 'parc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARC_H
#define UI_PARC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parc
{
public:
    QLabel *label_2;

    void setupUi(QWidget *parc)
    {
        if (parc->objectName().isEmpty())
            parc->setObjectName(QString::fromUtf8("parc"));
        parc->resize(812, 540);
        label_2 = new QLabel(parc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-30, -60, 861, 621));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(parc);

        QMetaObject::connectSlotsByName(parc);
    } // setupUi

    void retranslateUi(QWidget *parc)
    {
        parc->setWindowTitle(QCoreApplication::translate("parc", "Form", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class parc: public Ui_parc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARC_H
