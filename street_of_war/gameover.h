#ifndef GAMEOVER_H
#define GAMEOVER_H
#include"personajes.h"
#include <QWidget>
#include<QGraphicsItem>
#include <QGraphicsScene>
#include<QKeyEvent>
#include <QPushButton>
#include<QTimer>
//#include<Q>
//using namespace std;

namespace Ui {
class GameOver;
}

class GameOver : public QMainWindow
                // public QGraphicsScene //, public QGraphicsItem
{
    Q_OBJECT

public:
    explicit GameOver(QWidget *parent = 0);
    ~GameOver();

    void keyPressEvent(QKeyEvent *puss);
    void keyReleaseEvent(QKeyEvent *push);

    int getCarcjug() const;
    void setCarcjug(int value);

    int getCarcjug2() const;
    void setCarcjug2(int value);

    QString getZ() const;
    void setZ(const QString &value);
public slots:
    void inicio();
    void anim();
    void mov();
    void opcion();
    void opcion2();
private slots:
    void on_progressBar_2_valueChanged(int value);

    void on_progressBar_valueChanged(int value);

private:
    bool saltar=0,saltar2=0,abajo=0,abajo2=0,proteg=0;
    int carcjug=0,contsal1=0,vida1=100,vida2=100;
    int carcjug2=0,contsal2=0,abajoaux=0,abajoaux2=0;
    bool patada=0,patada2=0;
    bool golpe=0,golpe2=0,proteg2=0,mov1=1,mov2=1;
    bool a=0,b=0;
    vector<QPixmap> pictureA;
    vector<vector<QPixmap>> pictureB;
     vector<vector<QPixmap>> pictureC;
    personajes *jug1,*jug2;
    Ui::GameOver *ui;
    QString Z;
    QTimer *time,*time2;
    QGraphicsScene* pantalla;
    QGraphicsLineItem* linea;
    QGraphicsLineItem* alinea;
    QGraphicsLineItem* blinea;
    QGraphicsLineItem* clinea;
};

#endif // GAMEOVER_H
