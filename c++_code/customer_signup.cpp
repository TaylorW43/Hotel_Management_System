#include "customer_signup.h"
#include "ui_customer_signup.h"

#include<iostream>
#include <QtSql>
#include <QtDebug>
#include<QMessageBox>

customer_signup::customer_signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_signup)
{
    ui->setupUi(this);

    sWindow_customer_signup_complete = new customer_signup_complete();

}

customer_signup::~customer_signup()
{
    delete ui;
}
void customer_signup::on_customer_signup_2_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );

                       db.setHostName( "localhost" );
                       db.setDatabaseName( "account_passwd" );
                       db.setUserName( "software_engineering" );
                       db.setPassword( "software_engineering" );


                       db.open();

                       if( !db.open() )
                           qDebug() << db.lastError();

                       QSqlQuery qry;

                       QString test = QString("INSERT INTO customer_account_passwd(customer_name,customer_phone,customer_email,customer_account,customer_passwd)");

                        test += QString("VALUES('%1','%2','%3','%4','%5')")
                               .arg(ui->name->text())
                               .arg(ui->phone->text())
                               .arg(ui->email->text())
                               .arg(ui->account->text())
                               .arg(ui->password->text());


                       bool ifExe=qry.exec(test);

                   if( ifExe )
                       sWindow_customer_signup_complete->show();
                   else
                       QMessageBox::about(NULL, "Error", "Wrong Format");



}

