#include "query_existing_customer.h"
#include "ui_query_existing_customer.h"


#include <QtSql>
#include <QtDebug>
#include<QMessageBox>



query_existing_customer::query_existing_customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::query_existing_customer)
{
    ui->setupUi(this);

}

query_existing_customer::~query_existing_customer()
{
    delete ui;
}

void query_existing_customer::on_pushButton_clicked()
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

    QString myquery = QString("SELECT * FROM customer_info WHERE customer_idnumber='%1'").arg(ui->id_number->text());

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
