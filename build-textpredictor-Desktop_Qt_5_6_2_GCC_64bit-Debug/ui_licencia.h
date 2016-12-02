/********************************************************************************
** Form generated from reading UI file 'licencia.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENCIA_H
#define UI_LICENCIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_licencia
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *licencia)
    {
        if (licencia->objectName().isEmpty())
            licencia->setObjectName(QStringLiteral("licencia"));
        licencia->resize(385, 192);
        pushButton = new QPushButton(licencia);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 150, 95, 31));
        textBrowser = new QTextBrowser(licencia);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 30, 341, 111));

        retranslateUi(licencia);
        QObject::connect(pushButton, SIGNAL(clicked()), licencia, SLOT(close()));

        QMetaObject::connectSlotsByName(licencia);
    } // setupUi

    void retranslateUi(QDialog *licencia)
    {
        licencia->setWindowTitle(QApplication::translate("licencia", "Dialog", 0));
        pushButton->setText(QApplication::translate("licencia", "Salir", 0));
        textBrowser->setHtml(QApplication::translate("licencia", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Text Predictor es software libre; puede redistribuirlo y/o modificarlo bajo los t\303\251rminos de la Licencia P\303\272blica General de GNU publicada por la Free Software Foundation; ya sea en su versi\303\263n 2 \303\263 (a su criterio)en una versi\303\263n posterior.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Text P"
                        "redictor se distribuye con la esperanza que sea \303\272til, pero SIN GARANT\303\215A; sin ninguna garant\303\255a impl\303\255cita de COMERCIALIDAD o IDONEIDAD PARA UN FIN DETERMINADO.  Mire la Licencia General GNU para m\303\241s detalles.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class licencia: public Ui_licencia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENCIA_H
