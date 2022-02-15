#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QtWidgets>
#include <QtSql>
#include "edit.h"
namespace Ui {
class transaction;
}

class transaction : public QWidget
{
    Q_OBJECT

public:
    explicit transaction(QWidget *parent = nullptr);
    ~transaction();
public slots:
    void showTable();
    void editabled();
    void removed();
    void checking();
    void on_logout_clicked();
signals:
    void addi();
    void history();
    void editt();
    void retour();
    void homed();
    void logoute();

private:
    Ui::transaction *ui;
    QSqlDatabase db;
    edit* widget;
    QString filtre;
};

#endif // TRANSACTION_H
