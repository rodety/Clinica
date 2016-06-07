#ifndef PACIENTE_FRAME_H
#define PACIENTE_FRAME_H

#include <QWidget>

namespace Ui {
    class paciente_frame;
}

class paciente_frame : public QWidget
{
    Q_OBJECT

public:
    explicit paciente_frame(QWidget *parent = 0);
    ~paciente_frame();

private:
    Ui::paciente_frame *ui;
};

#endif // PACIENTE_FRAME_H
