/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QGraphicsView *graphicsView;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;

    void setupUi(QWidget *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName(QStringLiteral("GameOver"));
        GameOver->resize(1210, 610);
        graphicsView = new QGraphicsView(GameOver);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(5, 21, 1200, 600));
        progressBar = new QProgressBar(GameOver);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(30, 30, 270, 25));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(GameOver);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(800, 30, 270, 25));
        progressBar_2->setValue(24);
        lcdNumber = new QLCDNumber(GameOver);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(140, 80, 64, 41));
        lcdNumber_2 = new QLCDNumber(GameOver);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(680, 110, 64, 23));

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QWidget *GameOver)
    {
        GameOver->setWindowTitle(QApplication::translate("GameOver", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
