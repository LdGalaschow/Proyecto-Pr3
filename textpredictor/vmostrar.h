#ifndef VMOSTRAR_H
#define VMOSTRAR_H

#include <QMainWindow>

namespace Ui {
class vMostrar;
}

class vMostrar : public QMainWindow
{
    Q_OBJECT

public:
    explicit vMostrar(QWidget *parent = 0);
    ~vMostrar();
    void recibir_diccionario(QString);

private:
    Ui::vMostrar *ui;

};

#endif // VMOSTRAR_H
