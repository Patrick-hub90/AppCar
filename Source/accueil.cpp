#include "accueil.h"

#include "voiture.h"
#include "ui_accueil.h"
#include "ui_voiture.h"

Accueil::Accueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Accueil)
{
    ui->setupUi(this);
    QWidget* contenu =  new QWidget;
    grid = new QGridLayout;
    grid->setSpacing(10);
    QLineEdit line;
    contenu->setLayout(grid);
    ui->scrollArea->setWidget(contenu);
    this->setFixedSize(812,540);
    showCar();
    connect(ui->lineEdit,&QLineEdit::textEdited,this,&Accueil::showCar);

    connect(ui->addr,&QPushButton::clicked,this,&Accueil::addi);
    connect(ui->history,&QPushButton::clicked,this,&Accueil::history);
    connect(ui->editr,&QPushButton::clicked,this,&Accueil::editt);
    connect(ui->logout,&QPushButton::clicked,this,&Accueil::retour);
    connect(ui->home,&QPushButton::clicked,this,&Accueil::homed);



    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->panier->setText(QString("%1").arg(liste.size()));

}

Accueil::~Accueil()
{
    delete ui;
}
void Accueil::showCar()
{
    QWidget* contenu =  new QWidget;
    grid = new QGridLayout;
    grid->setSpacing(10);
    contenu->setLayout(grid);
    ui->scrollArea->setWidget(contenu);
     db = QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("../build/"
                        "Users.db");
     if(db.open())
        // qDebug("oki");
     QSqlQuery query("",db);
     //if(query.exec(QString("insert into Car values ('%1','%2','%3','%4','%5','%6','%7')").arg(412204).arg("nn cxvds").arg("fdfsre").arg("fdfsre").arg("fdfsre").arg("fdfsre").arg("fdfsre")))

     QStringList liste = compare();
     QSqlQueryModel model;
     model.setQuery("select * from Car",db);
     int row = 0;
     int columns = 0;
     for(int i(0);i<model.rowCount();++i)
     {
         QString m_mark;
         QString m_price;
         QString m_modele;
         QString m_matricule;
         QString m_kilometrage;
         QString m_etat;
         QString m_filename;
         m_modele =model.record(i).value("Model").toString();
         if(liste.indexOf(m_modele) != -1)
         {
             m_matricule = model.record(i).value("Matricule").toString();
             m_mark = model.record(i).value("Marque").toString();
             m_modele = model.record(i).value("Model").toString();
             m_kilometrage = model.record(i).value("Kilometrage").toString();
             m_etat = model.record(i).value("Etat").toString();
             m_price = model.record(i).value("Price").toString();
             m_filename =  model.record(i).value("Filename").toString();
             voiture* car = new voiture(m_mark,m_price,m_modele,m_matricule,m_kilometrage,m_etat,m_filename,this);
             connect(car,&voiture::information,this,&Accueil::infod);
             connect(car,&voiture::added,this,&Accueil::adding);
             car->setFixedSize(217,260);
             grid->addWidget(car,columns,row,1,1);
         }
         row++;
         if(row ==4)
         {
             row = 0;
             columns++;
         }
     }
     db.close();
}
QStringList Accueil::compare()
{
    QList<QString> liste;
    QSqlQueryModel model;
    model.setQuery("select Marque,Model from Car",db);
    for(int i=0;i<model.rowCount();i++)
    {
        QString marque("");
        QString modele;
        marque+= model.record(i).value("Marque").toString();
        modele= model.record(i).value("Model").toString();
        marque+=modele;
        if (verify(ui->lineEdit->text(),marque))
        {
            liste.append(modele);
        }
    }
    return liste;
    ui->label_3->setPixmap(QPixmap(""));
}
bool Accueil::verify(QString chaine1, QString chaine2)
{
    for(int i=0;i<chaine1.size();++i)
    {
        if(chaine1[i]!=chaine2[i])
            return false;
    }
    return true;
}
void Accueil::adding(QString chaine)
{
   QStringList list = chaine.split("#");
   if(listed.indexOf(list[0])==-1)
   {
       listed<<list[0];
       liste<<chaine;
       ui->panier->setText(QString("%1").arg(liste.size()));
   }
   else
   {
      liste[listed.indexOf(list[0])] = chaine;
    }
}
void Accueil::location()
{

}
void Accueil::on_panier_clicked()
{
    emit infod(liste);
    liste =QStringList();
    ui->panier->setText(QString("%1").arg(liste.size()));
}
void Accueil::on_logout_clicked()
{
    emit logoute();
    qDebug("d");
}
