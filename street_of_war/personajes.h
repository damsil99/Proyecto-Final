#ifndef PERSONAJES_H
#define PERSONAJES_H
#include<iostream>
#include <QPainter>
#include <QGraphicsScene>
#include<QGraphicsItem>
#include <QGraphicsRectItem>
#include <QMainWindow>
#include <QObject>
#include <QGraphicsPixmapItem>
class personajes:public QObject,
                 public QGraphicsPixmapItem

{
    Q_OBJECT

public:
    //QRectF boundingRect() const;
    //void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    personajes(QGraphicsItem* carr = 0);
    void CargarA();

    float getPosx() const;
    void setPosx(float value);

    float getPosy() const;
    void setPosy(float value);

    int getResistencia() const;
    void setResistencia(int value);

    int getFuerza() const;
    void setFuerza(int value);
    void Saltar();
    void Golpe();
    void Patada();
private:
    float posx=0;
    float posy=0;
    int resistencia;
    int fuerza;
    bool tipj=1;
    //string imagen;
    //QList<string>MovPers;

};

#endif // PERSONAJES_H
