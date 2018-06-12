#include "individual.h"
#include "ui_individual.h"
#include<time.h>
using namespace std;
individual::individual(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::individual)
{
    ui->setupUi(this);
    srand(time(NULL));
    pantalla=new QGraphicsScene;
    //button=new QPushButton;
    //button2=new QPushButton;
    ui->graphicsView->setScene(pantalla);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    pantalla->setSceneRect(0,0,1200,600);
    linea=new QGraphicsLineItem(0,0,1200,0);
    alinea=new QGraphicsLineItem(0,0,0,600);
    blinea=new QGraphicsLineItem(1200,0,1200,600);
    clinea=new QGraphicsLineItem(0,600,1200,600);
    pantalla->addItem(linea);//,lapiz);
    pantalla->addItem(alinea);//,lapiz);
    pantalla->addItem(blinea);//,lapiz);
    pantalla->addItem(clinea);//,lapiz);
    pictureA.push_back(QPixmap(":/ken.1.0.png"));
    pictureA.push_back(QPixmap(":/ken.2.0.png"));
    pictureA.push_back(QPixmap(":/ken.3.0.png"));
    pictureA.push_back(QPixmap(":/ken.4.0.png"));
    pictureA.push_back(QPixmap(":/ken.5.0.png"));
    pictureA.push_back(QPixmap(":/ken.6.0.png"));
    pictureB.push_back(pictureA);
    pictureA.clear();
    pictureA.push_back(QPixmap(":/ryu.1.0.png"));
    pictureA.push_back(QPixmap(":/ryu.2.0.png"));
    pictureA.push_back(QPixmap(":/ryu.3.0.png"));
    pictureA.push_back(QPixmap(":/ryu.4.0.png"));
    pictureA.push_back(QPixmap(":/ryu.5.0.png"));
    pictureA.push_back(QPixmap(":/ryu.6.0.png"));
    pictureB.push_back(pictureA);
    pictureA.clear();
    pictureA.push_back(QPixmap(":/box.1.0.png"));
    pictureA.push_back(QPixmap(":/box.2.0.png"));
    pictureA.push_back(QPixmap(":/box.3.0.png"));
    pictureA.push_back(QPixmap(":/box.4.0.png"));
    pictureA.push_back(QPixmap(":/box.5.0.png"));
    pictureA.push_back(QPixmap(":/box.6.0.png"));
    pictureB.push_back(pictureA);
    pictureA.clear();
    pictureA.push_back(QPixmap(":/kil.1.0.png"));
    pictureA.push_back(QPixmap(":/kil.2.0.png"));
    pictureA.push_back(QPixmap(":/kil.3.0.png"));
    pictureA.push_back(QPixmap(":/kil.4.0.png"));
    pictureA.push_back(QPixmap(":/kil.5.0.png"));
    pictureA.push_back(QPixmap(":/kil.6.0.png"));
    pictureB.push_back(pictureA);
    pictureA.clear();
    pictureA.push_back(QPixmap(":/ken.1.1.png"));
    pictureA.push_back(QPixmap(":/ken.2.2.png"));
    pictureA.push_back(QPixmap(":/ken.3.1.png"));
    pictureA.push_back(QPixmap(":/ken.4.1.png"));
    pictureA.push_back(QPixmap(":/ken.5.1.png"));
    pictureA.push_back(QPixmap(":/ken.6.1.png"));
    pictureC.push_back(pictureA);
    pictureA.clear();
    pictureA.push_back(QPixmap(":/ryu.1.1.png"));
    pictureA.push_back(QPixmap(":/ryu.2.1.png"));
    pictureA.push_back(QPixmap(":/ryu.3.1.png"));
    pictureA.push_back(QPixmap(":/ryu.4.1.png"));
    pictureA.push_back(QPixmap(":/ryu.5.1.png"));
    pictureA.push_back(QPixmap(":/ryu.6.1.png"));
    pictureC.push_back(pictureA);
    pictureA.clear();
    pictureA.push_back(QPixmap(":/box.1.1.png"));
    pictureA.push_back(QPixmap(":/box.2.1.png"));
    pictureA.push_back(QPixmap(":/box.3.1.png"));
    pictureA.push_back(QPixmap(":/box.4.1.png"));
    pictureA.push_back(QPixmap(":/box.5.1.png"));
    pictureA.push_back(QPixmap(":/box.6.1.png"));
    pictureC.push_back(pictureA);
    pictureA.clear();
    pictureA.push_back(QPixmap(":/kil.1.1.png"));
    pictureA.push_back(QPixmap(":/kil.2.1.png"));
    pictureA.push_back(QPixmap(":/kil.3.1.png"));
    pictureA.push_back(QPixmap(":/kil.4.1.png"));
    pictureA.push_back(QPixmap(":/kil.5.1.png"));
    pictureA.push_back(QPixmap(":/kil.6.1.png"));
    pictureC.push_back(pictureA);
    pictureA.clear();
    pictureD.push_back(":/Escenario1.png");
    pictureD.push_back(":/num1.png");
    pictureD.push_back(":/num3.png");
    pictureD.push_back(":/num2.png");
    timer =new QTimer;
    time2=new QTimer;
    connect(time2,SIGNAL(timeout()),this,SLOT(anim()));
    time2->start(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(mov()));
    timer->start(500);
    ui->button->hide();
    ui->button2->hide();
    //inicio();
}

