#include "edit.h"
#include "ui_edit.h"

edit::edit(QString modele,QWidget *parent) :
    QWidget(parent),ui(new Ui::edit),modeled(modele)
{
    ui->setupUi(this);
    connect(ui->addb,&QPushButton::clicked,this,&edit::editable);
}

edit::~edit()
{
    delete ui;
}

void edit::editable()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../build/Users.db");
    db.open();
    QStringList filter;
    if(!ui->marque->text().isEmpty())
        filter<<QString("Marque='%1'").arg(ui->marque->text());
    if(!ui->model->text().isEmpty())
        filter<<QString("Model='%1'").arg(ui->model->text());
    if(!ui->kilo->text().isEmpty())
        filter<<QString("Kilometrage='%1'").arg(ui->kilo->text());
    if(!ui->price->text().isEmpty())
        filter<<QString("Price='%1'").arg(ui->price->text());
    if(!ui->matricule->text().isEmpty())
        filter<<QString("Matricule='%1'").arg(ui->matricule->text());
    if(!ui->state->text().isEmpty())
        filter<<QString("Etat='%1'").arg(ui->state->text());
    QString filtre = filter.join(" and ");
    QSqlQuery query("",db);
    if(modeled.isEmpty())
        query.prepare(QString("update car set %1").arg(filtre));
     else
        query.prepare(QString("update car set %1 where %2 ").arg(filtre).arg(modeled));
     query.exec();
     qDebug()<<filtre<<modeled<<query.lastError();
     bool ok = false;
     QMessageBox::information(this,"Registry sucessful","<strong>Registry sucessful</strong>",ok);
     if(!ok)
     {
         this->hide();
         emit effectue();
     }

}
