#include "personajes.h"

personajes::personajes(QGraphicsItem* carr):QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/Ryu-hdstance"));
    if(tipj){
        setPos(100,20);
        tipj=0;
    }

    else{
        setPosx(1000);
        setPos(1000,20);
        tipj=1;
    }

}

/*QRectF personajes::boundingRect() const
{
    return QRect(50,20,60,100);
}

void personajes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkBlue);
    painter->drawEllipse(boundingRect());

    QPixmap pixmap;
    pixmap.load(":/giphy.gif");
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
    //if(cont==0){
        //cont=1;
    //}
    /*else{
        pixmap.load(":/war");
        painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
        cont=0;
    } *

}*/

void personajes::CargarA()
{
    setPos(posx,posy);
}

float personajes::getPosx() const
{
    return posx;
}

void personajes::setPosx(float value)
{
    posx = value;
}

float personajes::getPosy() const
{
    return posy;
}

void personajes::setPosy(float value)
{
    posy = value;
}

int personajes::getResistencia() const
{
    return resistencia;
}

void personajes::setResistencia(int value)
{
    resistencia = value;
}

int personajes::getFuerza() const
{
    return fuerza;
}

void personajes::setFuerza(int value)
{
    fuerza = value;
}
