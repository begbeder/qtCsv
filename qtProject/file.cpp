// Подключаем класс для работы с файлом
#include <QFile>
// Класс логгирования
#include <QDebug>

// Метод чтения данных из файла csv
QStringList readCsvFile () {
    QFile file("data.csv");

    // Создаем контейнер для заполнения
    QStringList strList;

    // Проверяем существование файла и открываем его в режиме Только чтение
    if ((file.exists()) && (file.open(QIODevice::ReadOnly|QIODevice::Text)))
    {
        // Записываем данные из файла построчно в контейнер
        while(!file.atEnd())
        {
            strList << file.readLine();
        }

        file.close();
    }
    else
    {
        // Можно сделать вывод ошибки, например, в ui->statusBar->setText("File is not exists");
        // Или в окно с ошибкой, так даже будет универальнее
        qDebug() << "File is not exists";
    }

    // qDebug() << strList;
    return strList;
}

// Метод сохранения данных в файл csv
void saveCsvFile (QString mode, QString str) {
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
            //qDebug() << newStr;
            qDebug() << str + "\n";
            strList.append(str + "\n");
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
