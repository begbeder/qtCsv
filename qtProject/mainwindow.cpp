#include "mainwindow.h"
#include "ui_mainwindow.h"
// Подключаем класс для работы с файлом
#include <QFile>
// Класс логгирования
#include <QDebug>

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

// Метод чтения данных из файла csv
void readCsvFile () {
    QFile file("data.csv");

    // Проверяем существование файла и открываем его в режиме Только чтение
    if ((file.exists()) && (file.open(QIODevice::ReadOnly)))
    {
        // Записываем данные из файла построчно в контейнер
        QStringList strList ;
        while(!file.atEnd())
        {
            strList << file.readLine();
        }
        // ui->textBrowser->setText(strList);
        qDebug() << strList;

        file.close();
    }
    else
    {
        qDebug() << "File is not exists";
    }
}


void MainWindow::on_readFileButton_clicked()
{
    readCsvFile();
}
