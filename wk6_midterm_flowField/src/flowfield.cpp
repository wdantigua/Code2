//
//  flowfield.cpp
//  wk6_midterm_flowField
//
//  Created by Wilson Diaz on 3/26/17.
//
//

#include "flowfield.hpp"




flowfield::flowfield()
{
    res = 20;
    cols = ofGetWindowWidth()/res;
    rows = ofGetWindowHeight()/res;
    
    ofVec2f field [cols][rows];
    init();
}
void flowfield::init()
{
    ofNoise(ofRandom(10000));
    float xoff = 0.5;
    for (int i = 0; i < cols; i++) {
        float yoff = 0;
        for (int j = 0; j < rows; j++) {
            float theta = ofMap(ofNoise(xoff, yoff), 0, 1, 0, 4*TWO_PI);
            field[i][j].set(cos(theta), sin(theta));
            yoff += 0.05;
        }
        xoff += 0.05;
    }
}
ofVec2f flowfield::lookup(ofVec2f lookup)
{
    int column = int(ofClamp(lookup.x/res, 0, cols-1));
    int row = int(ofClamp(lookup.y/res, 0, rows-1));
    return field[column][row];
}
