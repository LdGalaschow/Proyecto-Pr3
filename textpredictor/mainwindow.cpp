#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Inicio"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_titulo_clicked()
{
    ventanapredictor *predictor = new ventanapredictor(this);
    predictor->show();
}

void MainWindow::on_ButtonCreditos_clicked()
{
    cred = new creditos(this);
    cred->exec();

}

void MainWindow::on_ButtonLicencia_clicked()
{
    lic = new licencia(this);
    lic->exec();
}
