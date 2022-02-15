#ifndef LOGIN_H
#define LOGIN_H
#include <QSqlDatabase>
#include <QtSql>
#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
public slots:
    void check();
    bool Checking(QString name,QString Password);
signals:
    void  validation();
    void connected();
private:
    Ui::login *ui;
    QSqlDatabase* db;
};

#endif // LOGIN_H
