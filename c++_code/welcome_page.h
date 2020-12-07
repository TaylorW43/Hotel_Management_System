#ifndef WELCOME_PAGE_H
#define WELCOME_PAGE_H

#include <QMainWindow>
#include<customer_login_signup.h>
#include<management_login_signup.h>

namespace Ui {
class welcome_page;
}

class welcome_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcome_page(QWidget *parent = 0);
    ~welcome_page();

private slots:
    void on_customer_login_signup_clicked();


    void on_management_login_signup_clicked();


private:
    Ui::welcome_page *ui;

    customer_login_signup *sWindow_customer_login_signup;

    management_login_signup *sWindow_management_login_signup;

};

#endif // WELCOME_PAGE_H
