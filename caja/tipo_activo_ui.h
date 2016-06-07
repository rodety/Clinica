#ifndef TIPO_ACTIVO_UI_H
#define TIPO_ACTIVO_UI_H

#include <QWidget>

namespace Ui {
    class tipo_activo_ui;
}

class tipo_activo_ui : public QWidget
{
    Q_OBJECT

public:
    explicit tipo_activo_ui(QWidget *parent = 0);
    ~tipo_activo_ui();

private:
    Ui::tipo_activo_ui *ui;
};

#endif // TIPO_ACTIVO_UI_H
