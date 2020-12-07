#include "customer_my_order.h"
#include "ui_customer_my_order.h"

#include<iostream>

#include <QtSql>
#include <QtDebug>
#include<QMessageBox>

#include<QTableView>

customer_my_order::customer_my_order(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_my_order)
{
    ui->setupUi(this);
}

customer_my_order::~customer_my_order()
{
    delete ui;
}

void customer_my_order::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );

    db.setHostName( "localhost" );
    db.setDatabaseName( "info" );
    db.setUserName( "software_engineering" );
    db.setPassword( "software_engineering" );

    db.open();
    if( !db.open() )
        qDebug() << db.lastError();


    QSqlQuery qry;
    QSqlQueryModel *model = new QSqlQueryModel;


    //nth test(select specific data)

    QString myquery = QString("SELECT * FROM customer_info WHERE customer_idnumber='%1'").arg(ui->idnumber->text());

      if( !qry.exec(myquery) )
        qDebug() << qry.lastError();
      else
      {

        model->setQuery(qry);

        QTableView *view = new QTableView;

        view->setModel(model);

        view->setEditTriggers(QAbstractItemView::NoEditTriggers);

        view->show();

      }
    //end nth test
}
