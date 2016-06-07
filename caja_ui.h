#ifndef CAJA_UI_H
#define CAJA_UI_H

#include <QWidget>

namespace Ui {
    class caja_ui;
}

class caja_ui : public QWidget
{
    Q_OBJECT

public:
    explicit caja_ui(QWidget *parent = 0);
    ~caja_ui();

private slots:
    void on_newAlert_alerta_2_clicked();

private:
    Ui::caja_ui *ui;
};

#endif // CAJA_UI_H
