#ifndef PAYMENT_METHOD_BANKCARD_H
#define PAYMENT_METHOD_BANKCARD_H

#include <QDialog>

namespace Ui {
class payment_method_bankcard;
}

class payment_method_bankcard : public QDialog
{
    Q_OBJECT

public:
    explicit payment_method_bankcard(QWidget *parent = 0);
    ~payment_method_bankcard();


    signals:
        void checkin_form();

        signals:
            void checkout_additional_payment();

            signals:
                void customer_reservation_form();
           
private:
    Ui::payment_method_bankcard *ui;
};

#endif // PAYMENT_METHOD_BANKCARD_H
