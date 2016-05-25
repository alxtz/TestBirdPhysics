#ifndef GAMESCENE_H
#define GAMESCENE_H


#include <QTimer>
#include <QGraphicsScene>
#include "Tako.h"
#include "Board.h"

class GameScene : public QGraphicsScene
{
    Q_OBJECT

    public:
        GameScene(b2World * inputWorld);

        Tako * tako;
        Board * board;
        b2World * useWorld;
        //timer放在scene裡面比較方便

        QTimer * timer60;

    public slots:
        void updateWorld();
};

#endif // GAMESCENE_H
