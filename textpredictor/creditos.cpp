#include "creditos.h"
#include "ui_creditos.h"

creditos::creditos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditos)
{
    ui->setupUi(this);
    setWindowTitle(tr("Creditos"));
}

creditos::~creditos()
{
    delete ui;
}
