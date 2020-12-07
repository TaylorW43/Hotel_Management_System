#include "checkout_form_complete.h"
#include "ui_checkout_form_complete.h"

checkout_form_complete::checkout_form_complete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout_form_complete)
{
    ui->setupUi(this);
}

checkout_form_complete::~checkout_form_complete()
{
    delete ui;
}
