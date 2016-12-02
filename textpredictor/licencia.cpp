#include "licencia.h"
#include "ui_licencia.h"

licencia::licencia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::licencia)
{
    ui->setupUi(this);
    setWindowTitle(tr("Licencia"));
}

licencia::~licencia()
{
    delete ui;
}
