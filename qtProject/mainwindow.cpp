#include "mainwindow.h"
#include "ui_mainwindow.h"
// Подключаем модуль для работы с файлом
#include "file.h"
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Запускаем проверку наличия записей в файле
    QStringList resultList;
    resultList = readCsvFile();

    if (!resultList.size())
    {
        ui->listStatusLabel->setText("Пока не создано ни одной записи.");
    }
    else
    {
        // Создаем модель таблицы файла данных
        csvModel = new QStandardItemModel(this);
        csvModel->setColumnCount(4);
        csvModel->setHorizontalHeaderLabels(QStringList() << "Имя" << "Фамилия" << "Программа" << "Год обучения");

        ui->tableView->setModel(csvModel);

        for (int i = 0; i < resultList.size(); i++)
        {
            QString resultListItem = resultList[i];
            QList<QStandardItem *> standardItemsList;

            // Разбиваем строку из файла на элементы, разделенные запятой и записываем в переменную
            for (QString item : resultListItem.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }

            // Добавляем в модель преобразованную запись из файла
            csvModel->insertRow(csvModel->rowCount(), standardItemsList);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_readFileButton_clicked()
{
    // readCsvFile();
}

void MainWindow::on_addNoteButton_clicked()
{
    QString newNote = "Ivan,Petrov,Program1,1";

    saveCsvFile("append", newNote);
}
