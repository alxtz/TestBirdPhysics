#include <iostream>
#include <Box2D/Box2D.h>
#include "GameView.h"

using namespace std;

GameView::GameView(QWidget * parent)
: QGraphicsView(parent)
{
    setFixedSize(802 , 602);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //設定一個向量 gravity
    int gravityFactor = 1000;
    gravity = new b2Vec2( 0.0f , -9.8f * gravityFactor );

    //設定物理世界，使用 gravity
    physicWorld = new b2World(*gravity);
    cout<<"設定了物理世界"<<endl;

    gameScene = new GameScene(physicWorld);
    cout<<"設定了gameScene"<<endl;
    setScene(gameScene);
}
