#include "welcome_page.h"
#include "ui_welcome_page.h"

welcome_page::welcome_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcome_page)
{
    ui->setupUi(this);

    sWindow_customer_login_signup = new customer_login_signup();

    sWindow_management_login_signup = new management_login_signup();

}

welcome_page::~welcome_page()
{
    delete ui;
}

void welcome_page::on_customer_login_signup_clicked()
{

    sWindow_customer_login_signup->show();
    this->close();

}


void welcome_page::on_management_login_signup_clicked()
{

    sWindow_management_login_signup->show();
    this->close();

}
