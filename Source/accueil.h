#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QtWidgets>
#include <QtSql>

namespace Ui {
class Accueil;
}

class Accueil : public QWidget
{
    Q_OBJECT

public:
    explicit Accueil(QWidget *parent = nullptr);
    ~Accueil();
signals:
    void addi();
    void history();
    void editt();
    void retour();
    void homed();
    void logoute();
    void infod(QStringList liste);
public slots:
    void showCar();
    QStringList compare();
    bool verify(QString chaine1, QString chaine2);
    void location();
    void adding(QString chaine);
    void on_panier_clicked();
    void on_logout_clicked();

private:
    Ui::Accueil *ui;
    QSqlDatabase db;
    QGridLayout* grid;
    QStringList liste;
    QStringList listed;
};

#endif // ACCUEIL_H
