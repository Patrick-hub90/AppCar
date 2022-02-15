#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setFixedSize(812,540);
    connect(ui->sign,SIGNAL(clicked()),this,SLOT(check()));
    connect(ui->sign_2,&QPushButton::clicked,this,&login::validation);
}

login::~login()
{
    delete ui;
}
void login::check()
{
    if(Checking(ui->lpseudo->text(),ui->lpassword->text()))
    {

        emit connected();
    }
    else
    {
        ui->passw->setStyleSheet("color:red");
        ui->passw->setText("Password or Username invalid");
    }

}
bool login::Checking(QString name,QString Password)
{
    QSqlDatabase::database("db",false).close();
    QSqlDatabase::removeDatabase("db");
    QSqlDatabase base=QSqlDatabase::addDatabase("QSQLITE","db");
    base.setDatabaseName("../build/Users.db");
    if(base.open())
    {
        QSqlQueryModel model;
        model.setQuery("SELECT* FROM Users",base);
        qDebug("jhhj");
        for (int i(0);i<model.rowCount();++i)
        {
            qDebug()<<model.record(i).value("Username").toString();
            if(name == model.record(i).value("Username").toString())
            {
                if(Password == model.record(i).value("Password").toString())
                    return true;
            }
        }

        return false;
    }
        return false;
}

