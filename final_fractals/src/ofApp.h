#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void branching(float z,float g);
    
    float theta,rDeg=TWO_PI,x,y,dec;
    int g,hh,hw;

		
};
