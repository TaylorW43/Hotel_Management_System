#include "checkout_form.h"
#include "ui_checkout_form.h"

checkout_form::checkout_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout_form)
{
    ui->setupUi(this);


    sWindow_checkout_additional_payment = new checkout_additional_payment();

    sWindow_checkout_form_complete = new checkout_form_complete();

}

checkout_form::~checkout_form()
{
    delete ui;
}

void checkout_form::on_pushButton_clicked()
{

    sWindow_checkout_additional_payment->show();

}

void checkout_form::on_pushButton_7_clicked()
{

    sWindow_checkout_form_complete->show();

}
