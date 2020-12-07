#ifndef CHECKIN_FORM_COMPLETE_H
#define CHECKIN_FORM_COMPLETE_H

#include <QDialog>

namespace Ui {
class checkin_form_complete;
}

class checkin_form_complete : public QDialog
{
    Q_OBJECT

public:
    explicit checkin_form_complete(QWidget *parent = 0);
    ~checkin_form_complete();

    signals:
        void checkin_form();

private:
    Ui::checkin_form_complete *ui;
};

#endif // CHECKIN_FORM_COMPLETE_H
