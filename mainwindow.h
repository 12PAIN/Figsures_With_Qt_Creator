#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_released();

    void on_createFigureButton_released();

    void on_figuresPrismsSwitcher_released();

    void on_pushButtonPrevFig_released();

    void on_pushButtonDelFigure_released();

    void on_makePrismButton_released();

    void on_createPrism_released();

    void on_scalePlusButton_released();

    void on_scaleMinusButton_released();

    void on_actionmoveUp_triggered();

    void on_actionmoveDown_triggered();

    void on_actionmoveLeft_triggered();

    void on_actionmoveRight_triggered();

    void on_moveUp_released();

    void on_moveLeft_released();

    void on_moveDown_released();

    void on_moveRight_released();

    void on_moveUp_pressed();

    void on_heightMinus_released();

    void on_heightPlus_released();

    void on_rotateUp_released();

    void on_rotateRight_released();

    void on_rotateDown_released();

    void on_rotateLeft_released();

    void on_MainWindow_buttonListClickedSignal(int);

    void on_MainWindow_buttonListClickedSignal();

    void on_MainWindow_createButtonClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
