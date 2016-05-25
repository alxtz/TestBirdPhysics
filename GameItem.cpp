#include <iostream>
#include "GameItem.h"

using namespace std;

GameItem::GameItem()
{
    cout<<"gameItem ctor"<<endl;
    bodyStruct = new b2BodyDef();
    bodyFixture = new b2FixtureDef();
}

float GameItem::PixToMeter_x(float Pix)
{
    return Pix;
}

float GameItem::MeterToPix_x(float Meter)
{
    return Meter;
}

float GameItem::PixToMeter_y(float Pix)
{
    return 600-Pix;
}

float GameItem::MeterToPix_y(float Meter)
{
    return 600-Meter;
}

float GameItem::RadToDeg(float Rad)
{
    return Rad * 180 /3.1415926f;
}

float GameItem::DegToRad(float Deg)
{
    return 3.1415926 / 180 * Deg;
}



