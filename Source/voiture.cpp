#include "voiture.h"
#include "info.h"
#include "ui_voiture.h"

voiture::voiture(QString mark,QString price,QString modele,QString matricule,QString kilometrage,QString etat,QString filename,QWidget *parent) :
    QWidget(parent),ui(new Ui::voiture),m_mark(mark),m_price(price),m_modele(modele),m_matricule(matricule),m_kilometrage(kilometrage),m_etat(etat)
{
    ui->setupUi(this);
    ui->marque->setText(m_mark);
    ui->marque->setStyleSheet("text-align: left");
    ui->prix->setText(m_price+"$");
    m_filename = filename;
    QPixmap pixmap(filename);
    pixmap.scaled(ui->image->width(),ui->image->height(),Qt::KeepAspectRatio);
    ui->image->setScaledContents(true);

    ui->image->setPixmap(pixmap);
    connect(ui->detail,&QPushButton::clicked,this,&voiture::showFeatures);
    connect(ui->detail,&QPushButton::clicked,this,&voiture::showPageLocation);

    nombre = 0;
}

voiture::~voiture()
{
    delete ui;
}
void voiture::showFeatures()
{
    info* page = new info(m_mark,m_price,m_modele,m_matricule,m_kilometrage,m_etat,m_filename,nombre);
    page->show();
    connect(page,&info::car,this,&voiture::add);
    connect(page,&info::location,this,&voiture::location);
    connect(page,&info::inf,this,&voiture::compte);

}
void voiture::location(QStringList list)
{
    liste=list;
    emit information(liste);
}
void voiture::compte(int nb)
{
    nombre=nb;
}
void voiture::add(QString nom)
{
    emit added(nom);
}
void voiture::showPageLocation()
{
    QString info("");
    info+="<strong>Mark:</strong> "+m_mark+"\n";
    info+="<strong>Modele:</strong> "+m_modele+"\n";
    info+="<strong>Matricule:</strong> "+m_matricule+"\n";
    info+="<strong>Kilometrage:</strong> "+m_kilometrage+"\n";
    info+="<strong>Etat:</strong> "+m_etat+"\n";
    info+="<strong>Price:</strong> "+m_price+"\n";
   // QMessageBox::information(this,"Features",info);
}
