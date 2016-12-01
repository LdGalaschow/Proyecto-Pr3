#ifndef VBUSCAR_H
#define VBUSCAR_H

#include <QMainWindow>

namespace Ui {
class vbuscar;
}

class vbuscar : public QMainWindow
{
    Q_OBJECT

public:
    explicit vbuscar(QWidget *parent = 0);
    ~vbuscar();

signals:

    void FSignal(const QString text);

    void FSignalA(const QString textA);

private slots:
    void on_Atras_clicked();

    void on_Adelante_clicked();

private:
    Ui::vbuscar *ui;
};

#endif // VBUSCAR_H
