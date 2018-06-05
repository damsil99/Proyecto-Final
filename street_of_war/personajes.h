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
#include<vector>
using namespace std;
class personajes:public QObject,
                 public QGraphicsPixmapItem

{
    Q_OBJECT

public:
    //QRectF boundingRect() const;
    //void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    personajes(QGraphicsItem* carr = 0);
    void CargarA();
    void posicion();
    void velocidad();
    void aceleracion();
    float getPosx() const;
    void setPosx(float value);

    float getPosy() const;
    void setPosy(float value);
    void mover(int ban,bool c);
   void cambiar(bool a,int b,int c);

   int getVelx() const;
   void setVelx(int value);

private:
   vector<QPixmap> pictureA;
   vector<vector<QPixmap>> pictureB;
    vector<vector<QPixmap>> pictureC;
    float posx=0;
    float posy=0;
    int resistencia;
    int velx=0;
    int vely=0;
    int acx=0,acy=0;
    int fuerza;
    bool band=1,mov1=1,mov2=1;

};

#endif // PERSONAJES_H
