#include "management_signup.h"
#include "ui_management_signup.h"

#include <QtSql>
#include <QtDebug>
#include<QMessageBox>


management_signup::management_signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::management_signup)
{
    ui->setupUi(this);

    sWindow_management_signup_complete = new management_signup_complete();

}

management_signup::~management_signup()
{
    delete ui;
}

void management_signup::on_pushButton_clicked()
{



                   QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );

                   db.setHostName( "localhost" );
                   db.setDatabaseName( "account_passwd" );
                   //test use
                   //db.setDatabaseName( "test_user2_test" );
                   //end
                   db.setUserName( "software_engineering" );
                   db.setPassword( "software_engineering" );


                   db.open();

                   if( !db.open() )
                       qDebug() << db.lastError();

                   QSqlQuery qry;


                   /*
                   //nth test(succeed)
                       QString test = QString("INSERT INTO test_test(id,name)");

                        test += QString("VALUES('%1','%2')")
                               .arg(ui->staff_number->text())
                               .arg(ui->name->text());

                       bool ifExe=qry.exec(test);

                   if( ifExe )
                       sWindow_management_signup_complete->show();
                   else
                       QMessageBox::about(NULL, "Error", "数据不符合规范");


                   //end nth test
                   */

                   QString test = QString("INSERT INTO management_account_passwd(managers_number,managers_name,managers_gender,managers_id_number,"
                                          "managers_phone,managers_email,managers_department,managers_department_number,managers_position,"
                                          "managers_account,managers_passwd)");

                    test += QString("VALUES('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11')")
                           .arg(ui->staff_number->text())
                           .arg(ui->name->text())
                           .arg(ui->gender->text())
                           .arg(ui->id_number->text())
                           .arg(ui->phone->text())
                           .arg(ui->email->text())
                           .arg(ui->department->text())
                           .arg(ui->department_number->text())
                           .arg(ui->position->text())
                           .arg(ui->account->text())
                           .arg(ui->password->text());

                   bool ifExe=qry.exec(test);


               if( ifExe )
               {
                   sWindow_management_signup_complete->show();
                   this->close();
               }
               else
                   QMessageBox::about(NULL, "Error", "Wrong Format");


}
