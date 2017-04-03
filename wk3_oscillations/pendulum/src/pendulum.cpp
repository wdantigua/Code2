//
//  pendulum.cpp
//  wk3_oscillations
//
//  Created by Wilson Diaz on 2/12/17.
//
//

#include "pendulum.hpp"

Pendulum::Pendulum()
{
    origin = ofVec2f(ofGetWidth()/2,0);
    loc = ofVec2f();
    r =  200;
    ang = PI/4;
    
    aVel = 0.0;
    aAcc = 0.0;
    damp = 0.995;
}

void Pendulum::go()
{
    update();
    display();
}
void Pendulum::update()
{
    float gravity = 0.4;
    aAcc = (-1 * gravity / r) * sin(ang);
    aVel += aAcc;
    aVel *= damp;
    ang += aVel;
}
void Pendulum::display()
{
    loc.set(r*sin(ang), r*cos(ang));
    loc += origin;
    ofDrawLine(origin.x, origin.y, loc.x, loc.y);
    ofSetColor(0,0,255);
    ofDrawEllipse(loc.x, loc.y, 48, 48);
}
