#ifndef CHECKOUT_FORM_H
#define CHECKOUT_FORM_H

#include <QDialog>

#include<checkout_additional_payment.h>

#include<checkout_form_complete.h>


namespace Ui {
class checkout_form;
}

class checkout_form : public QDialog
{
    Q_OBJECT

public:
    explicit checkout_form(QWidget *parent = 0);
    ~checkout_form();

private slots:
    void on_pushButton_clicked();

    
    void on_pushButton_7_clicked();

signals:
        void management_login_complete();


private:
    Ui::checkout_form *ui;


    checkout_additional_payment *sWindow_checkout_additional_payment;

    checkout_form_complete *sWindow_checkout_form_complete;

};

#endif // CHECKOUT_FORM_H
