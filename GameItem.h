#ifndef GAMEITEM_H
#define GAMEITEM_H


#include <Box2D/Box2D.h>

class GameItem
{
    public:
        GameItem();

    protected:
        b2Body * physicBody;
        b2BodyDef * bodyStruct;
        b2FixtureDef * bodyFixture;

        b2World * inWorld;

        float PixToMeter_x(float Pix);
        float MeterToPix_x(float Meter);

        float PixToMeter_y(float Pix);
        float MeterToPix_y(float Meter);

        float RadToDeg(float Rad);
        float DegToRad(float Deg);
};


#endif // GAMEITEM_H
