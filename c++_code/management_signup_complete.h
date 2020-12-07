#ifndef MANAGEMENT_SIGNUP_COMPLETE_H
#define MANAGEMENT_SIGNUP_COMPLETE_H

#include <QDialog>

namespace Ui {
class management_signup_complete;
}

class management_signup_complete : public QDialog
{
    Q_OBJECT

public:
    explicit management_signup_complete(QWidget *parent = 0);
    ~management_signup_complete();

signals:
    void management_signup();


private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::management_signup_complete *ui;
};

#endif // MANAGEMENT_SIGNUP_COMPLETE_H
