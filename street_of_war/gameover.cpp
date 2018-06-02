#include "gameover.h"
#include "ui_gameover.h"
#include <QDebug>

GameOver::GameOver(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameOver)
{
    ui->setupUi(this);
    pantalla=new QGraphicsScene;
    ui->graphicsView->setScene(pantalla);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    //fondo=":/calle.png";
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/Escenario1.png")));
    //ui->graphicsView->scale(1,-1);
    //ui->graphicsView->adjustSize();
    pantalla->setSceneRect(0,0,1600,600);
    //QPen lapiz=QPen (Qt::black);
    /*QLineF linea(pantalla->sceneRect().topLeft(),pantalla->sceneRect().topRight());
    QLineF alinea(pantalla->sceneRect().topLeft(),pantalla->sceneRect().bottomLeft());
    QLineF blinea(pantalla->sceneRect().topRight(),pantalla->sceneRect().bottomRight());
    QLineF clinea(pantalla->sceneRect().bottomLeft(),pantalla->sceneRect().bottomRight());*/

    linea=new QGraphicsLineItem(0,0,1600,0);
    alinea=new QGraphicsLineItem(0,0,0,600);
    blinea=new QGraphicsLineItem(1600,0,1600,600);
    clinea=new QGraphicsLineItem(0,600,1600,600);
    pantalla->addItem(linea);//,lapiz);
    pantalla->addItem(alinea);//,lapiz);
    pantalla->addItem(blinea);//,lapiz);
    pantalla->addItem(clinea);//,lapiz);
    //jug1(new personajes);
    //pantalla->setSceneRect(20,30.70,70);
    /*QPainter *painter=new QPainter();
    QPixmap pixmap;
    pixmap.load(":/giphy.gif");
    painter->drawPixmap(pantalla->sceneRect(),pixmap,pixmap.rect());
    pantalla->drawBackground(painter,pantalla->sceneRect());
    //pantalla->addItem(jug1);*/
    jug1=new personajes;
    pantalla->addItem(jug1);
    pantalla->setFocusItem(jug1);
    jug2=new personajes;
    pantalla->addItem(jug2);
    pantalla->setFocusItem(jug2);
}

GameOver::~GameOver()
{

    delete ui;
}

QString GameOver::getFondo() const
{
    return Fondo;
}

void GameOver::setFondo(const QString &value)
{
    Fondo = value;
}

void GameOver::keyPressEvent(QKeyEvent *puss){
    if(puss->key()==Qt::Key_A)jug1->setPosx(jug1->getPosx()-4);
    if(puss->key()==Qt::Key_D)jug1->setPosx(jug1->getPosx()+4);
    if(puss->key()==Qt::Key_W)jug1->setPosy(jug1->getPosy()-4);
    if(puss->key()==Qt::Key_J)jug2->setPosx(jug2->getPosx()-4);
    if(puss->key()==Qt::Key_L)jug2->setPosx(jug2->getPosx()+4);
    if(puss->key()==Qt::Key_I)jug2->setPosy(jug2->getPosy()-4);
    jug1->CargarA();
    jug2->CargarA();
}
