#ifndef SIGNUP_H
#define SIGNUP_H
#include <QSqlDatabase>
#include <QtWidgets>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtSql>
#include "ui_signup.h"
namespace Ui {
class signup;
}

class signup : public QWidget,private Ui::signup
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();
    void showConnexion();
    void Renitialising();
public slots:
    bool checking();
    bool checkingName(QString name);
    void AddToDataBase();
signals:
    void valid();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
