#include <iostream>
#include <QImage>
#include <QBrush>
#include "GameScene.h"

using namespace std;

GameScene::GameScene(b2World * inputWorld)
{
    cout<<"GameScene Ctor"<<endl;

    useWorld = inputWorld;

    setSceneRect(0 , 0 , 800 , 600);

    setBackgroundBrush(QBrush(QImage("./Images/background.png")));

    timer60 = new QTimer();
    timer60->setTimerType(Qt::PreciseTimer);
    timer60->start(17); //1/60秒
    connect(timer60 , SIGNAL(timeout()) , this , SLOT(updateWorld()));

    tako = new Tako(useWorld);
    //tako->setPos(200 , 200);
    cout<<"創建了新物體tako"<<endl;
    addItem(tako);
    connect(timer60 , SIGNAL(timeout()) , tako , SLOT(updatePos()));

    board = new Board(useWorld);
    board->setPos(0 , 500);
    addItem(board);
    connect(timer60 , SIGNAL(timeout()) , board , SLOT(updatePos()));
}

void GameScene::updateWorld()
{
    useWorld->Step(0.017f , 10 , 10);
    //update();
}
