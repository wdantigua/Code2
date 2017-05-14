//
//  flowfield.hpp
//  wk6_midterm_flowField
//
//  Created by Wilson Diaz on 3/26/17.
//
//

#pragma once
#include "ofMain.h"
//#include "vehicle.hpp"

class flowfield{
public:
    
    flowfield();
    void init();
    ofVec2f lookup(ofVec2f lookup);

   
    int cols,rows;
    int res;
    ofVec2f field [][];

};
