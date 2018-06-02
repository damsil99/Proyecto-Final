/********************************************************************************
** Form generated from reading UI file 'ventana1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA1_H
#define UI_VENTANA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana1
{
public:
    QGraphicsView *graphicsView;
    QPushButton *ryu;
    QPushButton *kent;
    QPushButton *sold;
    QPushButton *killer;
    QPushButton *volver;
    QLabel *gif1;
    QLabel *gif2;
    QLabel *gif3;
    QLabel *gif4;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ventana1)
    {
        if (ventana1->objectName().isEmpty())
            ventana1->setObjectName(QStringLiteral("ventana1"));
        ventana1->resize(400, 300);
        graphicsView = new QGraphicsView(ventana1);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 10, 361, 271));
        ryu = new QPushButton(ventana1);
        ryu->setObjectName(QStringLiteral("ryu"));
        ryu->setGeometry(QRect(60, 90, 70, 70));
        ryu->setFlat(true);
        kent = new QPushButton(ventana1);
        kent->setObjectName(QStringLiteral("kent"));
        kent->setGeometry(QRect(200, 90, 70, 70));
        kent->setFlat(true);
        sold = new QPushButton(ventana1);
        sold->setObjectName(QStringLiteral("sold"));
        sold->setGeometry(QRect(200, 180, 70, 70));
        sold->setFlat(true);
        killer = new QPushButton(ventana1);
        killer->setObjectName(QStringLiteral("killer"));
        killer->setGeometry(QRect(60, 180, 70, 70));
        killer->setFlat(true);
        volver = new QPushButton(ventana1);
        volver->setObjectName(QStringLiteral("volver"));
        volver->setGeometry(QRect(280, 220, 75, 23));
        gif1 = new QLabel(ventana1);
        gif1->setObjectName(QStringLiteral("gif1"));
        gif1->setGeometry(QRect(60, 90, 70, 70));
        gif2 = new QLabel(ventana1);
        gif2->setObjectName(QStringLiteral("gif2"));
        gif2->setGeometry(QRect(200, 90, 70, 70));
        gif3 = new QLabel(ventana1);
        gif3->setObjectName(QStringLiteral("gif3"));
        gif3->setGeometry(QRect(70, 170, 70, 70));
        gif4 = new QLabel(ventana1);
        gif4->setObjectName(QStringLiteral("gif4"));
        gif4->setGeometry(QRect(200, 180, 70, 70));
        textBrowser = new QTextBrowser(ventana1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 20, 256, 51));
        graphicsView->raise();
        volver->raise();
        gif1->raise();
        gif3->raise();
        gif4->raise();
        textBrowser->raise();
        gif2->raise();
        kent->raise();
        ryu->raise();
        killer->raise();
        sold->raise();

        retranslateUi(ventana1);

        QMetaObject::connectSlotsByName(ventana1);
    } // setupUi

    void retranslateUi(QWidget *ventana1)
    {
        ventana1->setWindowTitle(QApplication::translate("ventana1", "Form", Q_NULLPTR));
        ryu->setText(QString());
        kent->setText(QString());
        sold->setText(QString());
        killer->setText(QString());
        volver->setText(QApplication::translate("ventana1", "Volver", Q_NULLPTR));
        gif1->setText(QString());
        gif2->setText(QString());
        gif3->setText(QString());
        gif4->setText(QString());
        textBrowser->setHtml(QApplication::translate("ventana1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Seleccione el primer personaje</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventana1: public Ui_ventana1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA1_H
