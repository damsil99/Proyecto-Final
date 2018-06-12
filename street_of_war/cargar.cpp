#include "cargar.h"
#include "ui_cargar.h"
#include<fstream>
#include"individual.h"
using namespace std;
Cargar::Cargar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cargar)
{
    ui->setupUi(this);
    int cont=0;
    char c;
    ifstream txt;
    txt.open("partidas.txt",ios::in);
    if(txt.fail());
    else {
    while(txt.get(c)){
        if(c=='\n'){
            conta++;
        }
        //cout<<conta<<endl;
        cont++;
    }
    conta=conta/4;
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
    /*ui->jugador1->setMovie(movie);
    ui->jugador2->setMovie(movie2);
    ui->jugador3->setMovie(movie3);
    ui->jugador4->setMovie(movie4);
    movie->start();
    movie2->start();
    movie3->start();
    movie4->start();*/
    //ui->gif1->setPos();
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
    individual *N =new individual;
    N->setvida1(cont2[0]);
    N->setvida2(cont2[1]);
    N->setnivel(cont2[2]);
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
    individual *N =new individual;
    N->setvida1(cont2[5]);
    N->setvida2(cont2[6]);
    N->setnivel(cont2[7]);
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
    individual *N =new individual;
    N->setvida1(cont2[10]);
    N->setvida2(cont2[11]);
    N->setnivel(cont2[12]);
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
    individual *N =new individual;
    N->setvida1(cont2[15]);
    N->setvida2(cont2[16]);
    N->setnivel(cont2[17]);
    N->show();
    N->inicio();
    close();
}


void Cargar::on_nuevo_clicked()
{


}
Cargar::~Cargar()
{
    delete ui;
}
