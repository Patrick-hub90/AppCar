#ifndef HISTORIQUE_H
#define HISTORIQUE_H

#include <QtWidgets>
#include <QtSql>
namespace Ui {
class remove;
}

class remove : public QWidget
{
    Q_OBJECT

public:
    explicit remove(QWidget *parent = nullptr);
    ~remove();
public slots:
    void checking_registry();
    void on_logout_clicked();
signals:
    void addi();
    void history();
    void editt();
    void retour();
    void homed();
    void logoute();
private:
    Ui::remove *ui;
    QSqlDatabase db;
};

#endif // HISTORIQUE_H
