#ifndef VENTANA1_H
#define VENTANA1_H

#include"gameover.h"
#include <QWidget>
#include <Qmovie>
#include <Qsize>
#include <QTimer>
#include <QLabel>
#include <QMainWindow>
#include<QGraphicsScene>
namespace Ui {
class ventana1;
}

class ventana1 : public QWidget
{
    Q_OBJECT

public:
    explicit ventana1(QWidget *parent = 0);
    ~ventana1();

private slots:
    void jugador1();
    void jugador2();
    void jugador3();
    void jugador4();
    void on_volver_clicked();

private:
    int aux=0;
    Ui::ventana1 *ui;
    QGraphicsScene* scene;
    bool cnd=0,band=0;
};

#endif // VENTANA1_H
