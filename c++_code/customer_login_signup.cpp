#include "customer_login_signup.h"
#include "ui_customer_login_signup.h"

#include <QMessageBox>
#include <QtSql>
#include <QtDebug>


customer_login_signup::customer_login_signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_login_signup)
{
    ui->setupUi(this);

    sWindow_customer_login_complete = new customer_login_complete();

    sWindow_customer_signup = new customer_signup();

}

customer_login_signup::~customer_login_signup()
{
    delete ui;
}

void customer_login_signup::on_customer_login_clicked()
{

    QString username = ui->customer_username->text();
    QString password = ui->customer_password->text();

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
                qry.prepare( "SELECT customer_account,customer_passwd FROM customer_account_passwd" );
                  if( !qry.exec() )
                    qDebug() << qry.lastError();
                  else
                  {

                    QSqlRecord rec = qry.record();
                    int cols = rec.count();

                    bool ifIn=false;

                    while( qry.next() )
                    {

                      for(int c=0;c<cols-1;c++)
                      if((username==qry.value(c).toString())&&(password==qry.value(c+1).toString()))
                      {

                          ifIn=true;

                          sWindow_customer_login_complete->show();
                          this->close();
                         
                      }
                    }
                    if(ifIn==false)
                        QMessageBox::about(NULL, "Error", "Wrong Username/Password!");

                  }

                   db.close();


}

void customer_login_signup::on_customer_signup_clicked()
{
    sWindow_customer_signup->show();

}
