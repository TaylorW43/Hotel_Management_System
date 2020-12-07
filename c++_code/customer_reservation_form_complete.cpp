#include "customer_reservation_form_complete.h"
#include "ui_customer_reservation_form_complete.h"

customer_reservation_form_complete::customer_reservation_form_complete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_reservation_form_complete)
{
    ui->setupUi(this);
}

customer_reservation_form_complete::~customer_reservation_form_complete()
{
    delete ui;
}