void individual::inicio()
{
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(/*":/Escenario1.png")));//*/pictureD[nivel-1],"nullptr")));
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
    on_progressBar_valueChanged(vida1);
    on_progressBar_2_valueChanged(vida2);
}
void individual::keyPressEvent(QKeyEvent *puss)
{
    if(!jug1->collidesWithItem(alinea)){
        if(puss->key()==Qt::Key_A){
            switch (nivel) {
            case 3:
                nivel3(1);
                break;
            case 4:nivel4(1);
                break;
            }
            jug1->setVelx(-3);
        }}
    if(puss->key()==Qt::Key_W){
        switch (nivel) {
        case 3:
            nivel3(2);
            break;
        case 4:nivel4(2);
            break;
        }
        saltar=1;
    }
    if(!jug1->collidesWithItem(jug2)){
    if(puss->key()==Qt::Key_D){
        jug1->setVelx(3);
        switch (nivel) {

        case 3:
            nivel3(3);
            break;
        case 4:nivel4(3);
            break;
        }
    }}
    if(puss->key()==Qt::Key_S){
        switch (nivel) {
        case 3:
            nivel3(4);
            break;
        case 4:nivel4(4);
            break;
        }
        abajo=1;
    }
    if(puss->key()==Qt::Key_Q){
        switch (nivel) {
        case 3:
            nivel3(5);
            break;
        case 4:nivel4(5);
            break;
        }
        patada=1;
    }
        if(puss->key()==Qt::Key_E){
            switch (nivel) {
            case 3:
                nivel3(6);
                break;
            case 4:nivel4(6);
                break;
            }
            golpe=1;
    }
        jug1->posicion();
}

void individual::keyReleaseEvent(QKeyEvent *push)
{
    if(push->key()==Qt::Key_A)jug1->setVelx(0);
    if(push->key()==Qt::Key_D)jug1->setVelx(0);

}

void individual::setnivel(int x)
{
    nivel=x;
}

void individual::setvida1(int x)
{
    vida1=x;
}

void individual::setvida2(int x)
{
    vida2=x;
}
void individual::nivel1()
{
    fuerza1=5;
    fuerza2=7;
    if(auxpelea==3){
        if((jug2->getPosx())-(jug1->getPosx())>236){
            jug2->setVelx(-2);
            jug2->posicion();
        }
        else{
            if((jug2->getPosx())-(jug1->getPosx())<160)jug2->setVelx(0);
            if((jug2->getPosx())-(jug1->getPosx())<150){
                if(aux==0){
                    patada2=1;
                }
                if(aux==2){
                    golpe2=1;
                }if(aux==1){
                    if(patada||golpe){
                        proteg2=1;
                    }
                }if(aux==3){
                    if(patada||golpe){
                        jug2->setVelx(22);
                        saltar2=1;
                        jug2->posicion();

                        jug2->setVelx(0);
                    }
                    aux=-1;
                }
                aux++;
                auxpelea=0;
            }
        }
    }
    else{
        auxpelea+=1;
    }

}

