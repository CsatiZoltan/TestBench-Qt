#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushModal_clicked()
{
    ModalWindow* mw = new ModalWindow(this);
    mw->setModal(true);
    mw->show();
}


void MainWindow::on_pushModeless_clicked()
{
    ModelessWindow* mlw = new ModelessWindow(this);
    mlw->setModal(false); // anyway, modeless is by default
    mlw->show();
}
