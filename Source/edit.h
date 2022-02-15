#ifndef EDIT_H
#define EDIT_H

#include <QtWidgets>
#include <QtSql>
namespace Ui {
class edit;
}

class edit : public QWidget
{
    Q_OBJECT

public:
    explicit edit(QString model,QWidget *parent = nullptr);
    ~edit();
public slots:
    void editable();
signals:
    void effectue();
private:
    Ui::edit *ui;
    QSqlDatabase db;
    QString modeled;
};

#endif // EDIT_H
