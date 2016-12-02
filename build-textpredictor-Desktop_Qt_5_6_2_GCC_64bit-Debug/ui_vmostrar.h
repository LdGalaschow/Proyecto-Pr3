/********************************************************************************
** Form generated from reading UI file 'vmostrar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMOSTRAR_H
#define UI_VMOSTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vMostrar
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *vMostrar)
    {
        if (vMostrar->objectName().isEmpty())
            vMostrar->setObjectName(QStringLiteral("vMostrar"));
        vMostrar->resize(298, 401);
        centralwidget = new QWidget(vMostrar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 30, 256, 311));
        vMostrar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(vMostrar);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 298, 27));
        vMostrar->setMenuBar(menubar);
        statusbar = new QStatusBar(vMostrar);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        vMostrar->setStatusBar(statusbar);

        retranslateUi(vMostrar);

        QMetaObject::connectSlotsByName(vMostrar);
    } // setupUi

    void retranslateUi(QMainWindow *vMostrar)
    {
        vMostrar->setWindowTitle(QApplication::translate("vMostrar", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class vMostrar: public Ui_vMostrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMOSTRAR_H
