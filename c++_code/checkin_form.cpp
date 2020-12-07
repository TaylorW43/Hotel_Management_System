#include "checkin_form.h"
#include "ui_checkin_form.h"

//in order to use sql
#include <QtSql>
#include <QtDebug>
#include<QMessageBox>
//end

checkin_form::checkin_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkin_form)
{
    ui->setupUi(this);

    //new cash window
    sWindow_payment_method_cash = new payment_method_cash();
    //end

    //new alipay window
    sWindow_payment_method_alipay = new payment_method_alipay();
    //end

    //new wechat window
    sWindow_payment_method_wechat = new payment_method_wechat();
    //end

    //new bankcard window
    sWindow_payment_method_bankcard = new payment_method_bankcard();
    //end

    //new creditcard window
    sWindow_payment_method_creditcard = new payment_method_creditcard();
    //end

    //new other window
    sWindow_payment_method_other = new payment_method_other();
    //end

    //new check in form complete window
    sWindow_checkin_form_complete = new checkin_form_complete();
    //end


}

checkin_form::~checkin_form()
{
    delete ui;
}

void checkin_form::on_cash_clicked()
{
    
    sWindow_payment_method_cash->show();
}

void checkin_form::on_alipay_clicked()
{
    sWindow_payment_method_alipay->show();
}

void checkin_form::on_wechat_clicked()
{
    sWindow_payment_method_wechat->show();
}

void checkin_form::on_bank_card_clicked()
{
    sWindow_payment_method_bankcard->show();
}

void checkin_form::on_credit_clicked()
{
    sWindow_payment_method_creditcard->show();
}

void checkin_form::on_other_clicked()
{
    sWindow_payment_method_other->show();
}

void checkin_form::on_pushButton_7_clicked()
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
    QString deposit = ui->deposit->currentText();
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
            .arg(deposit)
            .arg(contact)
            .arg(room);

    bool ifExe=qry.exec(test);
    if( ifExe )
    {
        sWindow_checkin_form_complete->show();
        this->close();
    }
    else
        QMessageBox::about(NULL, "Error", "Wrong Format");
        //qDebug()<<qry.lastError();


}

