#include "payment_method_other.h"
#include "ui_payment_method_other.h"

payment_method_other::payment_method_other(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment_method_other)
{
    ui->setupUi(this);
}

payment_method_other::~payment_method_other()
{
    delete ui;
}
