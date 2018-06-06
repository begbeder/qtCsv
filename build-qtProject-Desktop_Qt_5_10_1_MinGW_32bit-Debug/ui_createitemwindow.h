/********************************************************************************
** Form generated from reading UI file 'createitemwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEITEMWINDOW_H
#define UI_CREATEITEMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateItemWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userName;
    QLineEdit *userLastName;
    QLabel *label_3;
    QDateEdit *userDate;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *listLearningProgram;
    QLabel *label_6;
    QComboBox *listLearningYear;
    QPushButton *saveUserButton;
    QLabel *errorLabel;

    void setupUi(QDialog *CreateItemWindow)
    {
        if (CreateItemWindow->objectName().isEmpty())
            CreateItemWindow->setObjectName(QStringLiteral("CreateItemWindow"));
        CreateItemWindow->resize(401, 409);
        label = new QLabel(CreateItemWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 261, 16));
        label_2 = new QLabel(CreateItemWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 55, 16));
        userName = new QLineEdit(CreateItemWindow);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(120, 60, 141, 22));
        userLastName = new QLineEdit(CreateItemWindow);
        userLastName->setObjectName(QStringLiteral("userLastName"));
        userLastName->setGeometry(QRect(120, 100, 141, 22));
        label_3 = new QLabel(CreateItemWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 55, 16));
        userDate = new QDateEdit(CreateItemWindow);
        userDate->setObjectName(QStringLiteral("userDate"));
        userDate->setGeometry(QRect(120, 140, 141, 22));
        label_4 = new QLabel(CreateItemWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 140, 55, 16));
        label_5 = new QLabel(CreateItemWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 180, 71, 16));
        listLearningProgram = new QComboBox(CreateItemWindow);
        listLearningProgram->setObjectName(QStringLiteral("listLearningProgram"));
        listLearningProgram->setGeometry(QRect(120, 180, 141, 22));
        label_6 = new QLabel(CreateItemWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 220, 81, 16));
        listLearningYear = new QComboBox(CreateItemWindow);
        listLearningYear->setObjectName(QStringLiteral("listLearningYear"));
        listLearningYear->setGeometry(QRect(120, 220, 141, 22));
        saveUserButton = new QPushButton(CreateItemWindow);
        saveUserButton->setObjectName(QStringLiteral("saveUserButton"));
        saveUserButton->setGeometry(QRect(12, 290, 251, 28));
        errorLabel = new QLabel(CreateItemWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(10, 340, 251, 21));

        retranslateUi(CreateItemWindow);

        QMetaObject::connectSlotsByName(CreateItemWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateItemWindow)
    {
        CreateItemWindow->setWindowTitle(QApplication::translate("CreateItemWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("CreateItemWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QApplication::translate("CreateItemWindow", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QApplication::translate("CreateItemWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("CreateItemWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_5->setText(QApplication::translate("CreateItemWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        label_6->setText(QApplication::translate("CreateItemWindow", "\320\223\320\276\320\264 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        saveUserButton->setText(QApplication::translate("CreateItemWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        errorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateItemWindow: public Ui_CreateItemWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEITEMWINDOW_H
