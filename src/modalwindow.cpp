#include "modalwindow.h"
#include "ui_modalwindow.h"

ModalWindow::ModalWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModalWindow)
{
    ui->setupUi(this);
}

ModalWindow::~ModalWindow()
{
    delete ui;
}
