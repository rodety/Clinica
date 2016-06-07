#ifndef FTPCONFIGPROGRAM_H
#define FTPCONFIGPROGRAM_H

#include <QWidget>

namespace Ui {
class ftpconfigprogram;
}

class ftpconfigprogram : public QWidget
{
    Q_OBJECT
    
public:
    explicit ftpconfigprogram(QWidget *parent = 0);
    ~ftpconfigprogram();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ftpconfigprogram *ui;
};

#endif // FTPCONFIGPROGRAM_H
