#include "vmostrar.h"
#include "ui_vmostrar.h"

vMostrar::vMostrar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vMostrar)
{
    ui->setupUi(this);
    setWindowTitle(tr("Diccionario"));
}

vMostrar::~vMostrar()
{
    delete ui;
}

void vMostrar::recibir_diccionario(QString diccionario)
{
    ui->textBrowser->setPlainText(diccionario);
}