void individual::nivel2()
{
    fuerza1=6;
    fuerza2=9;
    if(auxpelea==2 ){//&& !saltar2){
        if((jug2->getPosx())-(jug1->getPosx())>200){
            jug2->setVelx(-5);
            jug2->posicion();
        }
        else{
            if((jug2->getPosx())-(jug1->getPosx())<158)jug2->setVelx(0);
            if((jug2->getPosx())-(jug1->getPosx())<160){
                if(aux==0){
                    patada2=1;
                }
                if(aux==2){
                    golpe2=1;
                }if(aux==1){
                    if(patada||golpe){
                        proteg2=1;
                    }
                }if(aux==3){
                    if(patada||golpe){
                        jug2->setVelx(50);
                        saltar2=1;
                        jug2->posicion();

                        jug2->setVelx(0);
                    }
                    aux=-1;
                }
                aux++;
            }
        }
        auxpelea=0;
    }
    else{
        auxpelea=auxpelea+1;
    }
}
void individual::nivel3(){
    fuerza1=11;
    fuerza2=7;
    niv3++;
    if((jug2->getPosx())-(jug1->getPosx())>236){
        jug2->setVelx(-3);
        jug2->posicion();
        jug2->setVelx(0);
    }
    else{
        if((jug2->getPosx())-(jug1->getPosx())<180)jug2->setVelx(0);
        if(niv3==30){
            niv3=0;
            jug2->setVelx(5);
            jug2->posicion();
        }
    }
    if(nivel3a){
        int x;
        x=(rand()%3);
        if(x==0){
            jug2->setVelx(-3);
        }
        if(x==1){
            jug2->setVelx(-5);
            jug2->posicion();
            patada2=1;
        }
        if(x==2){
            jug2->setVelx(-5);
            jug2->posicion();
            golpe2=1;

        }
        nivel3a=0;
    }
}

void individual::nivel3(int a)//1:izquierda 2:saltar 3:derecha 4:agacharse 5:patada 6:golpe
{
    if(!jug1->collidesWithItem(jug2))jug2->setVelx(0);
    switch (a) {
    case 1:if((rand()%4)==1){
        saltar2=1;
        jug2->setVelx(-2);}

        break;
    case 2:
        if((rand()%5)==3)abajo2=1;

        break;
    case 3:if((jug2->getPosx())-(jug1->getPosx())<175){
            if((rand()%2)==1)patada2=1;
            else{
                golpe2=1;
            }
        }

        break;
    case 4:if((jug2->getPosx())-(jug1->getPosx())<175){
            patada2=1;
            patada=0;
            saltar2=1;
        }
        break;
    case 5:
        //int x;
        //x=(rand()%4);
        //if((jug2->getPosx())-(jug1->getPosx())<175){
          //  if(x==1){
                jug2->setVelx(5);
                jug2->posicion();
                jug2->setVelx(0);
                nivel3a=1;
            //}
            //if(x==2){
              //  golpe=0;
                //golpe2=1;
            //}if(x==3){
            //    patada2=1;
            //}
        //}

        break;
    case 6:proteg2=1;
        jug2->setVelx(4);
        jug2->posicion();
        jug2->setVelx(0);
        break;
    default:if((jug2->getPosx())-(jug1->getPosx())<175){
            jug2->setVelx(5);
            jug2->posicion();
            jug2->setVelx(0);
        }
        break;
    }


}
void individual::nivel4(){
    fuerza1=12;
    fuerza2=10;
}

void individual::nivel4(int a)
{

}


individual::~individual()
{
    delete ui;
}


