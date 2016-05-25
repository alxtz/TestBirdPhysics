#ifndef TAKO_H
#define TAKO_H

#include <Box2D/Box2D.h>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include "GameItem.h"

class Tako : public QObject , public QGraphicsPixmapItem , public GameItem
{
    Q_OBJECT

    public:
        Tako(b2World * inputWorld);

    public slots:
        void updatePos();
};

#endif // TAKO_H
