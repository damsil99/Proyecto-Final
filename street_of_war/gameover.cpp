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

    //ui->graphicsView->scale(1,-1);
    //ui->graphicsView->adjustSize();
    pantalla->setSceneRect(0,0,1200,600);
    
    linea=new QGraphicsLineItem(0,0,1200,0);
    alinea=new QGraphicsLineItem(0,0,0,600);
    blinea=new QGraphicsLineItem(1200,0,1200,600);
    clinea=new QGraphicsLineItem(0,600,1200,600);
    pantalla->addItem(linea);//,lapiz);
    pantalla->addItem(alinea);//,lapiz);
    pantalla->addItem(blinea);//,lapiz);
    pantalla->addItem(clinea);//,lapiz);
    time2=new QTimer();
    connect(time2,SIGNAL(timeout()),this,SLOT(anim()));
    time2->start(100);
    time=new QTimer;
    connect(time,SIGNAL(timeout()),this,SLOT(mov()));
    time->start(500);


}

GameOver::~GameOver()
{

    delete ui;
}


void GameOver::inicio()
{
ui->graphicsView->setBackgroundBrush(QBrush(QImage(Z,"nullptr")));
jug1=new personajes;
jug1->setPosx(20);
jug1->setPosy(350);
jug1->setX(20);
jug1->setY(350);
pantalla->addItem(jug1);
pantalla->setFocusItem(jug1);
jug2=new personajes;
jug2->setPosx(910);
jug2->setPosy(350);
jug2->setX(910);
jug2->setY(350);
pantalla->addItem(jug2);
pantalla->setFocusItem(jug2);
on_progressBar_valueChanged(100);
on_progressBar_2_valueChanged(100);
//time2->stop();
}
//void GameOver::keyReleaseEvent(QKeyEvent *event){

//}
void GameOver::keyPressEvent(QKeyEvent *puss){
   // if(puss->key()==Qt::Key_D && puss->key()==Qt::Key_J){
//        jug2->setPosx(jug2->getPosx()-4);
//        jug1->setPosx(jug1->getPosx()+4);
//    }
//    if(puss->key()==Qt::Key_A && puss->key()==Qt::Key_J){
//        jug1->setPosx(jug1->getPosx()-4);
//        jug2->setPosx(jug2->getPosx()-4);
//    }
//    if(puss->key()==Qt::Key_A && puss->key()==Qt::Key_L){
//        jug1->setPosx(jug1->getPosx()-4);
//        jug2->setPosx(jug2->getPosx()+4);
//    }
//    if(puss->key()==Qt::Key_A && puss->key()==Qt::Key_I){
//        jug1->setPosx(jug1->getPosx()-4);
//        saltar2=1;
//    }
//    if(puss->key()==Qt::Key_A && puss->key()==Qt::Key_W){
//        jug1->setPosx(jug1->getPosx()-4);
//        saltar=1;
//    }
//    if(puss->key()==Qt::Key_D && puss->key()==Qt::Key_W){
//        jug1->setPosx(jug1->getPosx()+4);
//        saltar=1;
//    }
//    if(puss->key()==Qt::Key_I && puss->key()==Qt::Key_J){
//        jug2->setPosx(jug2->getPosx()-4);
//        saltar2=1;
//    }
//    if(puss->key()==Qt::Key_I && puss->key()==Qt::Key_L){
//        jug2->setPosx(jug2->getPosx()+4);
//        saltar2=1;
//    }
    if(!jug1->collidesWithItem(jug2)){// ||!jug1->collidesWithItem(jug2) ||!jug1->collidesWithItem(jug2))
        if(puss->key()==Qt::Key_D)jug1->setVelx(3);
        if(puss->key()==Qt::Key_J)jug2->setVelx(-3);
    }if(!jug1->collidesWithItem(alinea))if(puss->key()==Qt::Key_A)jug1->setVelx(-3);
    if(!jug1->collidesWithItem(blinea))if(puss->key()==Qt::Key_L)jug2->setVelx(3);
    if(puss->key()==Qt::Key_W)saltar=1;  
    if(puss->key()==Qt::Key_I)saltar2=1;
    if(puss->key()==Qt::Key_Q)patada=1;
    if(puss->key()==Qt::Key_U)patada2=1;
    if(puss->key()==Qt::Key_E)golpe=1;
    if(puss->key()==Qt::Key_O)golpe2=1;
    if(puss->key()==Qt::Key_S)abajo=1;
    if(puss->key()==Qt::Key_K)abajo2=1;
    jug1->posicion();
    jug2->posicion();
    jug1->CargarA();
    jug2->CargarA();
}
void GameOver::keyReleaseEvent(QKeyEvent *push){
    if(push->key()==Qt::Key_A)jug1->setVelx(0);
    if(push->key()==Qt::Key_D)jug1->setVelx(0);
    if(push->key()==Qt::Key_J)jug2->setVelx(0);
    if(push->key()==Qt::Key_L)jug1->setVelx(0);
}