void individual::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void individual::on_progressBar_2_valueChanged(int value)
{
    ui->progressBar_2->setValue(value);
}
void individual::anim()
{
    switch (nivel) {
    case 1:
        nivel1();
        break;
    case 2:
        nivel2();
        //cout<<"funciona"<<endl;
        break;
    case 3:
        nivel3();
        break;
    case 4:
        nivel4();
        break;
    }
    if(vida1<=0){
        jug1->setPixmap(pictureB[nivel-1][5]);//QPixmap(":/caido1.0.png"));
        jug1->setPos(100,jug1->getPosy());
        jug2->setPos(1000,jug2->getPosy());
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/you lose.PNG")));
        //ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/Escenario1.png")));
        time2->stop();
        timer->stop();
        //QPushButton *button = new QPushButton("&   Reiniciar   ", this);
        //QPushButton *button2 = new QPushButton("& Menu Pincipal   ", this);
        QString a="&   Reiniciar   ";
        QString b="& Menu Pincipal   ";
        ui->button->setText(a);
        ui->button2->setText(b);
        ui->button->setStyleSheet("background-color: green");
        ui->button2->setStyleSheet("background-color: purple");
        ui->button->setGeometry(450,200,300,80);
        ui->button2->setGeometry(450,350,300,80);
        ui->button->show();
        ui->button2->show();
        on_progressBar_valueChanged(0);
        connect(ui->button,SIGNAL(clicked(bool)),this,SLOT(opcion()));
        connect(ui->button2,SIGNAL(clicked(bool)),this,SLOT(opcion2()));
    }
    if(vida2<=0){
        jug2->setPixmap(pictureC[nivel-1][5]);//QPixmap(""));
        jug1->setPos(100,jug1->getPosy());
        jug2->setPos(1000,jug2->getPosy());
        //jug1->setPixmap(QPixmap(""));
        ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/nivel.1.0.png")));
        time2->stop();
        timer->stop();
        //QPushButton *button = new QPushButton("&   NEXT   ", this);
        //QPushButton *button2 = new QPushButton("& Menu Pincipal   ", this);
        QString a="&   next   ";
        QString b="& Menu Pincipal   ";
        ui->button->setText(a);
        ui->button2->setText(b);
        ui->button->setStyleSheet("background-color: green");
        ui->button2->setStyleSheet("background-color: purple");
        ui->button->setGeometry(450,200,300,80);
        ui->button2->setGeometry(450,350,300,80);
        ui->button->show();
        ui->button2->show();
        on_progressBar_2_valueChanged(0);
        connect(ui->button,SIGNAL(clicked(bool)),this,SLOT(opcion3()));
        connect(ui->button2,SIGNAL(clicked(bool)),this,SLOT(opcion2()));
    }

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
                vida2-=1;
            }else {
            if(patada2||golpe2){
                vida2-=3;
            }
            if(!patada2 && !golpe2 && !proteg2){
                vida2-=5;
            }}

        }
        on_progressBar_2_valueChanged(vida2);
        patada=0;

    }
    if(patada2){
        //mov2=0;
        jug2->setPos(jug2->getPosx()-15,jug2->getPosy());
        jug2->setPixmap(QPixmap(/*":/box.3.1.png"));//*/pictureC[nivel-1][2]));
        if(jug2->collidesWithItem(jug1)){
            jug2->setPos(jug2->getPosx()+3,jug2->getPosy());
            if(proteg){
                vida1-=1;
            }else{
            if(patada||golpe){
                vida1-=fuerza1;
            }
            if(!patada && !golpe && !proteg){
                vida1-=fuerza2;
            }
            }}
        patada2=0;
        on_progressBar_valueChanged(vida1);
        }
    if(golpe){
        jug1->setPixmap(QPixmap(":/ken.4.0.png"));
        if(jug1->collidesWithItem(jug2)){
            if(proteg2){
                vida2-=1;
            }
            else{
            if(patada2||golpe2){
                vida2-=2;
            }
            if(!patada2 && !golpe2 && !proteg2){
                vida2-=4;
            }}
        }
        golpe=0;
        on_progressBar_2_valueChanged(vida2);
    }
    if(golpe2){
        jug2->setPos(jug2->getPosx()-15,jug2->getPosy());
        jug2->setPixmap(QPixmap(/*":/box.4.1.png"));//*/pictureC[nivel-1][3]));
        if(jug2->collidesWithItem(jug1)){
            jug2->setPos(jug2->getPosx(),jug2->getPosy());
            if(proteg){
                vida1-=1;
            }
            else{
            if(patada||golpe){
                vida1-=fuerza1;
            }
            if(!patada && !golpe && !proteg){
                vida1-=fuerza2;
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
        jug2->setPixmap(QPixmap(/*":/box.4.1.png"));//*/pictureC[nivel-1][4]));
        jug2->setPos(jug2->getPosx(),jug2->getPosy()+30);
        abajoaux2+=1;
        if(abajoaux2==4){
            abajoaux2=0;
            abajo2=0;
            mov2=1;
            jug2->setPos(jug2->getPosx(),jug2->getPosy());
        }
    }
    proteg2=0;
    /*
    if(proteg){}
    if(proteg2){}*/
    on_progressBar_2_valueChanged(vida2);}
void individual::mov()
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
            jug2->setPixmap(QPixmap(/*":/box.1.1.png"));*/pictureC[nivel-1][0]));
            mov2=0;
        }
        else{
            jug2->setPixmap(QPixmap(/*":/box.2.1.png"));*/pictureC[nivel-1][1]));
            mov2=1;
        }
}
void individual::opcion(){
    vida1=100;
    vida2=100;
    auxpelea=0;
    nivel3a=0;
    ui-> button->hide();
    ui-> button2->hide();
    delete jug1;
    delete jug2;
    inicio();
    timer->start(500);
    time2->start(100);
}
void individual::opcion2(){
    principal *N=new principal;
    N->show();
    close();
}
void individual::opcion3(){
    nivel++;
    auxpelea=0;
    nivel3a=0;
    vida1=100;
    vida2=100;
    ui-> button->hide();
    ui-> button2->hide();
    delete jug1;
    delete jug2;
    inicio();
    timer->start(500);
    time2->start(100);
}
