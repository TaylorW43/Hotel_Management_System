#ifndef PAYMENT_METHOD_CASH_H
#define PAYMENT_METHOD_CASH_H

#include <QDialog>

namespace Ui {
class payment_method_cash;
}

class payment_method_cash : public QDialog
{
    Q_OBJECT

public:
    explicit payment_method_cash(QWidget *parent = 0);
    ~payment_method_cash();


signals:
    void checkin_form();

    signals:
        void checkout_additional_payment();


private:
    Ui::payment_method_cash *ui;
};

#endif // PAYMENT_METHOD_CASH_H
