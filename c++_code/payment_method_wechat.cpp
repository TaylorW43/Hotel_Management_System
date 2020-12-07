#include "payment_method_wechat.h"
#include "ui_payment_method_wechat.h"

payment_method_wechat::payment_method_wechat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment_method_wechat)
{
    ui->setupUi(this);
}

payment_method_wechat::~payment_method_wechat()
{
    delete ui;
}
