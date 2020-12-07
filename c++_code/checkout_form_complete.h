#ifndef CHECKOUT_FORM_COMPLETE_H
#define CHECKOUT_FORM_COMPLETE_H

#include <QDialog>

namespace Ui {
class checkout_form_complete;
}

class checkout_form_complete : public QDialog
{
    Q_OBJECT

public:
    explicit checkout_form_complete(QWidget *parent = 0);
    ~checkout_form_complete();

    signals:
        void checkout_form();


private:
    Ui::checkout_form_complete *ui;
};

#endif // CHECKOUT_FORM_COMPLETE_H
