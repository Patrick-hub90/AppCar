#include "signup.h"
#include "ui_signup.h"

signup::signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->masculin->setChecked(true);
    ui->password->setEchoMode(QLineEdit::Password);
    ui->confirm->setEchoMode(QLineEdit::Password);
    checking();
    QPixmap pixmap("../build/fichier/Fichier1.png");
    ui->label_10->setScaledContents(true);
    ui->label_10->setPixmap(pixmap);
    connect(ui->username,&QLineEdit::textEdited,this,&signup::checking);
    connect(ui->email,&QLineEdit::textEdited,this,&signup::checking);
    connect(ui->password,&QLineEdit::textEdited,this,&signup::checking);
    connect(ui->confirm,&QLineEdit::textEdited,this,&signup::checking);
    connect(ui->sign,&QPushButton::clicked,this,&signup::AddToDataBase);
    connect(ui->login,&QPushButton::clicked,this,&signup::valid);
this->setFixedSize(812,540);
}

signup::~signup()
{
    delete ui;
}
bool signup::checking()
{
    bool check = true;
    if(ui->username->text().isEmpty())
    {
        ui->user->setStyleSheet("color: red;");
        ui->user->setText(tr("**Field required"));
        check = false;
    }
    else if(!ui->username->text().isEmpty())
    {
        if(checkingName(ui->username->text()))
        {
            ui->user->setStyleSheet("color: red;");
            ui->user->setText(tr("**Username already exists"));
            check = false;
        }
        else
        {
            ui->user->setStyleSheet("color: green;");
            ui->user->setText(tr(""));
        }
    }

    if(ui->email->text().isEmpty())
    {
        ui->eml->setStyleSheet("color: red;");
        ui->eml->setText("**Field required");
        check = false;
    }
    else if(!ui->email->text().isEmpty())
    {
        if(QRegularExpression("^[A-Za-z0-9]{1,}@(gmail|outlook|yahoo).(com|fr)$").match(ui->email->text()).hasMatch())
        {
            ui->eml->setStyleSheet("color: green;");
            ui->eml->setText("Mail valid");

        }
        else if(!QRegularExpression("^[A-Za-z0-9]{1,}@(gmail|outlook|yahoo).(com|fr)$").match(ui->email->text()).hasMatch())
        {
            ui->eml->setStyleSheet("color: red;");
            ui->eml->setText("**Mail Invalid");
            check = false;
        }
    }
     if(ui->password->text().isEmpty())
    {
        ui->pass->setStyleSheet("color: red;");
        ui->pass->setText("**Field required");
        check = false;
    }
    else if(!ui->password->text().isEmpty())
    {
         if(ui->password->text().size()<9)
         {
             ui->pass->setStyleSheet("color: red;");
             ui->pass->setText("**More than 8 characterers");
             check = false;
         }
        ui->pass->setStyleSheet("color: green;");
        ui->pass->setText("");
    }
    if(ui->confirm->text().isEmpty())
    {
        ui->conf->setStyleSheet("color: red;");
        ui->conf->setText("**Field required");
        check = false;
    }
    else if(!ui->confirm->text().isEmpty())
    {
        if(ui->confirm->text() != ui->password->text())
        {
            ui->conf->setStyleSheet("color: red;");
            ui->conf->setText("**Don't match");
            check = false;
        }
        else
        {
            ui->conf->setStyleSheet("color: green;");
            ui->conf->setText("Match");
        }

    }
    return check;
}
void signup::Renitialising()
{
    ui->username->setText("");
    ui->email->setText("");
    ui->password->setText("");
    ui->confirm->setText("");
    ui->masculin->setChecked(true);
    ui->eml->setText("");
    ui->conf->setText("");
}
void signup::AddToDataBase()
{
    if(checking())
    {
        QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("../build/Users.db");
        if(db.open())
        {
            QSqlQuery query(db);

            query.exec(QString("insert into Users values ('%1','%2','%3','%4')").arg(ui->username->text()).arg(ui->email->text()).arg(ui->masculin->isChecked()?"Masculin":"Feminin").arg(ui->password->text()));
            QSqlQueryModel model;
            model.setQuery("select * from Users");
            Renitialising();
            emit valid();
        }
        else
          {
            qDebug("Not open");
        }
    }
    else {
        checking();

        QMessageBox::critical(this,"Error","Please, enter correctly your information.");

    }
}
bool signup::checkingName(QString name)
{
    QSqlDatabase::database("db",false).close();
    QSqlDatabase::removeDatabase("db");
    QSqlDatabase base=QSqlDatabase::addDatabase("QSQLITE","db");
    base.setDatabaseName("../build/Users.db");
    if(base.open())
    {
        QSqlQueryModel model;
        model.setQuery("SELECT Username FROM Users",base);
        for (int i(0);i<model.rowCount();++i)
        {
            if(name == model.record(i).value("Username").toString())
            {
                    return true;
            }
        }
        return false;
    }
    else
    {
        qDebug("Error");
    }
        return false;
}
