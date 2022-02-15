#ifndef VOITURE_H
#define VOITURE_H

#include <QtWidgets>

namespace Ui {
class voiture;
}

class voiture : public QWidget
{
    Q_OBJECT

public:
    explicit voiture(QString mark,QString price,QString modele,QString matricule,QString kilometrage,QString etat,QString filename,QWidget *parent = nullptr);
    Ui::voiture *ui;
    ~voiture();
public slots:
    void showFeatures();
    void showPageLocation();
    void location(QStringList list);
    void add(QString nom);
    void compte(int nb);
signals:
    void information(QStringList);
    void added(QString nam);

private:
    QString m_mark;
    QString m_price;
    QString m_modele;
    QString m_matricule;
    QString m_kilometrage;
    QString m_etat;
    QString m_filename;
    QStringList liste;
    int nombre;
};

#endif // VOITURE_H
