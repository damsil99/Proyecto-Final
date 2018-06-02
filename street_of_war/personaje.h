#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include<QGraphicsItem>

class Personaje: public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Personaje(QGraphicsItem* carr = 0);
};

#endif // PERSONAJE_H
