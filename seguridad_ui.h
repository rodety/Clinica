#ifndef SEGURIDAD_UI_H
#define SEGURIDAD_UI_H

#include <QWidget>

namespace Ui {
    class seguridad_ui;
}

class seguridad_ui : public QWidget
{
    Q_OBJECT

public:
    explicit seguridad_ui(QWidget *parent = 0);
    ~seguridad_ui();

private:
    Ui::seguridad_ui *ui;
};

#endif // SEGURIDAD_UI_H
