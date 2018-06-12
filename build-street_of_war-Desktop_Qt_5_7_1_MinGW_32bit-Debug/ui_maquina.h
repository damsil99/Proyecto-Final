/********************************************************************************
** Form generated from reading UI file 'maquina.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAQUINA_H
#define UI_MAQUINA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_maquina
{
public:
    QAction *actionGuardar;
    QAction *actionPausar;
    QAction *actionAyuda;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QPushButton *button;
    QPushButton *button2;
    QMenuBar *menubar;
    QMenu *menuOpcion;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *maquina)
    {
        if (maquina->objectName().isEmpty())
            maquina->setObjectName(QStringLiteral("maquina"));
        maquina->resize(1200, 600);
        actionGuardar = new QAction(maquina);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        actionPausar = new QAction(maquina);
        actionPausar->setObjectName(QStringLiteral("actionPausar"));
        actionAyuda = new QAction(maquina);
        actionAyuda->setObjectName(QStringLiteral("actionAyuda"));
        centralwidget = new QWidget(maquina);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1200, 600));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(60, 30, 300, 25));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(830, 30, 300, 25));
        progressBar_2->setValue(24);
        button = new QPushButton(centralwidget);
        button->setObjectName(QStringLiteral("button"));
        button->setGeometry(QRect(320, 110, 75, 23));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(330, 180, 75, 23));
        maquina->setCentralWidget(centralwidget);
        menubar = new QMenuBar(maquina);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuOpcion = new QMenu(menubar);
        menuOpcion->setObjectName(QStringLiteral("menuOpcion"));
        maquina->setMenuBar(menubar);
        statusbar = new QStatusBar(maquina);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        maquina->setStatusBar(statusbar);

        menubar->addAction(menuOpcion->menuAction());
        menuOpcion->addAction(actionGuardar);
        menuOpcion->addAction(actionPausar);
        menuOpcion->addAction(actionAyuda);

        retranslateUi(maquina);

        QMetaObject::connectSlotsByName(maquina);
    } // setupUi

    void retranslateUi(QMainWindow *maquina)
    {
        maquina->setWindowTitle(QApplication::translate("maquina", "MainWindow", Q_NULLPTR));
        actionGuardar->setText(QApplication::translate("maquina", "Guardar", Q_NULLPTR));
        actionPausar->setText(QApplication::translate("maquina", "Pausar", Q_NULLPTR));
        actionAyuda->setText(QApplication::translate("maquina", "Ayuda", Q_NULLPTR));
        button->setText(QApplication::translate("maquina", "PushButton", Q_NULLPTR));
        button2->setText(QApplication::translate("maquina", "PushButton", Q_NULLPTR));
        menuOpcion->setTitle(QApplication::translate("maquina", "Opcion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class maquina: public Ui_maquina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAQUINA_H
