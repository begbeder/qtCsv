#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    // Добавлен обработчик открытия окна создания новой записи
    void createItemButton_clicked();
    void on_showListButton_clicked();

    void on_searchButton_clicked();

    void on_showFullListButton_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *csvModel;
};

#endif // MAINWINDOW_H
