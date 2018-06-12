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

    void setupUi(QWidget *ventana1)
    {
        if (ventana1->objectName().isEmpty())
            ventana1->setObjectName(QStringLiteral("ventana1"));
        ventana1->resize(508, 401);
        graphicsView = new QGraphicsView(ventana1);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 506, 400));
        ryu = new QPushButton(ventana1);
        ryu->setObjectName(QStringLiteral("ryu"));
        ryu->setGeometry(QRect(60, 90, 70, 70));
        ryu->setFlat(true);
        kent = new QPushButton(ventana1);
        kent->setObjectName(QStringLiteral("kent"));
        kent->setGeometry(QRect(350, 100, 70, 70));
        kent->setFlat(true);
        sold = new QPushButton(ventana1);
        sold->setObjectName(QStringLiteral("sold"));
        sold->setGeometry(QRect(350, 220, 70, 70));
        sold->setFlat(true);
        killer = new QPushButton(ventana1);
        killer->setObjectName(QStringLiteral("killer"));
        killer->setGeometry(QRect(70, 220, 70, 70));
        killer->setFlat(true);
        volver = new QPushButton(ventana1);
        volver->setObjectName(QStringLiteral("volver"));
        volver->setGeometry(QRect(400, 310, 75, 23));
        gif1 = new QLabel(ventana1);
        gif1->setObjectName(QStringLiteral("gif1"));
        gif1->setGeometry(QRect(60, 90, 70, 70));
        gif2 = new QLabel(ventana1);
        gif2->setObjectName(QStringLiteral("gif2"));
        gif2->setGeometry(QRect(350, 100, 70, 70));
        gif3 = new QLabel(ventana1);
        gif3->setObjectName(QStringLiteral("gif3"));
        gif3->setGeometry(QRect(70, 220, 70, 70));
        gif4 = new QLabel(ventana1);
        gif4->setObjectName(QStringLiteral("gif4"));
        gif4->setGeometry(QRect(350, 220, 70, 70));
        graphicsView->raise();
        volver->raise();
        gif1->raise();
        gif3->raise();
        gif4->raise();
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
    } // retranslateUi

};

namespace Ui {
    class ventana1: public Ui_ventana1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA1_H
