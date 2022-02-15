#ifndef INFO_H
#define INFO_H

#include <QtWidgets>
#include <QtSql>

namespace Ui {
class info;
}

class info : public QWidget
{
    Q_OBJECT

public:
    explicit info(QString mark,QString price,QString modele,QString matricule,QString kilometrage,QString etat,QString filename,int qt,QWidget *parent = nullptr);
    ~info();
signals:
    void car(QString);
    void location(QStringList);
    void inf(int);
public slots:
    void add();
     void locate();
private:
    Ui::info *ui;
    QSqlDatabase db;
    QString state;
    int qte;
};

#endif // INFO_H
