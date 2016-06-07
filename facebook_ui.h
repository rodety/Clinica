#ifndef FACEBOOK_UI_H
#define FACEBOOK_UI_H

#include <QWidget>

namespace Ui {
    class facebook_ui;
}

class facebook_ui : public QWidget
{
    Q_OBJECT

public:
    explicit facebook_ui(QWidget *parent = 0);
    ~facebook_ui();

private:
    Ui::facebook_ui *ui;
};

#endif // FACEBOOK_UI_H
