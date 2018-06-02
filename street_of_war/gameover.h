#ifndef GAMEOVER_H
#define GAMEOVER_H
#include"personajes.h"
#include <QWidget>
#include<QGraphicsItem>
#include <QGraphicsScene>
#include<QKeyEvent>
//#include<Q>

namespace Ui {
class GameOver;
}

class GameOver : public QMainWindow
                // public QGraphicsScene //, public QGraphicsItem
{
    Q_OBJECT

public:
    explicit GameOver(QWidget *parent = 0);
    ~GameOver();

    QString getFondo() const;
    void setFondo(const QString &value);
    void keyPressEvent(QKeyEvent *puss);

private:
    bool saltar=0;
    bool patada=0;
    bool golpe=0;
    personajes *jug1,*jug2;
    Ui::GameOver *ui;
    QString Fondo;
    QChar fondo;

    QGraphicsScene* pantalla;
    QGraphicsLineItem* linea;
    QGraphicsLineItem* alinea;
    QGraphicsLineItem* blinea;
    QGraphicsLineItem* clinea;
};

#endif // GAMEOVER_H
