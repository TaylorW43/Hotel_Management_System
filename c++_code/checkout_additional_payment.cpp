#include "checkout_additional_payment.h"
#include "ui_checkout_additional_payment.h"

checkout_additional_payment::checkout_additional_payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout_additional_payment)
{
    ui->setupUi(this);

    sWindow_payment_method_cash = new payment_method_cash();

    sWindow_payment_method_alipay = new payment_method_alipay();

    sWindow_payment_method_wechat = new payment_method_wechat();

    sWindow_payment_method_bankcard = new payment_method_bankcard();

    sWindow_payment_method_creditcard = new payment_method_creditcard();

    sWindow_payment_method_other = new payment_method_other();

}

checkout_additional_payment::~checkout_additional_payment()
{
    delete ui;
}

void checkout_additional_payment::on_pushButton_clicked()
{

    sWindow_payment_method_cash->show();

}

void checkout_additional_payment::on_pushButton_2_clicked()
{

    sWindow_payment_method_alipay->show();

}

void checkout_additional_payment::on_pushButton_3_clicked()
{

    sWindow_payment_method_wechat->show();

}

void checkout_additional_payment::on_pushButton_4_clicked()
{

    sWindow_payment_method_bankcard->show();

}

void checkout_additional_payment::on_pushButton_5_clicked()
{

    sWindow_payment_method_creditcard->show();

}

void checkout_additional_payment::on_pushButton_6_clicked()
{

    sWindow_payment_method_other->show();

}
