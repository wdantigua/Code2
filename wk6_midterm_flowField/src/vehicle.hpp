//
//  vehicle.hpp
//  wk6_midterm_flowField
//
//  Created by Wilson Diaz on 3/26/17.
//
//

#pragma once
#include "flowfield.hpp"
#include "ofMain.h"


class vehicle{
public:
    
    vehicle(ofVec2f loc);
    void update();
    void applyForce(ofVec2f force);
    void follow(flowfield flow);
    void borders();
    void display(ofColor c);
    
    
    ofVec2f loc,vel,acc;
    
    ofVec2f desired,desiredMouse,steer,steerMouse,mouse;
    
    float r, maxSpeed,maxForce;
    
};
