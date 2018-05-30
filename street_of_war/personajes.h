#ifndef PERSONAJES_H
#define PERSONAJES_H
#include<iostream>
#include <QPainter>
#include<QGraphicsItem>
#include <QMainWindow>

using namespace std;
class personajes
{
public:
    personajes();
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);

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
    //string imagen;
    QList<string>MovPers;

};

#endif // PERSONAJES_H
