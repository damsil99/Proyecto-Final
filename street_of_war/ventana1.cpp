#include "ventana1.h"
#include "ui_ventana1.h"
#include "principal.h"

ventana1::ventana1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ventana1)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(0,0,350,250);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/FondoStreet1.png")));
    QSize size(70, 70);
    QMovie *movie = new QMovie(":/Ryu-hdstance.gif");
    QMovie *movie2 = new QMovie(":/Ken-hdstance.gif");
    QMovie *movie3 = new QMovie(":/Guile-hdstance.gif");
    QMovie *movie4 = new QMovie(":/giphy.gif");
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
    connect(ui->kent,SIGNAL(clicked(bool)),this,SLOT(jugador1()));
    connect(ui->killer,SIGNAL(clicked(bool)),this,SLOT(jugador2()));
    connect(ui->ryu,SIGNAL(clicked(bool)),this,SLOT(jugador3()));
    connect(ui->sold,SIGNAL(clicked(bool)),this,SLOT(jugador4()));
}


ventana1::~ventana1()
{
    delete ui;
}
void ventana1::jugador1(){
    if(band){
        //ui->
        band=0;
        close();
    }
    else{
    on_textBrowser_highlighted("ingresa el segundo personaje ");
   // ui->
    }
}
void ventana1::jugador2(){
    on_textBrowser_highlighted("ingresa el segundo personaje ");
}
void ventana1::jugador3(){
    on_textBrowser_highlighted("ingresa el segundo personaje ");
}
void ventana1::jugador4(){
    on_textBrowser_highlighted("ingresa el segundo personaje ");
}
void ventana1::on_volver_clicked()
{
    principal *M =new principal;       //Se Crea la variable MainWindow dentro de la función, siendo así una variable local
    M->show();                        //Se muestra el MainWindow
    close();
}

void ventana1::on_textBrowser_highlighted(const QString &arg1)
{
    ui->textBrowser->append(arg1);
}
