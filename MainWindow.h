#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QGraphicsView>
#include <QMainWindow>
#include <QGraphicsScene>
#include "GameView.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        //禁止隱式轉換
        ~MainWindow();

    private:
        Ui::MainWindow * ui;

        GameView * gameView;
};


#endif // MAINWINDOW_H
