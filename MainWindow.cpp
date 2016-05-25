#include <iostream>
#include "MainWindow.h"
#include "ui_MainWindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    setFixedSize(802 , 602);

    ui->setupUi(this);

    gameView = new GameView(this);
    gameView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
