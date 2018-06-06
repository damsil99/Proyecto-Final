/********************************************************************************
** Form generated from reading UI file 'individual.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDIVIDUAL_H
#define UI_INDIVIDUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_individual
{
public:
    QGraphicsView *graphicsView;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;

    void setupUi(QWidget *individual)
    {
        if (individual->objectName().isEmpty())
            individual->setObjectName(QStringLiteral("individual"));
        individual->resize(1200, 600);
        graphicsView = new QGraphicsView(individual);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1200, 600));
        progressBar = new QProgressBar(individual);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(60, 30, 300, 25));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(individual);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(860, 30, 300, 25));
        progressBar_2->setValue(24);

        retranslateUi(individual);

        QMetaObject::connectSlotsByName(individual);
    } // setupUi

    void retranslateUi(QWidget *individual)
    {
        individual->setWindowTitle(QApplication::translate("individual", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class individual: public Ui_individual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDIVIDUAL_H
