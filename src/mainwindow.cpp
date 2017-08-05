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


void MainWindow::on_actionExit_triggered()
{
    // No need to connect a signal to a slot thanks to the automatic connections:
    // http://doc.qt.io/qt-5/designer-using-a-ui-file.html#automatic-connections
    QApplication::quit();
}