void GameOver::anim()
{

    if(saltar){
        mov1=0;
        abajo=0;
        contsal1++;
        jug1->posicion();
        if(contsal1<5){
        jug1->setPosy(jug1->getPosy()-30);
        jug1->setPos(jug1->getPosx(),jug1->getPosy());}
        if(contsal1>5){
            jug1->setPosy(jug1->getPosy()+30);
            jug1->setPos(jug1->getPosx(),jug1->getPosy());
            if(contsal1==9){
                saltar=0;
                contsal1=0;
                mov1=1;
            }
        }
    }
    if(saltar2){
        mov2=0;
        abajo2=0;
        jug2->posicion();
        contsal2++;
        if(contsal2<6){
            jug2->setPosy(jug2->getPosy()-30);
            jug2->setPos(jug2->getPosx(),jug2->getPosy());}
        if(contsal2>6){
            jug2->setPosy(jug2->getPosy()+30);
            jug2->setPos(jug2->getPosx(),jug2->getPosy());
            if(contsal2==11){
                saltar2=0;
                contsal2=0;
                mov2=1;
            }
        }
    }
    if(patada){
        //mov1=0;
        jug1->setPixmap(QPixmap(":/ken.3.0.png"));
        if(jug1->collidesWithItem(jug2)){
            if(proteg2){
                vida2-=2;
            }else {
            if(patada2||golpe2){
                vida2-=4;
            }
            if(!patada2 && !golpe2 && !proteg2){
                vida2-=6;
            }}

        }
        on_progressBar_2_valueChanged(vida2);
        patada=0;

    }
    if(patada2){
        //mov2=0;
        jug2->setPos(jug2->getPosx()-15,jug2->getPosy());
        jug2->setPixmap(QPixmap(":/box.3.1.png"));
        if(jug2->collidesWithItem(jug1)){
            jug2->setPos(jug2->getPosx()+3,jug2->getPosy());
            if(proteg){
                vida1-=2;
            }else{
            if(patada||golpe){
                vida1-=4;
            }
            if(!patada && !golpe && !proteg){
                vida1-=8;
            }
            }}
        patada2=0;
        on_progressBar_valueChanged(vida1);
        }
    if(golpe){
        jug1->setPixmap(QPixmap(":/ken.4.0.png"));
        if(jug1->collidesWithItem(jug2)){
            if(proteg2){
                vida2-=2;
            }
            else{
            if(patada2||golpe2){
                vida2-=4;
            }
            if(!patada2 && !golpe2 && !proteg2){
                vida2-=6;
            }}
        }
        golpe=0;
        on_progressBar_2_valueChanged(vida2);
    }
    if(golpe2){
        jug2->setPos(jug2->getPosx()-15,jug2->getPosy());
        jug2->setPixmap(QPixmap(":/box.4.1.png"));
        if(jug2->collidesWithItem(jug1)){
            jug2->setPos(jug2->getPosx(),jug2->getPosy());
            if(proteg){
                vida1-=1;
            }
            else{
            if(patada||golpe){
                vida1-=4;
            }
            if(!patada && !golpe && !proteg){
                vida1-=8;
            }}
        }
        golpe2=0;
        on_progressBar_valueChanged(vida1);
    }
    if(abajo){
        mov1=0;
        saltar=0;
        jug1->setPixmap(QPixmap(":/ken.5.0.png"));
        jug1->setPos(jug1->getPosx(),jug1->getPosy()+30);
        abajoaux+=1;
        if(abajoaux==4){
            abajoaux=0;
            abajo=0;
            mov1=1;
            jug1->setPos(jug1->getPosx(),jug1->getPosy());
        }
    }
    if(abajo2){
        mov2=0;
        saltar2=0;
        jug2->setPixmap(QPixmap(":/box.5.1.png"));
        jug2->setPos(jug2->getPosx(),jug2->getPosy()+30);
        abajoaux2+=1;
        if(abajoaux2==4){
            abajoaux2=0;
            abajo2=0;
            mov2=1;
            jug2->setPos(jug2->getPosx(),jug2->getPosy());
        }
    }
    /*
    if(proteg){}
    if(proteg2){}*/
    on_progressBar_2_valueChanged(vida2);
}
void GameOver::mov()
{
    //if(z){
    if(mov1){
        jug1->setPixmap(QPixmap(":/ken.1.0.png"));
        mov1=0;
    }
    else{
        jug1->setPixmap(QPixmap(":/ken.2.0.png"));
        mov1=1;
    //}
        }
    //else{
        if(mov2){
            jug2->setPixmap(QPixmap(":/box.1.1.png"));
            mov2=0;
        }
        else{
            jug2->setPixmap(QPixmap(":/box.2.1.png"));
            mov2=1;
        }
   // }

    //jug1->mover(0,1);
    //jug2->mover(2,0);
    /*
    if(mov1){
        if(a){
            jug1->cambiar(1,carcjug,0);
            a=0;
        }
        else{
            jug1->cambiar(1,carcjug,1);
            a=1;
        }
    }

    if(mov2){
        if(b){
            jug2->cambiar(0,2,0);
            b=0;
        }
        else{
            jug2->cambiar(0,2,1);
            b=1;
        }
}*/

}

void GameOver::on_progressBar_2_valueChanged(int value)
{
    //ui->progressBar_2->setInvertedAppearance(-1);
    ui->progressBar_2->setValue(value);
}

void GameOver::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}
void GameOver::setCarcjug(int value)
{
    carcjug = value;
}

void GameOver::setCarcjug2(int value)
{
    carcjug2 = value;
}

void GameOver::setZ(const QString &value)
{
    Z = value;
}
