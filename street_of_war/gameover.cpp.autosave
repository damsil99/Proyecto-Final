#include "gameover.h"
#include "ui_gameover.h"

GameOver::GameOver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameOver)
{
    ui->setupUi(this);
    pantalla=new QGraphicsScene;
    ui->graphicsView->setScene(pantalla);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/"+Fondo)));
    ui->graphicsView->scale(1,-1);
    pantalla->setSceneRect(0,0,1600,800);
    //QPen lapiz=QPen (Qt::black);
    /*QLineF linea(pantalla->sceneRect().topLeft(),pantalla->sceneRect().topRight());
    QLineF alinea(pantalla->sceneRect().topLeft(),pantalla->sceneRect().bottomLeft());
    QLineF blinea(pantalla->sceneRect().topRight(),pantalla->sceneRect().bottomRight());
    QLineF clinea(pantalla->sceneRect().bottomLeft(),pantalla->sceneRect().bottomRight());*/

    linea=new QGraphicsLineItem(0,0,1200,0);
    alinea=new QGraphicsLineItem(0,0,0,600);
    blinea=new QGraphicsLineItem(1200,0,1200,600);
    clinea=new QGraphicsLineItem(0,600,1200,600);
    pantalla->addItem(linea);//,lapiz);
    pantalla->addItem(alinea);//,lapiz);
    pantalla->addItem(blinea);//,lapiz);
    pantalla->addItem(clinea);//,lapiz);
}

GameOver::~GameOver()
{
    delete ui;
}
