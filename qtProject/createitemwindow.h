#ifndef CREATEITEMWINDOW_H
#define CREATEITEMWINDOW_H

#include <QDialog>

namespace Ui {
class CreateItemWindow;
}

class CreateItemWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateItemWindow(QWidget *parent = 0);
    ~CreateItemWindow();

private:
    Ui::CreateItemWindow *ui;
};

#endif // CREATEITEMWINDOW_H
