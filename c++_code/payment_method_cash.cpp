#include "payment_method_cash.h"
#include "ui_payment_method_cash.h"

payment_method_cash::payment_method_cash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment_method_cash)
{
    ui->setupUi(this);
}

payment_method_cash::~payment_method_cash()
{
    delete ui;
}
