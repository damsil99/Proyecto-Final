#ifndef CARGAR_H
#define CARGAR_H
#include<QMainWindow>
#include <Qmovie>
#include <Qsize>
#include <QTimer>
#include <QLabel>

#include <QWidget>
using namespace std;
namespace Ui {
class Cargar;
}

class Cargar : public QWidget//,
        //public QMainWindow
{
    Q_OBJECT

public:
    explicit Cargar(QWidget *parent = 0);
    void nuevo();

    ~Cargar();

private slots:
    void pers1();
    void pers2();
    void pers3();
    void pers4();
    void on_nuevo_clicked();

private:
    Ui::Cargar *ui;
    int logo=0,conta=0;
    vector<int> partidas;
};

#endif // CARGAR_H
