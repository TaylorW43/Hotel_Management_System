#include "room_management.h"
#include "ui_room_management.h"

#include <QtSql>
#include <QtDebug>
#include<QMessageBox>

room_management::room_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::room_management)
{
    ui->setupUi(this);

}

room_management::~room_management()
{
    delete ui;
}

void room_management::on_pushButton_2_clicked()
{
    //select *
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

   model->setQuery("SELECT * FROM room_info");

   //QTableView *view = new QTableView;
   QTableView *view=ui->rooms;
   view->setModel(model);

   view->setEditTriggers(QAbstractItemView::NoEditTriggers);

   view->show();

  //end select *
}
