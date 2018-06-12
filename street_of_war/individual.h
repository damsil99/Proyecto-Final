#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include<QMainWindow>
#include <QWidget>
#include<QGraphicsScene>
#include<QKeyEvent>
#include"personajes.h"
#include<QTimer>
#include<QPushButton>
#include"principal.h"

namespace Ui {
class individual;
}

class individual : public QMainWindow
{
    Q_OBJECT

public:
    explicit individual(QWidget *parent = 0);
    void nivel1();
    void nivel2();
    void nivel3(int a);
    void nivel3();
    void nivel4(int a);
    void nivel4();
    void keyPressEvent(QKeyEvent *puss);
    void keyReleaseEvent(QKeyEvent *push);
    void setnivel(int x);
    void setvida1(int x);
    void setvida2(int x);
    ~individual();
public slots:
    void inicio();
    void anim();
    void mov();
    void opcion();
    void opcion2();
    void opcion3();
private slots:
    void on_progressBar_valueChanged(int value);

    void on_progressBar_2_valueChanged(int value);

private:
    Ui::individual *ui;
    QTimer *timer,*time2;
    QGraphicsScene* pantalla;
    //QPushButton *button,*button2;
    QGraphicsLineItem* linea;
    QGraphicsLineItem* alinea;
    QGraphicsLineItem* blinea;
    QGraphicsLineItem* clinea;
    vector<QPixmap> pictureA;
    vector<QString>pictureD;
    vector<vector<QPixmap>> pictureB;
    vector<vector<QPixmap>> pictureC;
    personajes *jug1,*jug2;
    int vida1=100,vida2=100,fuerza1=0,fuerza2=0,contsal1=0,contsal2=0,abajoaux=0,abajoaux2=0,nivel=1,aux=0,auxpelea=0,niv3=0;
    bool saltar=0,saltar2=0,mov1=1,mov2=0,patada=0,patada2=0,golpe=0,golpe2=0,abajo=0,abajo2=0,proteg=0,proteg2=0,nivel3a=0;
};

#endif // INDIVIDUAL_H
