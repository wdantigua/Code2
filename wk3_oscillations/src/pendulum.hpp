//
//  pendulum.hpp
//  wk3_oscillations
//
//  Created by Wilson Diaz on 2/12/17.
//
//

#ifndef pendulum_hpp
#define pendulum_hpp

#include <stdio.h>
#include "ofMain.h"

class Pendulum
{
public:
    
    Pendulum();
    
    void go();
    void update();
    void display();
  
    
    
    
    ofVec2f origin, loc;
    float r, ang, aVel, aAcc, damp;
    



};


#endif /* pendulum_hpp */
