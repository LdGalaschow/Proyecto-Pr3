#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"ventanapredictor.h"
#include"licencia.h"
#include"creditos.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_titulo_clicked();

    void on_ButtonCreditos_clicked();

    void on_ButtonLicencia_clicked();

private:
    Ui::MainWindow *ui;
    creditos *cred;
    licencia *lic;
};

#endif // MAINWINDOW_H
