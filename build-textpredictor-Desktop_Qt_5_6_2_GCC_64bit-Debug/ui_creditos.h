/********************************************************************************
** Form generated from reading UI file 'creditos.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOS_H
#define UI_CREDITOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_creditos
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *creditos)
    {
        if (creditos->objectName().isEmpty())
            creditos->setObjectName(QStringLiteral("creditos"));
        creditos->resize(287, 130);
        textBrowser = new QTextBrowser(creditos);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 10, 231, 71));
        pushButton = new QPushButton(creditos);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 90, 95, 31));

        retranslateUi(creditos);
        QObject::connect(pushButton, SIGNAL(clicked()), creditos, SLOT(close()));

        QMetaObject::connectSlotsByName(creditos);
    } // setupUi

    void retranslateUi(QDialog *creditos)
    {
        creditos->setWindowTitle(QApplication::translate("creditos", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("creditos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Creado por: Astrid Rodr\303\255guez </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	Luis Daniel Lezama</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	Jes\303\272s Pernia</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	Miguel M\303\251ndez </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-"
                        "right:0px; -qt-block-indent:0; text-indent:0px;\">	Roberto Blanco</p></body></html>", 0));
        pushButton->setText(QApplication::translate("creditos", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class creditos: public Ui_creditos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOS_H
