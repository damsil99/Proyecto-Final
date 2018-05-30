#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "ventana1.h"
namespace Ui {
class principal;
}

class principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = 0);

    ~principal();
private slots:

    void on_mult_clicked();

    void on_ind_clicked();

private:
    Ui::principal *ui;
    ventana1 *N;

};

#endif // PRINCIPAL_H
