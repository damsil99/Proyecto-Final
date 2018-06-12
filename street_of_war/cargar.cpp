#include "cargar.h"
#include "ui_cargar.h"
#include<fstream>
#include"maquina.h"


using namespace std;


Cargar::Cargar(QWidget *parent) ://Carga, mira cantos perfiles creados hay
    QMainWindow(parent),
    ui(new Ui::Cargar)
{
    ui->setupUi(this);

    ifstream txt,txt1,txt2,txt3;
    txt.open("partidas.txt",ios::in);
    if(txt.fail());
    else {
        conta++;
        txt1.open("partida1.txt",ios::in);
        if(txt1.fail());
        else{
            conta++;
            txt2.open("partida2.txt",ios::in);
            if(txt2.fail());
            else{
                conta++;
                txt3.open("partida3.txt",ios::in);
                if(txt3.fail());
                else{
                    conta++;
                }
            }
        }

    }
    txt.close();
    QSize size(70, 70);
    QMovie *movie = new QMovie(":/Ken-hdstance.gif");
    QMovie *movie2 = new QMovie(":/Ryu-hdstance.gif");
    QMovie *movie3 = new QMovie(":/Guile-hdstance.gif");
    QMovie *movie4 = new QMovie(":/C.4.1.gif");
    movie->setScaledSize(size);
    movie2->setScaledSize(size);
    movie3->setScaledSize(size);
    movie4->setScaledSize(size);
    switch (conta) {
    case 1:ui->jugador1->setMovie(movie);
        movie->start();
        break;
    case 2:ui->jugador1->setMovie(movie);
        ui->jugador2->setMovie(movie2);
        movie2->start();
        movie->start();
        break;
    case 3:ui->jugador1->setMovie(movie);
        ui->jugador2->setMovie(movie2);
        ui->jugador3->setMovie(movie3);
        movie3->start();
        movie2->start();
        movie->start();
        break;
    case 4:ui->jugador1->setMovie(movie);
        ui->jugador2->setMovie(movie2);
        ui->jugador3->setMovie(movie3);
        ui->jugador4->setMovie(movie4);
        movie3->start();
        movie2->start();
        movie->start();
        movie4->start();
        break;
    default:cout<<"calcular bn ";
    }

    connect(ui->boton1,SIGNAL(clicked(bool)),this,SLOT(pers1()));
    connect(ui->boton2,SIGNAL(clicked(bool)),this,SLOT(pers2()));
    connect(ui->boton3,SIGNAL(clicked(bool)),this,SLOT(pers3()));
    connect(ui->boton4,SIGNAL(clicked(bool)),this,SLOT(pers4()));

}

void Cargar::nuevo()
{

}


void Cargar::pers1()
{
    int cont=0,aux;
    vector<int>cont2;
    string n;
    ifstream txt1;
    txt1.open("partidas.txt",ios::in);
    while (!txt1.eof()) {
       getline(txt1,n);
       aux=atoi(n.c_str());
       cont2.push_back(aux);
       cont++;
       if(cont==5)break;
    }
    cout<<cont2[0]<<endl<<cont2[1]<<endl<<cont2[2]<<endl;
    cout<<"long"<<cont2.size();
    txt1.close();
    maquina *N =new maquina;
    N->setvida1(cont2[0]);
    N->setvida2(cont2[1]);
    N->setnivel(cont2[2]);
    N->setNombre("partidas.txt");
    N->show();
    N->inicio();
    close();
}

void Cargar::pers2()
{
    int cont=0,aux;
    vector<int>cont2;
    string n;
    ifstream txt1;
    txt1.open("partida1.txt",ios::in);
    while (!txt1.eof()) {
       getline(txt1,n);
       aux=atoi(n.c_str());
       cont2.push_back(aux);
       cont++;
       if(cont==5)break;
    }
    cout<<cont2[0]<<endl<<cont2[1]<<endl<<cont2[2]<<endl;
    cout<<"long"<<cont2.size();
    txt1.close();
    maquina *N =new maquina;
    N->setvida1(cont2[0]);
    N->setvida2(cont2[1]);
    N->setnivel(cont2[2]);
    N->setNombre("partida1.txt");
    N->show();
    N->inicio();
    close();

}

void Cargar::pers3()
{
    int cont=0,aux;
    vector<int>cont2;
    string n;
    ifstream txt1;
    txt1.open("partida2.txt",ios::in);
    while (!txt1.eof()) {
       getline(txt1,n);
       aux=atoi(n.c_str());
       cont2.push_back(aux);
       cont++;
       if(cont==5)break;
    }
    cout<<cont2[0]<<endl<<cont2[1]<<endl<<cont2[2]<<endl;
    cout<<"long"<<cont2.size();
    txt1.close();
    maquina *N =new maquina;
    N->setvida1(cont2[0]);
    N->setvida2(cont2[1]);
    N->setnivel(cont2[2]);
    N->setNombre("partida2.txt");
    N->show();
    N->inicio();
    close();

}

void Cargar::pers4()
{
    int cont=0,aux;
    vector<int>cont2;
    string n;
    ifstream txt1;
    txt1.open("partida3.txt",ios::in);
    while (!txt1.eof()) {
       getline(txt1,n);
       aux=atoi(n.c_str());
       cont2.push_back(aux);
       cont++;
       if(cont==5)break;
    }
    cout<<cont2[0]<<endl<<cont2[1]<<endl<<cont2[2]<<endl;
    cout<<"long"<<cont2.size();
    txt1.close();
    maquina *N =new maquina;
    N->setvida1(cont2[0]);
    N->setvida2(cont2[1]);
    N->setnivel(cont2[2]);
    N->setNombre("partida3.txt");
    N->show();
    N->inicio();
    close();
}


void Cargar::on_nuevo_clicked()
{
    maquina *N=new maquina;
    ofstream txt5;
    switch (conta) {
    case 0:
        txt5.open("partidas.txt",ios::out);
        txt5<<"";
        txt5.close();
        N->setNombre("partidas.txt");
        break;
    case 1:
        //ofstream txt3;
        txt5.open("partida1.txt",ios::out);
        txt5<<"";
        txt5.close();
        N->setNombre("partida1.txt");
        break;
    case 2:
        txt5.open("partida2.txt",ios::out);
        txt5<<"";
        txt5.close();
        N->setNombre("partida2.txt");
        break;
    case 3:
        txt5.open("partida3.txt",ios::out);
        txt5<<"";
        txt5.close();
        N->setNombre("partida3.txt");
        break;
    }
    N->show();
    N->inicio();
    close();
}
Cargar::~Cargar()
{
    delete ui;
}
