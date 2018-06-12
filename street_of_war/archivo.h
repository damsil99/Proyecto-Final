#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <QMainWindow>

namespace Ui {
class archivo;
}

class archivo : public QMainWindow
{
    Q_OBJECT

public:
    explicit archivo(QWidget *parent = 0);
    ~archivo();

private slots:
    void on_actionPausar_triggered();

    void on_actionGuardar_triggered();

    void on_actionJuego_triggered();

private:
    Ui::archivo *ui;
};

#endif // ARCHIVO_H
