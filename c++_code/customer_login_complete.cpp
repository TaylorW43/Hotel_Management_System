#include "customer_login_complete.h"
#include "ui_customer_login_complete.h"

customer_login_complete::customer_login_complete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_login_complete)
{
    ui->setupUi(this);

    sWindow_customer_reservation_form = new customer_reservation_form();

    sWindow_customer_my_order = new customer_my_order();

}

customer_login_complete::~customer_login_complete()
{
    delete ui;
}

void customer_login_complete::on_pushButton_2_clicked()//customer reservation
{

    sWindow_customer_reservation_form->show();

}

void customer_login_complete::on_pushButton_clicked()
{

    sWindow_customer_my_order->show();

}
