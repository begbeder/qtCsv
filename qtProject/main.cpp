#include <QApplication>
#include <QTextCodec>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8")); // Добавлена поддержка русского языка при работе с файлами
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
