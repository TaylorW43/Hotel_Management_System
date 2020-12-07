#include "management_login_signup.h"
#include "ui_management_login_signup.h"

#include <QMessageBox>
#include <QtSql>
#include <QtDebug>

management_login_signup::management_login_signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::management_login_signup)
{
    ui->setupUi(this);

    sWindow_management_login_complete = new management_login_complete();

    sWindow_management_signup = new management_signup();

}

management_login_signup::~management_login_signup()
{
    delete ui;
}

void management_login_signup::on_management_login_clicked()
{

     QString username = ui->management_username->text();
     QString password = ui->management_password->text();


        QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );

                    db.setHostName( "localhost" );
                    db.setDatabaseName( "account_passwd" );
                    db.setUserName( "software_engineering" );
                    db.setPassword( "software_engineering" );

                    db.open();

                    if( !db.open() )
                        qDebug() << db.lastError();

                    QSqlQuery qry;

                    //select
                    qry.prepare( "SELECT managers_account,managers_passwd FROM management_account_passwd" );
                      if( !qry.exec() )
                        qDebug() << qry.lastError();
                      else
                      {

                        QSqlRecord rec = qry.record();
                        int cols = rec.count();

                        while( qry.next() )
                        {

                          for(int c=0;c<cols-1;c++)
                          if((username==qry.value(c).toString())&&(password==qry.value(c+1).toString()))
                          {

                              sWindow_management_login_complete->show();
                              this->close();
                              
                          }
                          else
                              QMessageBox::about(NULL, "Error", "Wrong Username/Password!");
                        }
                      }



                       db.close();

}

void management_login_signup::on_management_signup_clicked()
{

    sWindow_management_signup->show();

}
