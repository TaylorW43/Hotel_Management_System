#include "payment_method_alipay.h"
#include "ui_payment_method_alipay.h"

payment_method_alipay::payment_method_alipay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment_method_alipay)
{
    ui->setupUi(this);
}

payment_method_alipay::~payment_method_alipay()
{
    delete ui;
}
