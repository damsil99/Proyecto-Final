/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *mult;
    QPushButton *ind;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *principal)
    {
        if (principal->objectName().isEmpty())
            principal->setObjectName(QStringLiteral("principal"));
        principal->resize(551, 392);
        centralWidget = new QWidget(principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(70, 40, 358, 265));
        mult = new QPushButton(centralWidget);
        mult->setObjectName(QStringLiteral("mult"));
        mult->setGeometry(QRect(200, 140, 85, 25));
        ind = new QPushButton(centralWidget);
        ind->setObjectName(QStringLiteral("ind"));
        ind->setGeometry(QRect(200, 180, 85, 25));
        principal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(principal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 551, 21));
        principal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(principal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        principal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(principal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        principal->setStatusBar(statusBar);

        retranslateUi(principal);

        QMetaObject::connectSlotsByName(principal);
    } // setupUi

    void retranslateUi(QMainWindow *principal)
    {
        principal->setWindowTitle(QApplication::translate("principal", "principal", Q_NULLPTR));
        mult->setText(QApplication::translate("principal", "Multijugador", Q_NULLPTR));
        ind->setText(QApplication::translate("principal", "Individual", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal: public Ui_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
