#ifndef CUSTOMER_SIGNUP_H
#define CUSTOMER_SIGNUP_H

#include <QDialog>

#include<customer_signup_complete.h>

namespace Ui {
class customer_signup;
}

class customer_signup : public QDialog
{
    Q_OBJECT

public:
    explicit customer_signup(QWidget *parent = 0);
    ~customer_signup();


signals:
    void customer_login_signup();

private slots:
    void on_customer_signup_2_clicked();

   // void on_email_editingFinished();

private:
    Ui::customer_signup *ui;

    customer_signup_complete *sWindow_customer_signup_complete;

};

#endif // CUSTOMER_SIGNUP_H
