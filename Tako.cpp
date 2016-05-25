#include <iostream>
#include <QPixmap>
#include "Tako.h"

using namespace std;

Tako::Tako(b2World * inputWorld)
{
    inWorld = inputWorld ;

    setPos( 350 , 100 );

    setPixmap(QPixmap("./Images/tako.png"));
    setTransformOriginPoint(boundingRect().width()/2 , boundingRect().height()/2);

    cout<<"設定了圖樣"<<endl;

    //設定物體的結構
    bodyStruct->type = b2_dynamicBody;
    bodyStruct->position.Set( PixToMeter_x(x()) , PixToMeter_y(y()) );
    cout<<"Tako的Box2D位置為"<<PixToMeter_x(x())<<","<<PixToMeter_y(y())<<endl;
    bodyStruct->angle = 0 ;

    cout<<"設定了結構"<<endl;


    //設定物體的定製器

        //設定一種形狀
        b2CircleShape * circleShape = new b2CircleShape();
        circleShape->m_p.Set(0 , 0);
        circleShape->m_radius = 150 ;

    bodyFixture->shape = circleShape ;
    bodyFixture->density = 0.5 ;
    bodyFixture->friction = 1 ;
    bodyFixture->restitution = 5;
    cout<<"設定了定製器"<<endl;

    //把物體跟定製器加進inWorld裡做運算
    physicBody = inWorld->CreateBody(bodyStruct);
    physicBody->CreateFixture(bodyFixture);


    //給鳥一個速度
    physicBody->SetLinearVelocity(b2Vec2(0 , 50));

    //設定鳥受重力的幅度
    physicBody->SetGravityScale(0.1);

    cout<<"Tako Ctor end"<<endl;
}

void Tako::updatePos()
{
    b2Vec2 pos;
    pos = physicBody->GetPosition();

    setPos(MeterToPix_x(pos.x) , MeterToPix_y(pos.y));

    //cout<<"位置為("<<x()<<","<<y()<<")"<<endl;

    b2Vec2 vel;
    vel = physicBody->GetLinearVelocity();

    cout<<"目前的x速度為"<<vel.x<<endl;

    float angle;
    angle = physicBody->GetAngle();
    setRotation(RadToDeg(angle));

}
