#ifndef CUSTOMER_SIGNUP_COMPLETE_H
#define CUSTOMER_SIGNUP_COMPLETE_H

#include <QDialog>



namespace Ui {
class customer_signup_complete;
}

class customer_signup_complete : public QDialog
{
    Q_OBJECT

public:
    explicit customer_signup_complete(QWidget *parent = 0);
    ~customer_signup_complete();

signals:
    void customer_signup();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::customer_signup_complete *ui;


};

#endif // CUSTOMER_SIGNUP_COMPLETE_H
