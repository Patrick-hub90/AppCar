#include "info.h"
#include "ui_info.h"

info::info(QString mark,QString price,QString modele,QString matricule,QString kilometrage,QString etat,QString filename,int qt,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    ui->marque->setText(mark);
    ui->modele->setText(modele);
    ui->kilo_2->setText(kilometrage);
    ui->etat_2->setText(etat);
    ui->matricule->setText(matricule);
    QPixmap pixmap(filename);
    pixmap.scaled(ui->photo->width(),ui->photo->height(),Qt::KeepAspectRatio);
    ui->photo->setPixmap(pixmap);
    ui->photo->setScaledContents(true);
    ui->pric->setText(price);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../build/Users.db");
    db.open();
    QSqlQueryModel model;
    model.setQuery(QString("select * from car where Marque='%1' and Model='%2' and Etat='Disponible'").arg(ui->marque->text()).arg(ui->modele->text()));
    if(model.rowCount() == 0)
        state = "Indisponible";
    connect(ui->locate,&QPushButton::clicked,this,&info::locate);
    connect(ui->collection,&QPushButton::clicked,this,&info::add);
    qte=qt;
}

info::~info()
{
    delete ui;
}
void info::add()
{
    QSqlQueryModel model;
    model.setQuery(QString("select * from car where Marque='%1' and Model='%2' and Etat='Disponible'").arg(ui->marque->text()).arg(ui->modele->text()));
    if(model.rowCount() == 0)
        state = "Indisponible";
    bool ok = false;
    int nombre = QInputDialog::getInt(this,tr("Quantite"),"Qte :",0,qte,model.rowCount());
    QString commande;
    commande=ui->marque->text()+" "+ui->modele->text()+"#"+tr("%1#%2").arg(nombre).arg(ui->pric->text(),ok);
    emit car(commande);
    emit inf(nombre);
    if(!ok)
    {
        this->hide();
    }
}
void info::locate()
{
    QStringList liste;
    liste<<ui->marque->text()+" "+ui->modele->text()+"#"+"1"+"#"+ui->pric->text();
    emit location(liste);
    this->hide();
}
