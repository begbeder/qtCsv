#include "createitemwindow.h"
#include "ui_createitemwindow.h"

CreateItemWindow::CreateItemWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateItemWindow)
{
    ui->setupUi(this);
}

CreateItemWindow::~CreateItemWindow()
{
    delete ui;
}
