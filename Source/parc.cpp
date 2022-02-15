#include "parc.h"

parc::parc(QWidget * parent):QWidget(parent)
{
    setupUi(this);
    m_signup = new signup(this);
    m_signup->setFixedSize(882,540);
    m_ajout = new add;
    m_Login = new login;
    m_affiche = new class remove;
    m_accueil = new Accueil;
    m_info = new transaction;
    stackwidget = new QStackedWidget(this);

    stackwidget->addWidget(m_Login);
    stackwidget->addWidget(m_signup);
    stackwidget->addWidget(m_accueil);
    stackwidget->addWidget(m_info);
    stackwidget->addWidget(m_ajout);
    stackwidget->addWidget(m_accueil);
    stackwidget->addWidget(m_affiche);
    stackwidget->setCurrentWidget(m_Login);

    auto vbox = new QVBoxLayout;
    vbox->addWidget(stackwidget);
    this->setFixedSize(812,540);
    this->setLayout(vbox);


    connect(m_signup,&signup::valid,this,&parc::Login);

    connect(m_Login,&login::validation,this,&parc::sign);
    connect(m_Login,&login::connected,this,&parc::accueil);
    connect(m_ajout,&add::addi,this,&parc::adding);
    connect(m_ajout,&add::editt,this,&parc::info);
    connect(m_ajout,&add::history,this,&parc::affiche);
    connect(m_ajout,&add::retour,this,&parc::Login);
    connect(m_ajout,&add::homed,this,&parc::accueil);



    connect(m_accueil,&Accueil::addi,this,&parc::adding);
    connect(m_accueil,&Accueil::editt,this,&parc::info);
    connect(m_accueil,&Accueil::history,this,&parc::affiche);
    connect(m_accueil,&Accueil::retour,this,&parc::Login);
    connect(m_accueil,&Accueil::infod,this,&parc::locate);

    connect(m_accueil,&Accueil::retour,this,&parc::etr);
    connect(m_accueil,&Accueil::logoute,this,&parc::Login);
    connect(m_ajout,&add::logoute,this,&parc::Login);
    connect(m_affiche,&remove::addi,this,&parc::adding);
    connect(m_affiche,&remove::editt,this,&parc::info);
    connect(m_affiche,&remove::history,this,&parc::affiche);
    connect(m_affiche,&remove::retour,this,&parc::Login);
    connect(m_affiche,&remove::homed,this,&parc::accueil);

    connect(m_affiche,&remove::logoute,this,&parc::etr);

    connect(m_info,&transaction::addi,this,&parc::adding);
    connect(m_info,&transaction::history,this,&parc::affiche);
    connect(m_info,&transaction::retour,this,&parc::Login);
    connect(m_info,&transaction::homed,this,&parc::accueil);

}

parc::~parc()
{
}
void parc::Login()
{
    stackwidget->setCurrentWidget(m_Login);
}
void parc::sign()
{
        stackwidget->setCurrentWidget(m_signup);
}
void parc::affiche()
{
    stackwidget->setCurrentWidget(m_affiche);
}
void parc::accueil()
{
    stackwidget->setCurrentWidget(m_accueil);
}
void parc::adding()
{

    stackwidget->setCurrentWidget(m_ajout);
}
void parc::info()
{
    stackwidget->setCurrentWidget(m_info);
}
void parc::eddition()
{

}
void parc::locate(QStringList listed)
{
    m_locate = new Form(listed);
    stackwidget->addWidget(m_locate);
    stackwidget->setCurrentWidget(m_locate);
    connect(m_locate,&Form::addi,this,&parc::adding);
    connect(m_locate,&Form::history,this,&parc::affiche);
    connect(m_locate,&Form::retour,this,&parc::adding);
    connect(m_locate,&Form::homed,this,&parc::accueil);
}
void parc::etr()
{
       login* de = new login;
       stackwidget->addWidget(de);
      stackwidget->setCurrentWidget(de);

}








