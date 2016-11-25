/********************************************************************************
** Form generated from reading UI file 'vbuscar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBUSCAR_H
#define UI_VBUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vbuscar
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *buscarlineEdit;
    QPushButton *Atras;
    QPushButton *Adelante;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *vbuscar)
    {
        if (vbuscar->objectName().isEmpty())
            vbuscar->setObjectName(QStringLiteral("vbuscar"));
        vbuscar->resize(613, 228);
        centralwidget = new QWidget(vbuscar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 330, 35));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buscarlineEdit = new QLineEdit(widget);
        buscarlineEdit->setObjectName(QStringLiteral("buscarlineEdit"));

        horizontalLayout->addWidget(buscarlineEdit);

        Atras = new QPushButton(widget);
        Atras->setObjectName(QStringLiteral("Atras"));

        horizontalLayout->addWidget(Atras);

        Adelante = new QPushButton(widget);
        Adelante->setObjectName(QStringLiteral("Adelante"));

        horizontalLayout->addWidget(Adelante);

        vbuscar->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(vbuscar);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        vbuscar->setStatusBar(statusbar);

        retranslateUi(vbuscar);

        QMetaObject::connectSlotsByName(vbuscar);
    } // setupUi

    void retranslateUi(QMainWindow *vbuscar)
    {
        vbuscar->setWindowTitle(QApplication::translate("vbuscar", "MainWindow", 0));
        Atras->setText(QApplication::translate("vbuscar", "<", 0));
        Adelante->setText(QApplication::translate("vbuscar", ">", 0));
    } // retranslateUi

};

namespace Ui {
    class vbuscar: public Ui_vbuscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VBUSCAR_H
