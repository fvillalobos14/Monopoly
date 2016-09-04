#ifndef OPCIONES_H
#define OPCIONES_H

#include <QMainWindow>

namespace Ui {
class Opciones;
}

class Opciones : public QMainWindow
{
    Q_OBJECT

public:
    explicit Opciones(QWidget *parent = 0);
    QPixmap *fondo = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/fondoMenu.jpg");
    ~Opciones();

private slots:
    void on_quickGame_clicked();

private:
    Ui::Opciones *ui;
};

#endif // OPCIONES_H
