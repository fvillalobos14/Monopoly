#include "opciones.h"
#include "ui_opciones.h"
#include "Juego.h"

Opciones::Opciones(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Opciones)
{
    ui->setupUi(this);
    ui->fondo->setPixmap(*fondo);

}

Opciones::~Opciones()
{
    delete ui;
}

void Opciones::on_quickGame_clicked()
{
    Juego log;
    log.setModal(true);
    log.exec();
}
