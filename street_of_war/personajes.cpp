#include "personajes.h"
using namespace std;
personajes::personajes(QGraphicsItem* carr):QGraphicsPixmapItem(carr)
//personajes::personajes()
{
        pictureA.push_back(QPixmap(":/ken.1.0.png"));
        pictureA.push_back(QPixmap(":/ken.2.0.png"));
        pictureA.push_back(QPixmap(":/ken.3.0.png"));
        pictureA.push_back(QPixmap(":/ken.4.0.png"));
        pictureA.push_back(QPixmap(":/ken.5.0.png"));
        pictureA.push_back(QPixmap(":/ken.6.0.png"));
        pictureA.push_back(QPixmap(":/ken.7.0.png"));
        pictureA.push_back(QPixmap(":/ken.8.0.png"));
        pictureB.push_back(pictureA);
        pictureA.clear();
        pictureA.push_back(QPixmap(":/ryu.1.0.png"));
        pictureA.push_back(QPixmap(":/ryu.2.0.png"));
        pictureA.push_back(QPixmap(":/ryu.3.0.png"));
        pictureA.push_back(QPixmap(":/ryu.4.0.png"));
        pictureA.push_back(QPixmap(":/ryu.5.0.png"));
        pictureA.push_back(QPixmap(":/ryu.6.0.png"));
        pictureA.push_back(QPixmap(":/ryu.7.0.png"));
        pictureA.push_back(QPixmap(":/ryu.8.0.png"));
        pictureB.push_back(pictureA);
        pictureA.clear();
        pictureA.push_back(QPixmap(":/box.1.0.png"));
        pictureA.push_back(QPixmap(":/box.2.0.png"));
        pictureA.push_back(QPixmap(":/box.3.0.png"));
        pictureA.push_back(QPixmap(":/box.4.0.png"));
        pictureA.push_back(QPixmap(":/box.5.0.png"));
        pictureA.push_back(QPixmap(":/box.6.0.png"));
        pictureA.push_back(QPixmap(":/box.7.0.png"));
        pictureA.push_back(QPixmap(":/box.8.0.png"));
        pictureB.push_back(pictureA);
        pictureA.clear();
        pictureA.push_back(QPixmap(":/kil.1.0.png"));
        pictureA.push_back(QPixmap(":/kil.2.0.png"));
        pictureA.push_back(QPixmap(":/kil.3.0.png"));
        pictureA.push_back(QPixmap(":/kil.4.0.png"));
        pictureA.push_back(QPixmap(":/kil.5.0.png"));
        pictureA.push_back(QPixmap(":/kil.6.0.png"));
        pictureA.push_back(QPixmap(":/kil.7.0.png"));
        pictureA.push_back(QPixmap(":/kil.8.0.png"));
        pictureB.push_back(pictureA);
        pictureA.clear();
        pictureA.push_back(QPixmap(":/ken.1.1.png"));
        pictureA.push_back(QPixmap(":/ken.2.2.png"));
        pictureA.push_back(QPixmap(":/ken.3.1.png"));
        pictureA.push_back(QPixmap(":/ken.4.1.png"));
        pictureA.push_back(QPixmap(":/ken.5.1.png"));
        pictureA.push_back(QPixmap(":/ken.6.1.png"));
        pictureA.push_back(QPixmap(":/ken.7.1.png"));
        pictureA.push_back(QPixmap(":/ken.8.1.png"));
        pictureC.push_back(pictureA);
        pictureA.clear();
        pictureA.push_back(QPixmap(":/ryu.1.1.png"));
        pictureA.push_back(QPixmap(":/ryu.2.1.png"));
        pictureA.push_back(QPixmap(":/ryu.3.1.png"));
        pictureA.push_back(QPixmap(":/ryu.4.1.png"));
        pictureA.push_back(QPixmap(":/ryu.5.1.png"));
        pictureA.push_back(QPixmap(":/ryu.6.1.png"));
        pictureA.push_back(QPixmap(":/ryu.7.1.png"));
        pictureA.push_back(QPixmap(":/ryu.8.1.png"));
        pictureC.push_back(pictureA);
        pictureA.clear();
        pictureA.push_back(QPixmap(":/box.1.1.png"));
        pictureA.push_back(QPixmap(":/box.2.1.png"));
        pictureA.push_back(QPixmap(":/box.3.1.png"));
        pictureA.push_back(QPixmap(":/box.4.1.png"));
        pictureA.push_back(QPixmap(":/box.5.1.png"));
        pictureA.push_back(QPixmap(":/box.6.1.png"));
        pictureA.push_back(QPixmap(":/box.7.1.png"));
        pictureA.push_back(QPixmap(":/box.8.1.png"));
        pictureC.push_back(pictureA);
        pictureA.clear();
        pictureA.push_back(QPixmap(":/kil.1.1.png"));
        pictureA.push_back(QPixmap(":/kil.2.1.png"));
        pictureA.push_back(QPixmap(":/kil.3.1.png"));
        pictureA.push_back(QPixmap(":/kil.4.1.png"));
        pictureA.push_back(QPixmap(":/kil.5.1.png"));
        pictureA.push_back(QPixmap(":/kil.6.1.png"));
        pictureA.push_back(QPixmap(":/kil.7.1.png"));
        pictureA.push_back(QPixmap(":/kil.8.1.png"));
        pictureC.push_back(pictureA);
        pictureC.clear();
        //setPixmap(QPixmap(":/cal"));
        //CargarA();
}

