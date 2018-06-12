#include "principal.h"
#include "ui_principal.h"
#include"cargar.h"

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
    N = new ventana1();
    scene=new QGraphicsScene(0,0,350,250);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/FondoStreet1.png")));
}

principal::~principal()
{
    delete ui;
}

/*void principal::on_ind_clicked()
{
    N->show();
    close();
}*/

void principal::on_mult_clicked()
{
    N->setInd(0);
    N->show();

    close();
}

void principal::on_ind_clicked()
{
    //N->setInd(1);
    //N->show();
    Cargar *A=new Cargar;
    A->show();
    close();
}
