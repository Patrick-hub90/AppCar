#ifndef LOCATE_H
#define LOCATE_H

#include <QtWidgets>
#include<QtSql>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QStringList liste,QWidget *parent = nullptr);
    ~Form();
public slots:
    void setPrix();
    void setQte();
    void calculPrix();
    void Location();
    bool checked();
    void on_logout_clicked();
signals:
    void addi();
    void history();
    void editt();
    void retour();
    void homed();
    void logoute();
private:
    Ui::Form *ui;
    QMap<QString,QList<int>> map;
    QSqlDatabase db;
};

#endif // LOCATE_H
