#ifndef AYUDA_UI_H
#define AYUDA_UI_H

#include <QWidget>

namespace Ui {
    class ayuda_ui;
}

class ayuda_ui : public QWidget
{
    Q_OBJECT

public:
    explicit ayuda_ui(QWidget *parent = 0);
    ~ayuda_ui();

private:
    Ui::ayuda_ui *ui;
};

#endif // AYUDA_UI_H
