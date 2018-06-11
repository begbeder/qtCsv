#include "createitemwindow.h"
#include "ui_createitemwindow.h"

// Подключаем модуль для работы с фильтром
#include "filter.h"

// Подключаем модуль для работы с файлом
#include "file.h"
#include <QDebug>
#include <QMessageBox>

CreateItemWindow::CreateItemWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateItemWindow)
{
    ui->setupUi(this);

    // Заполняем список фильтров
    // Варианты программ
    for (int i = 0; i < listLearningProgramOptions.size(); ++i) {
        ui->listLearningProgram->addItem(listLearningProgramOptions.at(i).toLocal8Bit().constData());
    }

    // Срок обучения
    for (int i = 0; i < listLearningYearOptions.size(); ++i) {
        ui->listLearningYear->addItem(listLearningYearOptions.at(i).toLocal8Bit().constData());
    }
}

CreateItemWindow::~CreateItemWindow()
{
    delete ui;
}

void CreateItemWindow::on_saveUserButton_clicked()
{
    // Очищаем старые ошибки
    ui->errorLabel->clear();

    // Записываем в строку те поля, при валидации которых произошла ошибка
    QString errors;

    QString name = ui->userName->text();

    if (name == "") {
        errors += "имя ";
    }

    QString lastName = ui->userLastName->text();

    if (lastName == "") {
        errors += "фамилия ";
    }

    QDate date = ui->userDate->date();

    QString program = ui->listLearningProgram->currentText();

    QString year = ui->listLearningYear->currentText();

    // Если ошибок нет, то сохраняем запись в файл
    if (errors != "") {
        // Разобраться как сделать красным текст
        ui->errorLabel->setText("Обязательно для заполнения: " + errors);
    } else {
        // Запись в файл
        QString newNote = name + "," + lastName + "," + date.toString() + "," + program + "," + year;

        newNote = newNote.toUtf8();

        qDebug() << newNote;

        saveCsvFile("append", newNote);

        // Выводим сообщение об успешном сохранении
        QMessageBox::about(this, "Результат запроса", "Запись успешно сохранена!");

        // После успешного сохранения очищаем форму
        ui->userName->clear();
        ui->userLastName->clear();
        // TODO посмортеть как сбросить дату
        ui->listLearningProgram->setCurrentIndex(0);
        ui->listLearningYear->setCurrentIndex(0);
    }
}
