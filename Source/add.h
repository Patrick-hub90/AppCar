#ifndef ADD_H
#define ADD_H

#include <QtWidgets>
#include <QtSql>

namespace Ui {
class add;
}

class add : public QWidget
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = nullptr);
    ~add();
public slots:
    void addCar();
    void select_file();
    void checking();
    void loadImage();
    void renitialising();
    void on_logout_clicked();
signals:
    void addi();
    void history();
    void editt();
    void retour();
    void homed();
    void logoute();
private:
    Ui::add *ui;
    QSqlDatabase db;
};

#endif // ADD_H
