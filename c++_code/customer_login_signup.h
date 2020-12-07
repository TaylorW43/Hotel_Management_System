#ifndef CUSTOMER_LOGIN_SIGNUP_H
#define CUSTOMER_LOGIN_SIGNUP_H

#include <QDialog>
#include<customer_login_complete.h>
#include<customer_signup.h>


namespace Ui {
class customer_login_signup;
}

class customer_login_signup : public QDialog
{
    Q_OBJECT

public:
    explicit customer_login_signup(QWidget *parent = 0);
    ~customer_login_signup();

signals:
    void welcome_page();


private slots:
    void on_customer_login_clicked();

    void on_customer_signup_clicked();

private:
    Ui::customer_login_signup *ui;

    customer_login_complete *sWindow_customer_login_complete;

    customer_signup *sWindow_customer_signup;

};

#endif // CUSTOMER_LOGIN_SIGNUP_H
