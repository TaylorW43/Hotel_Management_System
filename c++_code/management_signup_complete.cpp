#include "management_signup_complete.h"
#include "ui_management_signup_complete.h"

management_signup_complete::management_signup_complete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::management_signup_complete)
{
    ui->setupUi(this);
}

management_signup_complete::~management_signup_complete()
{
    delete ui;
}

void management_signup_complete::on_commandLinkButton_clicked()
{
    this->close();

}
