#ifndef NUEVO_INGRESO_UI_H
#define NUEVO_INGRESO_UI_H

#include <QWidget>

namespace Ui {
    class nuevo_ingreso_ui;
}

class nuevo_ingreso_ui : public QWidget
{
    Q_OBJECT

public:
    explicit nuevo_ingreso_ui(QWidget *parent = 0);
    ~nuevo_ingreso_ui();

private:
    Ui::nuevo_ingreso_ui *ui;
};

#endif // NUEVO_INGRESO_UI_H
