#include "ventana1.h"
#include "ui_ventana1.h"
#include "principal.h"
#include"individual.h"

ventana1::ventana1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ventana1)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(0,0,499,348);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    //inicio();
}

void ventana1::inicio()
{
    if(ind){
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/level1.jpg")));
        QPushButton *button = new QPushButton("&   START   ", this);
        button->setGeometry(210,300,80,20);
        button->setStyleSheet("background-color: red");
        button->show();
        connect(button,SIGNAL(clicked(bool)),this,SLOT(start()));
    }else{
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/jugador1.jpeg")));
        QSize size(70, 70);
        QMovie *movie = new QMovie(":/Ken-hdstance.gif");
        QMovie *movie2 = new QMovie(":/Ryu-hdstance.gif");
        QMovie *movie3 = new QMovie(":/Guile-hdstance.gif");
        QMovie *movie4 = new QMovie(":/C.4.1.gif");
        movie->setScaledSize(size);
        movie2->setScaledSize(size);
        movie3->setScaledSize(size);
        movie4->setScaledSize(size);
        ui->gif1->setMovie(movie);
        ui->gif2->setMovie(movie2);
        ui->gif3->setMovie(movie3);
        ui->gif4->setMovie(movie4);
        movie->start();
        movie2->start();
        movie3->start();
        movie4->start();
        //ui->gif1->setPos();
        connect(ui->kent,SIGNAL(clicked(bool)),this,SLOT(jugador2()));
        connect(ui->ryu,SIGNAL(clicked(bool)),this,SLOT(jugador1()));
        connect(ui->killer,SIGNAL(clicked(bool)),this,SLOT(jugador3()));
        connect(ui->sold,SIGNAL(clicked(bool)),this,SLOT(jugador4()));}
}


ventana1::~ventana1()
{
    delete ui;
}
void ventana1::jugador1(){
    if(band){
        band=0;
        GameOver *M =new GameOver;
        M->setCarcjug(aux);
        M->setCarcjug2(0);
        M->setZ(":/Escenario1.png");//Se Crea la variable MainWindow dentro de la función, siendo así una variable local
        M->inicio();
        M->show();                        //Se muestra el MainWindow
        close();
    }
    else{
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/fondo2")));
        aux=0;
        band=1;
    }
}
void ventana1::jugador2(){
    if(band){
        //ui->
        band=0;
        GameOver *M =new GameOver;
        M->setCarcjug(aux);
        M->setCarcjug2(1);
        M->setZ(":/num2.png");//Se Crea la variable MainWindow dentro de la función, siendo así una variable local
        M->inicio();
        M->show();                        //Se muestra el MainWindow
        close();

    }
    else{
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/fondo2")));
    aux=1;
    band=1;
    }
}
void ventana1::jugador3(){
    if(band){
        band=0;
        GameOver *M =new GameOver;
        M->setCarcjug(aux);
        M->setCarcjug2(2);//Se Crea la variable MainWindow dentro de la función, siendo así una variable local
        M->setZ(":/num3.png");
        M->inicio();
        M->show();                        //Se muestra el MainWindow
        close();

    }
    else{
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/fondo2")));
    aux=2;
    band=1;
    }
}
void ventana1::jugador4(){
    if(band){
        band=0;
        GameOver *M =new GameOver;
        M->setCarcjug(aux);
        M->setZ(":/num1.png");//Se Crea la variable MainWindow dentro de la función, siendo así una variable local
        M->setCarcjug2(3);
        M->inicio();
        M->show();                        //Se muestra el MainWindow
        close();

    }
    else{
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/fondo2.jpeg")));

    aux=3;
    band=1;
    }
}
void ventana1::start(){
    individual *N =new individual;
    N->show();
    close();
}

void ventana1::setInd(bool value)
{
    ind = value;
    inicio();
}
void ventana1::on_volver_clicked()
{
    principal *M =new principal;       //Se Crea la variable MainWindow dentro de la función, siendo así una variable local
    M->show();                        //Se muestra el MainWindow
    close();
}