/*
QRectF personajes::boundingRect() const
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
    pictureA.append("");
    switch (image) {
    case 0:
        setPos(100,20);
        setPixmap(QPixmap(":/Ryu-hdstance.gif"));

        break;
    case 1:setPosx(1000);
        setPos(1000,20);
        setPixmap(QPixmap(":/Ken-hdstance"));
        break;
    case 2:setPosx(1000);
        setPos(1000,20);
        setPixmap(QPixmap(":/C.4.1"));
        break;
    case 3:setPosx(1000);
        setPos(1000,20);
        setPixmap(QPixmap(":/giphy.gif"));
        break;
    default:
        break;
    }
    }

}*/

void personajes::CargarA()
{/*
    bool aux;
    aux=band;
    if(aux){
        pictureB[a][]
    }
    */
    setPos(posx,posy);
}

float personajes::getPosx() const
{
    return posx;
}

void personajes::setPosx(float value)
{
    posx = value;
    //posx=(0+)
    setPos(posx,posy);
}

float personajes::getPosy() const
{
    return posy;

}

void personajes::setPosy(float value)
{
    posy = value;
     setPos(posx,posy);
}

void personajes::mover(int ban,bool z)
{/*
    if(z){
    if(mov1){
        setPixmap(pictureB[ban][0]);
        mov1=0;
    }
    else{
        setPixmap(pictureB[ban][1]);
        mov1=1;
    }}
    else{
        if(mov2){
            setPixmap(pictureC[ban][0]);
            mov2=0;
        }
        else{
            setPixmap(pictureC[ban][1]);
            mov2=1;
        }
    }
*/
}

void personajes::cambiar(bool a, int b, int c)
{
    if(a){
        setPixmap(pictureB[0][c]);
    }
    else{
        setPixmap(pictureC[2][c]);
    }
}

int personajes::getVelx() const
{
    return velx;
}

void personajes::setVelx(int value)
{
    velx = value;
}
/*
void personajes::Patada(int b, bool c)
{
    if(c){
        setPixmap(QPixmap(pictureB[b][2]));
        setPixmap(QPixmap(pictureB[b][3]));
    }
    else{
        setPixmap(QPixmap(pictureC[b][2]));
        setPixmap(QPixmap(pictureC[b][3]));
    }
}*/
void personajes::posicion()
{
    posx=posx+(velx*3);
    posy=posy+(vely )+((acy)/2);
}
void personajes::velocidad()
{
    velx=(acx)+velx;
    vely=(acy)+vely;
}


