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

// Метод сохранения данных в файл csv
void saveCsvFile (QString mode, QString newStr) {
    QFile file("data.csv");
    // Считываем исходный файл в контейнер
    QStringList strList;
    // (file.exists())&&
    if ((file.open(QIODevice::ReadOnly)))
    {
        while(!file.atEnd())
        {
            strList << file.readLine();
        }

        file.close();
    }
    else
    {
        qDebug() << "Can not read file";
    }

    // Добавляем строку и сохраняем содержимое контейнера в тот же файл
    // (file.exists())&&
    if ((file.open(QIODevice::WriteOnly)))
    {
        // Пока не реализованный режим обновления существующей записи
        if (mode == "insert")
        {
            // strList.insert(2,"Inserted string\n");
        }

        // Режим добавления записи в конец файла
        if (mode == "append")
        {
            qDebug() << newStr;
            strList.append(newStr + "\n");
        }

        QTextStream stream(&file);

        foreach(QString s, strList)
        {
            stream<<s;
        }

        file.close();
    }
    else
    {
        qDebug() << "Can not insert string to file";
    }
}

void MainWindow::on_readFileButton_clicked()
{
    readCsvFile();
}

void MainWindow::on_addNoteButton_clicked()
{
    QString str = "Petrov, Ivan, 10, 1";
    saveCsvFile("append", str);
}
