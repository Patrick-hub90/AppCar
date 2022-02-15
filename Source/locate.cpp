#include "locate.h"
#include "ui_locate.h"

Form::Form(QStringList liste,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    this->setFixedSize(812,540);
    qDebug()<<liste;
    connect(ui->car,&QComboBox::currentTextChanged,this,&Form::setPrix);
    connect(ui->car,&QComboBox::currentTextChanged,this,&Form::calculPrix);
    connect(ui->debut,&QDateTimeEdit::dateChanged,this,&Form::calculPrix);
    connect(ui->fin,&QDateTimeEdit::dateChanged,this,&Form::calculPrix);
    connect(ui->qte,&QSpinBox::valueChanged,this,&Form::setQte);
    connect(ui->qte,&QSpinBox::valueChanged,this,&Form::calculPrix);
    connect(ui->locate,&QPushButton::clicked,this,&Form::Location);

    connect(ui->addr,&QPushButton::clicked,this,&Form::addi);
    connect(ui->history,&QPushButton::clicked,this,&Form::history);
    connect(ui->editr,&QPushButton::clicked,this,&Form::editt);
    connect(ui->logout,&QPushButton::clicked,this,&Form::retour);
    connect(ui->home,&QPushButton::clicked,this,&Form::homed);

    connect(ui->username,&QLineEdit::textEdited,this,&Form::checked);
    connect(ui->email,&QLineEdit::textEdited,this,&Form::checked);

    for(int i(0);i<liste.size();++i)
    {
        QStringList info = liste[i].split("#");
        qDebug()<<liste;
        QList<int> prix;
        prix<<info[1].toInt()<<info[2].toInt();
        map[info[0]] = prix;
    }
    ui->car->addItems(map.keys());
    ui->car->setCurrentText(map.keys()[0]);
    ui->qte->setValue(map[ui->car->currentText()][0]);
    ui->debut->setMinimumDateTime(QDateTime::currentDateTime());
    ui->fin->setMinimumDateTime(QDateTime::currentDateTime());
}

Form::~Form()
{
    delete ui;
}
bool Form::checked()
{
    bool check = true;
    if(ui->username->text().isEmpty())
    {
        ui->user->setStyleSheet("color: red;");
        ui->user->setText(tr("**Field required"));
        check = false;
    }
    else if(!ui->username->text().isEmpty())
    {
            ui->user->setStyleSheet("color: green;");
            ui->user->setText(tr(""));
    }
    if(ui->email->text().isEmpty())
    {
        ui->eml->setStyleSheet("color: red;");
        ui->eml->setText("**Field required");
        check = false;
    }
    else if(!ui->email->text().isEmpty())
    {
        if(QRegularExpression("^[A-Za-z0-9]{1,}@(gmail|outlook|yahoo).(com|fr)$").match(ui->email->text()).hasMatch())
        {
            ui->eml->setStyleSheet("color: green;");
            ui->eml->setText("Mail valid");

        }
        else if(!QRegularExpression("^[A-Za-z0-9]{1,}@(gmail|outlook|yahoo).(com|fr)$").match(ui->email->text()).hasMatch())
        {
            ui->eml->setStyleSheet("color: red;");
            ui->eml->setText("**Mail Invalid");
            check = false;
        }
    }

    return check;
}

void Form::Location()
{
    if(checked())
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("../build/Users.db");
        db.open();
        QSqlQuery query("",db);
        QStringList liste = map.keys();
        for(int i(0);i<liste.size();++i)
        {
            QStringList nom = liste[i].split(" ");
            QString filtre = QString("Marque ='%1' and Model ='%2'").arg(nom[0]).arg(nom[1]);
            qDebug()<<filtre<<map[liste[i]][0];
            query.prepare(QString("update car set Etat ='%1' where %2").arg("Location").arg(filtre));
            query.exec();
            qDebug("jhjh");
            qDebug()<<query.lastError();
        }
        db.close();
        QSqlDatabase bd = QSqlDatabase::addDatabase("QSQLITE");
        bd.setDatabaseName("../build/Users.db");
        bd.open();
        QSqlQuery quer("",bd);
        QString list;
        for(int i(0);i<map.size();++i)
        {
            list+=map.keys()[i]+'-'+tr("%1").arg(map.values()[i][0])+'#';
        }
        quer.prepare(QString("insert into 'transaction' values('%1','%2','%3','%4','%5','%6','%7')").arg(QDateTime::currentDateTime().toString()).arg(ui->username->text()).arg(ui->email->text()).arg('A'+QDateTime::currentDateTime().toString().split(" ").join("")).arg(ui->debut->text()).arg(ui->fin->text()).arg(list));


        QFile file("../build/"+QDateTime::currentDateTime().toString().split(" ").join("")+".txt");
        file.open(QIODevice::ReadWrite);
        QTextStream texte(&file);
        texte<<"Day:"+QDateTime::currentDateTime().toString()+"\n"+ \
               "Customer:"+QDateTime::currentDateTime().toString()+"\n"+  \
               "Mail:"+ui->email->text()+"\n"+  \
               "<Transaction:"+'A'+'A'+QDateTime::currentDateTime().toString().split(" ").join("")+"\n"+ \
               "Start:"+ui->debut->text()+"\n"+ \
               "End:"+ui->fin->text();


        QMessageBox::information(this,"Registry sucessful","<strong>Registry sucessful,Go to folder build for retrieve your invoice!</strong>");
    }
    else
    {
        QMessageBox::critical(this,"Error","Please,enter correctly your information!!");
    }
}
void Form::setPrix()
{
    ui->qte->setValue(map[ui->car->currentText()][0]);
}
void Form::setQte()
{
    map[ui->car->currentText()][0]=ui->qte->value();
}
void Form::calculPrix()
{

    int prix(0);
    for(int i(0);i<map.size();++i)
    {
        qDebug()<<map.values()[i][0]*map.values()[i][1];
        prix+=map.values()[i][0]*map.values()[i][1];
    }
    prix*=ui->debut->date().daysTo(ui->fin->date());
    ui->prie->setText(QString("%1 $").arg(prix));
}
void Form::on_logout_clicked()
{
    emit logoute();
}
