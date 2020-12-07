#include "payment_method_creditcard.h"
#include "ui_payment_method_creditcard.h"

payment_method_creditcard::payment_method_creditcard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment_method_creditcard)
{
    ui->setupUi(this);
}

payment_method_creditcard::~payment_method_creditcard()
{
    delete ui;
}
