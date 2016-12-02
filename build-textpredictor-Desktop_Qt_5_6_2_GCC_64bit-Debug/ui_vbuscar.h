/********************************************************************************
** Form generated from reading UI file 'vbuscar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBUSCAR_H
#define UI_VBUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vbuscar
{
public:
    QWidget *centralwidget;
    QLineEdit *buscarlineEdit;
    QPushButton *Atras;
    QPushButton *Adelante;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *vbuscar)
    {
        if (vbuscar->objectName().isEmpty())
            vbuscar->setObjectName(QStringLiteral("vbuscar"));
        vbuscar->resize(360, 90);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vbuscar->sizePolicy().hasHeightForWidth());
        vbuscar->setSizePolicy(sizePolicy);
        vbuscar->setMinimumSize(QSize(360, 90));
        vbuscar->setMaximumSize(QSize(360, 90));
        centralwidget = new QWidget(vbuscar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        buscarlineEdit = new QLineEdit(centralwidget);
        buscarlineEdit->setObjectName(QStringLiteral("buscarlineEdit"));
        buscarlineEdit->setGeometry(QRect(20, 30, 171, 23));
        Atras = new QPushButton(centralwidget);
        Atras->setObjectName(QStringLiteral("Atras"));
        Atras->setGeometry(QRect(210, 30, 51, 23));
        Adelante = new QPushButton(centralwidget);
        Adelante->setObjectName(QStringLiteral("Adelante"));
        Adelante->setGeometry(QRect(280, 30, 51, 23));
        vbuscar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(vbuscar);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 20));
        vbuscar->setMenuBar(menubar);
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
