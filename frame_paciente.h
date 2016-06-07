#ifndef FRAME_PACIENTE_H
#define FRAME_PACIENTE_H

#include <QFrame>

namespace Ui {
    class frame_paciente;
}

class frame_paciente : public QFrame
{
    Q_OBJECT

public:
    explicit frame_paciente(QWidget *parent = 0);
    ~frame_paciente();

private:
    Ui::frame_paciente *ui;
};

#endif // FRAME_PACIENTE_H
