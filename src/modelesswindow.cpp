#include "modelesswindow.h"
#include "ui_modelesswindow.h"

ModelessWindow::ModelessWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModelessWindow)
{
    ui->setupUi(this);
}

ModelessWindow::~ModelessWindow()
{
    delete ui;
}
