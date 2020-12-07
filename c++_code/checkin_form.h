#ifndef CHECKIN_FORM_H
#define CHECKIN_FORM_H

#include <QDialog>

#include<payment_method_cash.h>
#include<payment_method_alipay.h>
#include<payment_method_wechat.h>
#include<payment_method_bankcard.h>
#include<payment_method_creditcard.h>
#include<payment_method_other.h>
#include<checkin_form_complete.h>

namespace Ui {
class checkin_form;
}

class checkin_form : public QDialog
{
    Q_OBJECT

public:
    explicit checkin_form(QWidget *parent = 0);
    ~checkin_form();

signals:
    void management_login_complete();

private slots:
    void on_cash_clicked();

    void on_alipay_clicked();

    void on_wechat_clicked();

    void on_bank_card_clicked();

    void on_credit_clicked();

    void on_other_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::checkin_form *ui;

    payment_method_cash *sWindow_payment_method_cash;

    payment_method_alipay *sWindow_payment_method_alipay;

    payment_method_wechat *sWindow_payment_method_wechat;

    payment_method_bankcard *sWindow_payment_method_bankcard;

    payment_method_creditcard *sWindow_payment_method_creditcard;

    payment_method_other *sWindow_payment_method_other;

    checkin_form_complete *sWindow_checkin_form_complete;

};

#endif // CHECKIN_FORM_H
