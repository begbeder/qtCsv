/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *createItemButton;
    QLabel *listStatusLabel;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *showListButton;
    QListWidget *listLearningProgram;
    QListWidget *listLearningYear;
    QLineEdit *searchInput;
    QLabel *label_4;
    QPushButton *searchButton;
    QPushButton *showFullListButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1010, 584);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 15, 251, 21));
        createItemButton = new QPushButton(centralWidget);
        createItemButton->setObjectName(QStringLiteral("createItemButton"));
        createItemButton->setGeometry(QRect(290, 10, 171, 31));
        listStatusLabel = new QLabel(centralWidget);
        listStatusLabel->setObjectName(QStringLiteral("listStatusLabel"));
        listStatusLabel->setGeometry(QRect(460, 60, 491, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        listStatusLabel->setFont(font);
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(290, 180, 711, 291));
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 90, 141, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 131, 16));
        showListButton = new QPushButton(centralWidget);
        showListButton->setObjectName(QStringLiteral("showListButton"));
        showListButton->setGeometry(QRect(10, 120, 251, 31));
        listLearningProgram = new QListWidget(centralWidget);
        listLearningProgram->setObjectName(QStringLiteral("listLearningProgram"));
        listLearningProgram->setGeometry(QRect(10, 180, 251, 121));
        listLearningYear = new QListWidget(centralWidget);
        listLearningYear->setObjectName(QStringLiteral("listLearningYear"));
        listLearningYear->setGeometry(QRect(10, 330, 251, 141));
        searchInput = new QLineEdit(centralWidget);
        searchInput->setObjectName(QStringLiteral("searchInput"));
        searchInput->setGeometry(QRect(350, 120, 131, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 120, 55, 31));
        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(500, 120, 93, 31));
        showFullListButton = new QPushButton(centralWidget);
        showFullListButton->setObjectName(QStringLiteral("showFullListButton"));
        showFullListButton->setGeometry(QRect(840, 120, 161, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1010, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\264\320\260\320\275\320\275\321\213\320\274\320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262", nullptr));
        createItemButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        listStatusLabel->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\320\264\320\265\320\275\320\275\321\213\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 \320\267\320\260\320\277\320\270\321\201\320\265\320\271", nullptr));
        showListButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        searchButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        showFullListButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
