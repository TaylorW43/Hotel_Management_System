#include "payment_method_bankcard.h"
#include "ui_payment_method_bankcard.h"

payment_method_bankcard::payment_method_bankcard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment_method_bankcard)
{
    ui->setupUi(this);
}

payment_method_bankcard::~payment_method_bankcard()
{
    delete ui;
}
