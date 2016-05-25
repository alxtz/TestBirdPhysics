#include <iostream>
#include <QPixmap>
#include "Board.h"

using namespace std;

Board::Board(b2World * inputWorld)
{
    inWorld = inputWorld;

    setPixmap(QPixmap("./Images/board.png"));

    setPos(0 , 500);

    //設定物體的結構
    bodyStruct->type = b2_staticBody;
    bodyStruct->position.Set( PixToMeter_x(x()) , PixToMeter_y(y()) );
    bodyStruct->angle = 0;

    //設定定製器

        //設定一種形狀
        /*
        b2Vec2 vertices[4];
        vertices[0].Set(PixToMeter(0) , PixToMeter(0));
        vertices[1].Set(PixToMeter(800) , PixToMeter(0));
        vertices[2].Set(PixToMeter(800) , PixToMeter(100));
        vertices[3].Set(PixToMeter(0) , PixToMeter(100));

        b2PolygonShape * polygonShape = new b2PolygonShape();
        polygonShape->Set(vertices , 4);
        */
        b2EdgeShape * edgeShape = new b2EdgeShape();
        edgeShape->Set(b2Vec2(0,0), b2Vec2(800,0));

    bodyFixture->shape = edgeShape;
    bodyFixture->density = 0 ;
    bodyFixture->friction = 1 ;
    bodyFixture->restitution = 0.9 ;

    physicBody = inWorld->CreateBody(bodyStruct);
    physicBody->CreateFixture(bodyFixture);

}

void Board::updatePos()
{
    //b2Vec2 pos;

    //pos = physicBody->GetPosition();

    //setPos(MeterToPix_x(pos.x) , MeterToPix_y(pos.y));

    //cout<<"位置為("<<x()<<","<<y()<<")"<<endl;
}
