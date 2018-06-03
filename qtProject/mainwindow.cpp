#include "mainwindow.h"
#include "ui_mainwindow.h"
// Подключаем модуль для работы с файлом
#include "file.h"

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

void MainWindow::on_readFileButton_clicked()
{
    readCsvFile();
}

void MainWindow::on_addNoteButton_clicked()
{
    // QString str = "Petrov,Ivan,10,1";
    saveCsvFile("append");
}
