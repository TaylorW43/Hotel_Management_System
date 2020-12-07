#include "customer_signup_complete.h"
#include "ui_customer_signup_complete.h"

customer_signup_complete::customer_signup_complete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_signup_complete)
{
    ui->setupUi(this);


}

customer_signup_complete::~customer_signup_complete()
{
    delete ui;
}

void customer_signup_complete::on_commandLinkButton_clicked()
{
    this->close();
}
