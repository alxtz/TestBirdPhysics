#ifndef BOARD_H
#define BOARD_H


#include <Box2D/Box2D.h>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include "GameItem.h"

class Board : public QObject , public QGraphicsPixmapItem , public GameItem
{
    Q_OBJECT

    public:
        Board(b2World * inputWorld);

    public slots:
        void updatePos();
};

#endif // BOARD_H
