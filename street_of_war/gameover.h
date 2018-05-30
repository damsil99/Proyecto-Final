#ifndef GAMEOVER_H
#define GAMEOVER_H
#include"personajes.h"
#include <QWidget>
#include<QGraphicsItem>

namespace Ui {
class GameOver;
}

class GameOver : public QWidget
{
    Q_OBJECT

public:
    explicit GameOver(QWidget *parent = 0);
    ~GameOver();

private:
    bool saltar=0;
    bool patada=0;
    bool golpe=0;
    personajes jug1,jug2;
    Ui::GameOver *ui;
    QString Fondo;
    QGraphicsScene* pantalla;
    QGraphicsLineItem* linea;
    QGraphicsLineItem* alinea;
    QGraphicsLineItem* blinea;
    QGraphicsLineItem* clinea;
};

#endif // GAMEOVER_H
