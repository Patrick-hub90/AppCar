#include "historique.h"
#include "ui_historique.h"

remove::remove(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::remove)
{
    ui->setupUi(this);
    this->setFixedSize(812,540);
    db = QSqlDatabase::addDatabase("QSQLITE","db");
    db.setDatabaseName("../build/Users.db");
    db.open();
    QSqlTableModel* modele = new QSqlTableModel(this,db);
    modele->setTable("transaction");
    modele->select();
    checking_registry();
    connect(ui->marque,&QComboBox::currentIndexChanged,this,&remove::checking_registry);
    connect(ui->model,&QComboBox::currentIndexChanged,this,&remove::checking_registry);
    connect(ui->regis,&QComboBox::currentIndexChanged,this,&remove::checking_registry);
    connect(ui->price,&QComboBox::currentIndexChanged,this,&remove::checking_registry);
    connect(ui->state,&QComboBox::currentIndexChanged,this,&remove::checking_registry);
    connect(ui->kilo,&QComboBox::currentIndexChanged,this,&remove::checking_registry);

    connect(ui->marque,&QComboBox::currentTextChanged,this,&remove::checking_registry);
    connect(ui->model,&QComboBox::currentTextChanged,this,&remove::checking_registry);
    connect(ui->regis,&QComboBox::currentTextChanged,this,&remove::checking_registry);
    connect(ui->price,&QComboBox::currentTextChanged,this,&remove::checking_registry);
    connect(ui->state,&QComboBox::currentTextChanged,this,&remove::checking_registry);
    connect(ui->kilo,&QComboBox::currentTextChanged,this,&remove::checking_registry);

    connect(ui->addr,&QPushButton::clicked,this,&remove::addi);
    connect(ui->history,&QPushButton::clicked,this,&remove::history);
    connect(ui->editr,&QPushButton::clicked,this,&remove::editt);
    connect(ui->logout,&QPushButton::clicked,this,&remove::retour);
    connect(ui->home,&QPushButton::clicked,this,&remove::homed);

    modele->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->marque->setModel(modele);
    //'Date' varchar,'NomClient' varchar,'Email' varchar,'IdTransaction' varchar,'Debut' varchar,'Fin' varchar,'Liste' varchar

    ui->marque->setModelColumn(modele->fieldIndex("IdTransaction"));
    ui->model->setModel(modele);
    ui->state->setModel(modele);
    ui->state->setModelColumn(modele->fieldIndex("Date"));
    ui->model->setModelColumn(modele->fieldIndex("NomClient"));
    ui->kilo->setModel(modele);
    ui->kilo->setModelColumn(modele->fieldIndex("Email"));
    ui->price->setModel(modele);
    ui->price->setModelColumn(modele->fieldIndex("Debut"));
    ui->regis->setModel(modele);
    ui->regis->setModelColumn(modele->fieldIndex("Fin"));


    ui->marque->addItem("");
    ui->model->addItem("");
    ui->kilo->addItem("");
    ui->price->addItem("");
    ui->regis->addItem("");
    ui->state->addItem("");

    ui->marque->setCurrentText("");
    ui->model->setCurrentText("");
    ui->kilo->setCurrentText("");
    ui->price->setCurrentText("");
    ui->regis->setCurrentText("");
    ui->state->setCurrentText("");

    QDataWidgetMapper* mapper = new QDataWidgetMapper(this);
    mapper->setModel(modele);
    mapper->addMapping(ui->marque,modele->fieldIndex("IdTransaction"));
    mapper->addMapping(ui->model,modele->fieldIndex("NomClient"));
    mapper->addMapping(ui->kilo,modele->fieldIndex("Email"));
    mapper->addMapping(ui->price,modele->fieldIndex("Debut"));
    mapper->addMapping(ui->regis,modele->fieldIndex("Fin"));
    mapper->addMapping(ui->state,modele->fieldIndex("Date"));

    connect(ui->tableView->selectionModel(),
            &QItemSelectionModel::currentRowChanged,
            mapper,
            &QDataWidgetMapper::setCurrentModelIndex
            );


    modele->setHeaderData(modele->fieldIndex("Date"), Qt::Horizontal,tr("Id"));
    modele->setHeaderData(modele->fieldIndex("NomClient"), Qt::Horizontal,tr("Customer"));
    modele->setHeaderData(modele->fieldIndex("Email"), Qt::Horizontal,tr("Mail"));
    modele->setHeaderData(modele->fieldIndex("Debut"), Qt::Horizontal,tr("Start"));
    modele->setHeaderData(modele->fieldIndex("Fin"), Qt::Horizontal,tr("End"));
    modele->setHeaderData(modele->fieldIndex("Date"), Qt::Horizontal,tr("Days"));
    ui->tableView->setStyleSheet("QHeaderView::section{font-weight: bold;font-size: 15px}");

    ui->tableView->setModel(modele);
    ui->tableView->setColumnWidth(0,152);
    ui->tableView->setColumnWidth(1,120);
    ui->tableView->setColumnWidth(2,120);
    ui->tableView->setColumnWidth(3,120);
    ui->tableView->setColumnWidth(4,120);
    ui->tableView->setColumnWidth(5,120);
    ui->tableView->setColumnHidden(modele->fieldIndex("Liste"),true);
      ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
}

remove::~remove()
{
    delete ui;
}
void remove::checking_registry()
{
    QStringList filter;
    db = QSqlDatabase::addDatabase("QSQLITE","db");
    db.setDatabaseName("../build/Users.db");
    db.open();
    if(ui->marque->currentText() != "")
        filter<<QString("IdTransaction='%1' ").arg(ui->marque->currentText());
    if(ui->model->currentText() != "")
        filter<<QString("NomClient='%1' ").arg(ui->model->currentText());
    if(ui->kilo->currentText() != "")
        filter<<QString("Email='%1' ").arg(ui->kilo->currentText());
    if(ui->price->currentText() != "")
        filter<<QString("Debut='%1' ").arg(ui->price->currentText());
    if(ui->regis->currentText() != "")
        filter<<QString("Fin='%1' ").arg(ui->regis->currentText());
    if(ui->state->currentText() != "")
        filter<<QString("Date='%1' ").arg(ui->state->currentText());
    QString filtre = filter.join(" and ");
    qDebug()<<filtre;
    QSqlTableModel *model = new QSqlTableModel(this,db);
    model->setTable("transaction");
    model->setFilter(filtre);
    model->select();


    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(model->fieldIndex("Liste"),true);
    ui->tableView->setSelectionMode(QAbstractItemView::ContiguousSelection);
    ui->tableView->setGridStyle(Qt::DashLine);

}
void remove::on_logout_clicked()
{
    emit logoute();
}
