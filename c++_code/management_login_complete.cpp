#include "management_login_complete.h"
#include "ui_management_login_complete.h"

management_login_complete::management_login_complete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::management_login_complete)
{
    ui->setupUi(this);

    sWindow_room_management = new room_management();

    sWindow_checkin_form = new checkin_form();

    sWindow_checkout_form = new checkout_form();

    sWindow_query_existing_customer = new query_existing_customer;

}

management_login_complete::~management_login_complete()
{
    delete ui;
}
void management_login_complete::on_room_management_clicked()
{

    sWindow_room_management->show();

}

void management_login_complete::on_check_in_clicked()
{
    sWindow_checkin_form->show();

}

void management_login_complete::on_pushButton_3_clicked()
{

    sWindow_checkout_form->show();

}

void management_login_complete::on_pushButton_4_clicked()//query
{

    sWindow_query_existing_customer->show();

}
