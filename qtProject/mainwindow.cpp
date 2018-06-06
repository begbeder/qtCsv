#include "mainwindow.h"
#include "ui_mainwindow.h"

// Подключаем форму создания нового пользователя
#include "createitemwindow.h"

// Подключаем модуль для работы с файлом
#include "file.h"
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Добавляем обработчики событий нажатия кнопок
    connect(ui->createItemButton, SIGNAL(clicked()),this, SLOT(createItemButton_clicked()));

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
        csvModel->setColumnCount(5);
        csvModel->setHorizontalHeaderLabels(QStringList() << "Имя" << "Фамилия" << "Дата рождения" << "Программа" << "Год обучения");

        ui->tableView->setModel(csvModel);

        // Включена встроенная сортировка по полям таблицы
        ui->tableView->setSortingEnabled(true);
        ui->tableView->horizontalHeader()->sortIndicatorOrder();

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

void MainWindow::createItemButton_clicked()
{
    // По клику на кнопку создается экземпляр нового окна
    // Создание экземпляра класса CreateItemWindow
    // this - контекстный объект родительского класса
    CreateItemWindow createItemWindow;

    // Вызов необходимых методов
    createItemWindow.setModal(true);
    createItemWindow.exec();
}
