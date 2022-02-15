#include "transaction.h"
#include "ui_transaction.h"
#include "edit.h"
transaction::transaction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transaction)
{
    ui->setupUi(this);
    connect(ui->marque,&QLineEdit::textChanged,this,&transaction::showTable);
    connect(ui->model,&QLineEdit::textChanged,this,&transaction::showTable);
    connect(ui->price,&QLineEdit::textChanged,this,&transaction::showTable);
    connect(ui->matricule,&QLineEdit::textChanged,this,&transaction::showTable);
    connect(ui->kilo,&QLineEdit::textChanged,this,&transaction::showTable);
    connect(ui->state,&QLineEdit::textChanged,this,&transaction::showTable);
    connect(ui->addb,&QPushButton::clicked,this,&transaction::editabled);
    connect(ui->addb_2,&QPushButton::clicked,this,&transaction::removed);

    connect(ui->marque,&QLineEdit::textChanged,this,&transaction::checking);
    connect(ui->model,&QLineEdit::textChanged,this,&transaction::checking);
    connect(ui->price,&QLineEdit::textChanged,this,&transaction::checking);
    connect(ui->matricule,&QLineEdit::textChanged,this,&transaction::checking);
    connect(ui->kilo,&QLineEdit::textChanged,this,&transaction::checking);
    connect(ui->state,&QLineEdit::textChanged,this,&transaction::checking);

    connect(ui->addr,&QPushButton::clicked,this,&transaction::addi);
    connect(ui->history,&QPushButton::clicked,this,&transaction::history);
    connect(ui->editr,&QPushButton::clicked,this,&transaction::editt);
    connect(ui->logout,&QPushButton::clicked,this,&transaction::retour);
    connect(ui->home,&QPushButton::clicked,this,&transaction::homed);

    ui->marque->setText("h");
    ui->marque->setText("");
  //ui->addb_2->setEnabled(false);
  this->setFixedSize(812,540);
  ui->addb_2->setStyleSheet("background-color:gray;color:black;border-radius:10px");

}

transaction::~transaction()
{
    delete ui;
}
void transaction::showTable()
{
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
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../build/Users.db");
    db.open();
     filtre = filter.join(" and ");
    qDebug()<<filtre;
    QSqlTableModel* model = new QSqlTableModel(this,db);
    model->setTable("car");
    model->setFilter(filtre);
    model->select();
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(model->fieldIndex("Filename"),true);

}
void transaction::removed()
{
    ui->marque->setText("h");
    ui->marque->setText("");
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
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../build/Users.db");
    db.open();
     filtre = filter.join(" and ");
    qDebug()<<filtre;
    QSqlQuery query("",db);
    if(filtre.isEmpty())
        query.prepare(QString("delete from car").arg(filtre));
    else
        query.prepare(QString("delete from car where %1").arg(filtre));
    query.exec();
    qDebug()<<query.lastError();
    ui->marque->setText("h");
    ui->marque->setText("");
}
void transaction::checking()
{
    bool check = false;
    if(!ui->marque->text().isEmpty())
        check =true;
    else if(!ui->model->text().isEmpty())
        check =true;
    else if(!ui->kilo->text().isEmpty())
        check =true;
    else if(!ui->price->text().isEmpty())
        check =true;
    else if(!ui->matricule->text().isEmpty())
        check =true;
    else if(!ui->state->text().isEmpty())
        check =true;
    if(check==false)
       {
        ui->addb_2->setEnabled(true);
    ui->addb_2->setStyleSheet("background-color:blue;color:white;border-radius:10px");
    }
    else if(check == true)
    {
        ui->addb_2->setEnabled(false);
        ui->addb_2->setStyleSheet("background-color:gray;color:black;border-radius:10px");
    }
}
void transaction::editabled()
{
   widget = new edit(filtre);
   widget->show();
   connect(widget,&edit::effectue,this,&transaction::showTable);
}
void transaction::on_logout_clicked()
{
    emit logoute();
}
