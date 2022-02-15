#include "add.h"
#include "ui_add.h"

add::add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
    checking();
    this->setFixedSize(812,540);
    connect(ui->marque,&QLineEdit::textEdited,this,&add::checking);
    connect(ui->price,&QLineEdit::textEdited,this,&add::checking);
    connect(ui->kilo,&QLineEdit::textEdited,this,&add::checking);
    connect(ui->model,&QLineEdit::textEdited,this,&add::checking);
    connect(ui->line,&QLineEdit::textEdited,this,&add::checking);
    connect(ui->matricule,&QLineEdit::textEdited,this,&add::checking);
    connect(ui->select,&QPushButton::clicked,this,&add::select_file);
    connect(ui->line,&QLineEdit::textChanged,this,&add::loadImage);
    connect(ui->line,&QLineEdit::textChanged,this,&add::checking);
    connect(ui->addb,&QPushButton::clicked,this,&add::addCar);

    connect(ui->addr,&QPushButton::clicked,this,&add::addi);
    connect(ui->history,&QPushButton::clicked,this,&add::history);
    connect(ui->editr,&QPushButton::clicked,this,&add::editt);
    connect(ui->logout,&QPushButton::clicked,this,&add::retour);
    connect(ui->home,&QPushButton::clicked,this,&add::homed);
}

add::~add()
{
    delete ui;
}
void add::addCar()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../build/Users.db");
    db.open();
    QSqlQuery query("",db);
    QFile(ui->line->text()).close();
    if(!QFile::copy(ui->line->text(),"../build/fichier/"+QFileInfo(ui->line->text()).fileName()))
        qDebug("open");
    QString etat("Disponible");
    QString fileName = "../build/fichier/"+QFileInfo(ui->line->text()).fileName();
    query.prepare(QString("insert into car values('%1','%2','%3','%4','%5','%6','%7')").arg(ui->matricule->text()).arg(ui->marque->text()).arg(ui->model->text()).arg(ui->kilo->text()).arg(etat).arg(ui->price->text()).arg(fileName));
    if(query.exec())
    {
        QMessageBox::information(this,"Success","Registry car with successful");
        renitialising();
    }
    else
    {
        QMessageBox::critical(this,"Error",query.lastError().text());
    }
    db.close();
}
void add::renitialising()
{
    ui->marque->setText("");
    ui->model->setText("");
    ui->line->setText("");
    ui->price->setText("");
    ui->kilo->setText("");
    ui->image->setPixmap(QPixmap());
    ui->matricule->setText("");
}
void add::loadImage()
{
    if(QFile(ui->line->text()).exists())
    {
        QPixmap pixmap(ui->line->text());
        ui->image->setPixmap(pixmap);
        ui->image->setScaledContents(true);
    }
    else
    {
        ui->image->setPixmap(QPixmap());
    }
}
void add::select_file()
{
    ui->line->setText(QFileDialog::getOpenFileName(this,"Select FIle","","Image Files (*.png *.jpg *.bmp)"));
}
void add::checking()
{
    bool verify = true;
    if(ui->marque->text().isEmpty())
    {
      verify = false;
      ui->addb->setEnabled(false);
    }
    if(ui->kilo->text().isEmpty())
    {
        verify = false;
        ui->addb->setEnabled(false);
    }
    if(ui->model->text().isEmpty())
    {
        verify = false;
        ui->addb->setEnabled(false);
    }
    if(ui->matricule->text().isEmpty())
    {
        verify = false;
        ui->addb->setEnabled(false);
    }
    if(ui->price->text().isEmpty())
    {
        verify = false;
        ui->addb->setEnabled(false);
        ui->kilo_2->setText("");
    }
    if(!ui->price->text().isEmpty())
    {
        if(!QRegularExpression("^[0-9]+$").match(ui->price->text()).hasMatch())
        {
            verify = false;
            ui->kilo_2->setStyleSheet("color:red");
            ui->kilo_2->setText("**Should be only Numbers");
            ui->addb->setEnabled(false);
        }
        else {
             ui->kilo_2->setText("");
        }

    }
    if(ui->line->text().isEmpty())
    {
        verify = false;
        ui->addb->setEnabled(false);
    }
    if(verify)
    {
        ui->addb->setEnabled(true);
        ui->addb->setStyleSheet("background-color:blue;color:white;border-radius:5px;");
    }
    else if(!verify)
    {
        ui->addb->setStyleSheet("background-color:gray;color:black;border-radius:5px;");
    }
}
void add::on_logout_clicked()
{
    emit logoute();
}
