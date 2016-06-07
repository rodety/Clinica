#ifndef TRATAMIENTOS_UI_H
#define TRATAMIENTOS_UI_H

#include <QWidget>

namespace Ui {
    class tratamientos_ui;
}

class tratamientos_ui : public QWidget
{
    Q_OBJECT

public:
    explicit tratamientos_ui(QWidget *parent = 0);
    ~tratamientos_ui();

private:
    Ui::tratamientos_ui *ui;
};

#endif // TRATAMIENTOS_UI_H
