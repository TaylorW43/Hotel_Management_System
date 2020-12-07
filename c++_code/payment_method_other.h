#ifndef PAYMENT_METHOD_OTHER_H
#define PAYMENT_METHOD_OTHER_H

#include <QDialog>

namespace Ui {
class payment_method_other;
}

class payment_method_other : public QDialog
{
    Q_OBJECT

public:
    explicit payment_method_other(QWidget *parent = 0);
    ~payment_method_other();

    signals:
        void checkin_form();

        signals:
            void checkout_additional_payment();


private:
    Ui::payment_method_other *ui;
};

#endif // PAYMENT_METHOD_OTHER_H
