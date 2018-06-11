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

    // Заполняем список фильтров
    // Варианты программ
    ui->listLearningProgram->addItem("Клавиши");
    ui->listLearningProgram->addItem("Духовые");
    ui->listLearningProgram->addItem("Струнные");

    // Срок обучения
    ui->listLearningYear->addItem("1 год");
    ui->listLearningYear->addItem("2 год");
    ui->listLearningYear->addItem("3 год");
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

void MainWindow::on_showListButton_clicked()
{
    // Метод поиска записей по данным фильтра
    QString currentLearningProgram = ui->listLearningProgram->currentItem()->text();
    QString currentLearningYear = ui->listLearningYear->currentItem()->text();

    // Очистка предыдущего результата
    csvModel->clear();
    csvModel->setHorizontalHeaderLabels(QStringList() << "Имя" << "Фамилия" << "Дата рождения" << "Программа" << "Год обучения");

    // Запускаем проверку наличия записей в файле
    QStringList resultList;
    resultList = readCsvFile();

    if (!resultList.size())
    {
        ui->listStatusLabel->setText("Не найдено подходящих записей.");
    }
    else
    {
        ui->tableView->setModel(csvModel);

        for (int i = 0; i < resultList.size(); i++)
        {
            QString resultListItem = resultList[i];
            QList<QStandardItem *> standardItemsList;

            // Разбиваем строку из файла на элементы, разделенные запятой и записываем в переменную
            for (QString item : resultListItem.split(",")) {
                // Модель строки из файла
                // name,lastname,date,program,year

                // .simplified() - убирает переносы и др спец символы
                standardItemsList.append(new QStandardItem(item.simplified()));
            }
            // Анализируем преобразованную строку,
            // если удовлетворяет условиям фильтра добавляем в список

            if (standardItemsList[3]->text() == currentLearningProgram && standardItemsList[4]->text() == currentLearningYear) {
                // Добавляем в модель преобразованную запись из файла
                csvModel->insertRow(csvModel->rowCount(), standardItemsList);
            }

        }
    }
}
