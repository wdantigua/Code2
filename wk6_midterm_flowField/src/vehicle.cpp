//
//  vehicle.cpp
//  wk6_midterm_flowField
//
//  Created by Wilson Diaz on 3/26/17.
//
//

#include "vehicle.hpp"




vehicle::vehicle(ofVec2f _loc)
{
    loc = _loc;
    vel.set(0, 0);
    acc.set(0, 0);
    
    r=2;
    maxSpeed = 1;
    maxForce = 3;
    


}

void vehicle::update()
{
    loc+= vel;
    vel += acc;
    vel.limit(maxSpeed);
    acc *= 0;

}
void vehicle::applyForce(ofVec2f force)
{
   
    acc+= force;
}
void vehicle::follow(flowfield flow)
{
    
    desired = flow.lookup(loc);
    desiredMouse = flow.lookup(mouse);
    steer = desired - vel;
    steerMouse.limit(maxForce);
    steer.limit(maxForce);
    applyForce(steer);
    applyForce(steerMouse);
}

void vehicle::display(ofColor c)
{
    float d = vel.x;
    float e = vel.y;
    d = ofMap(d, 1, -1, 0, 255);
    e = ofMap(e, -1, 1, 0, 255);
    ofSetColor((255-d, e, d, 220));
    ofFill();
    ofPushMatrix();
    ofTranslate(loc.x, loc.y);
    ofDrawCircle(0, 0, r);
    ofPopMatrix();
    
}


void vehicle::borders()
{
    if (loc.x < -50 || loc.x > ofGetWindowWidth() +50 || loc.y < 0 -50 || loc.y > ofGetWindowHeight() +50) {
        loc.x = ofRandom(ofGetWindowWidth());
        loc.y = ofRandom(ofGetWindowHeight());
    }
    
    
   }

