#ifndef PARC_H
#define PARC_H
#include "signup.h"
#include "login.h"
#include <QtWidgets>
#include "signup.h"
#include "info.h"
#include "accueil.h"
#include "historique.h"
#include "transaction.h"
#include "locate.h"
#include "add.h"
#include "ui_parc.h"

class parc : public QWidget,private Ui::parc
{
    Q_OBJECT
public:
    parc(QWidget *parent = nullptr);
    ~parc();
public slots:
    void Login();
    void sign();
    void affiche();
    void accueil();
    void adding();
    void info();
    void eddition();
    void locate(QStringList listed);
    void etr();
private:
    login* m_Login;
    signup* m_signup;
    class remove* m_affiche;
    Accueil* m_accueil;
    transaction* m_info;
    add* m_ajout;
    edit* editer;
    Form* m_locate;
    QStackedWidget* stackwidget;
};
#endif // PARC_H

