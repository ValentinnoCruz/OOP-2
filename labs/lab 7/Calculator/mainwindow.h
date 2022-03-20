#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed(); //function that executes when a signal is emitted

    // when we do this through the GUI interface it will add these for us.
    void on_pushButton_dot_released();
    void unary_operation_pressed();         //declare unary operation
    void on_pushButton_clear_released();
    void on_pushButton_equals_released();
    void binary_operation_pressed();
};
#endif // MAINWINDOW_H
