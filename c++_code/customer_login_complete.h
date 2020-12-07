#ifndef CUSTOMER_LOGIN_COMPLETE_H
#define CUSTOMER_LOGIN_COMPLETE_H

#include <QDialog>

#include<customer_reservation_form.h>

#include<customer_my_order.h>

namespace Ui {
class customer_login_complete;
}

class customer_login_complete : public QDialog
{
    Q_OBJECT

public:
    explicit customer_login_complete(QWidget *parent = 0);
    ~customer_login_complete();

signals:
    void customer_login_signup();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::customer_login_complete *ui;

    customer_reservation_form *sWindow_customer_reservation_form;

    customer_my_order *sWindow_customer_my_order;

};

#endif // CUSTOMER_LOGIN_COMPLETE_H
