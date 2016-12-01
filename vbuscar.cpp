#include "vbuscar.h"
#include "ui_vbuscar.h"

vbuscar::vbuscar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vbuscar)
{
    ui->setupUi(this);
}

vbuscar::~vbuscar()
{
    delete ui;
}

void vbuscar::on_Atras_clicked()
{

  emit FSignal(ui->buscarlineEdit->text());
}

void vbuscar::on_Adelante_clicked()
{
    emit FSignalA(ui->buscarlineEdit->text());
    // TextEditor->find(ui->SearchLineEdit->text());
    //TextEditor->find(ui->SearchLineEdit->text(),QTextDocument::FindBackward) atras
}
