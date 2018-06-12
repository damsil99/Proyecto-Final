/********************************************************************************
** Form generated from reading UI file 'cargar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARGAR_H
#define UI_CARGAR_H

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

class Ui_Cargar
{
public:
    QGraphicsView *graphicsView;
    QLabel *jugador1;
    QLabel *jugador2;
    QLabel *jugador3;
    QLabel *jugador4;
    QPushButton *boton1;
    QPushButton *boton2;
    QPushButton *boton3;
    QPushButton *boton4;
    QPushButton *nuevo;

    void setupUi(QWidget *Cargar)
    {
        if (Cargar->objectName().isEmpty())
            Cargar->setObjectName(QStringLiteral("Cargar"));
        Cargar->resize(700, 450);
        graphicsView = new QGraphicsView(Cargar);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 700, 450));
        jugador1 = new QLabel(Cargar);
        jugador1->setObjectName(QStringLiteral("jugador1"));
        jugador1->setGeometry(QRect(150, 150, 100, 100));
        jugador2 = new QLabel(Cargar);
        jugador2->setObjectName(QStringLiteral("jugador2"));
        jugador2->setGeometry(QRect(460, 150, 100, 100));
        jugador3 = new QLabel(Cargar);
        jugador3->setObjectName(QStringLiteral("jugador3"));
        jugador3->setGeometry(QRect(150, 310, 100, 100));
        jugador4 = new QLabel(Cargar);
        jugador4->setObjectName(QStringLiteral("jugador4"));
        jugador4->setGeometry(QRect(460, 310, 100, 100));
        boton1 = new QPushButton(Cargar);
        boton1->setObjectName(QStringLiteral("boton1"));
        boton1->setGeometry(QRect(150, 150, 100, 100));
        boton1->setAutoDefault(false);
        boton1->setFlat(true);
        boton2 = new QPushButton(Cargar);
        boton2->setObjectName(QStringLiteral("boton2"));
        boton2->setGeometry(QRect(460, 150, 100, 100));
        boton2->setFlat(true);
        boton3 = new QPushButton(Cargar);
        boton3->setObjectName(QStringLiteral("boton3"));
        boton3->setGeometry(QRect(150, 310, 100, 100));
        boton3->setFlat(true);
        boton4 = new QPushButton(Cargar);
        boton4->setObjectName(QStringLiteral("boton4"));
        boton4->setGeometry(QRect(460, 310, 100, 100));
        boton4->setFlat(true);
        nuevo = new QPushButton(Cargar);
        nuevo->setObjectName(QStringLiteral("nuevo"));
        nuevo->setGeometry(QRect(30, 30, 101, 31));

        retranslateUi(Cargar);

        boton1->setDefault(false);
        nuevo->setDefault(true);


        QMetaObject::connectSlotsByName(Cargar);
    } // setupUi

    void retranslateUi(QWidget *Cargar)
    {
        Cargar->setWindowTitle(QApplication::translate("Cargar", "Form", Q_NULLPTR));
        jugador1->setText(QString());
        jugador2->setText(QString());
        jugador3->setText(QString());
        jugador4->setText(QString());
        boton1->setText(QString());
        boton2->setText(QString());
        boton3->setText(QString());
        boton4->setText(QString());
        nuevo->setText(QApplication::translate("Cargar", "Nuevo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cargar: public Ui_Cargar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARGAR_H
