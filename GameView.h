#ifndef GAMEVIEW_H
#define GAMEVIEW_H


#include <Box2D/Box2D.h>
#include <QGraphicsView>
#include "GameScene.h"

class GameView : public QGraphicsView
{
    public:
        GameView(QWidget * parent = 0);

    private:
        GameScene * gameScene;
        b2World * physicWorld;
        b2Vec2 * gravity;
};

#endif // GAMEVIEW_H
