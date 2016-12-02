#ifndef LICENCIA_H
#define LICENCIA_H

#include <QDialog>

namespace Ui {
class licencia;
}

class licencia : public QDialog
{
    Q_OBJECT

public:
    explicit licencia(QWidget *parent = 0);
    ~licencia();

private:
    Ui::licencia *ui;
};

#endif // LICENCIA_H
