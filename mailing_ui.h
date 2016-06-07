#ifndef MAILING_UI_H
#define MAILING_UI_H

#include <QWidget>

namespace Ui {
    class mailing_ui;
}

class mailing_ui : public QWidget
{
    Q_OBJECT

public:
    explicit mailing_ui(QWidget *parent = 0);
    ~mailing_ui();

private:
    Ui::mailing_ui *ui;



};

#endif // MAILING_UI_H
