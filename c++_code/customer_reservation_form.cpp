#include "customer_reservation_form.h"
#include "ui_customer_reservation_form.h"

#include <QtSql>
#include <QtDebug>
#include<QMessageBox>

customer_reservation_form::customer_reservation_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_reservation_form)
{
    ui->setupUi(this);

    sWindow_customer_reservation_form_complete = new customer_reservation_form_complete();

    sWindow_payment_method_alipay = new payment_method_alipay();

    sWindow_payment_method_wechat = new payment_method_wechat();

    sWindow_payment_method_bankcard = new payment_method_bankcard();

    sWindow_payment_method_creditcard = new payment_method_creditcard();

}

customer_reservation_form::~customer_reservation_form()
{
    delete ui;
}

void customer_reservation_form::on_pushButton_clicked()//confirm send form
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


    QString name=ui->name->text();
    QString gender = ui->gender->currentText();
    QString id_type = ui->id_type->currentText();
    QString id_number=ui->id_number->text();
    QString checkin_date=ui->checkin_date->text();
    QString checkout_date=ui->checkout_date->text();
    //QString deposit = ui->deposit->currentText();
    QString contact=ui->contact->text();
    QString room=ui->room_number->text();



    QString test = QString("INSERT INTO customer_info(customer_name,customer_gender,customer_idtype,"
                                              "customer_idnumber,customer_checkin,customer_checkout,customer_deposit,"
                                              "customer_contact,customer_room)");
    test += QString("VALUES('%1','%2','%3','%4','%5','%6','%7','%8','%9')")
            .arg(name)
            .arg(gender)
            .arg(id_type)
            .arg(id_number)
            .arg(checkin_date)
            .arg(checkout_date)
            .arg(0)
            .arg(contact)
            .arg(room);

    bool ifExe=qry.exec(test);
    if( ifExe )
    {
        sWindow_customer_reservation_form_complete->show();
        this->close();
    }
    else
        QMessageBox::about(NULL, "Error", "qry.lastError()");
        //qDebug()<<qry.lastError();
}

void customer_reservation_form::on_alipay_clicked()
{

    sWindow_payment_method_alipay->show();

}

void customer_reservation_form::on_wechat_clicked()
{

    sWindow_payment_method_wechat->show();

}

void customer_reservation_form::on_bank_card_clicked()
{

    sWindow_payment_method_bankcard->show();

}

void customer_reservation_form::on_credit_clicked()
{

    sWindow_payment_method_creditcard->show();

}
