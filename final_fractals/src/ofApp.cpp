#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLineWidth(1);
    ofNoFill();
    x=0;
    y=0;
    hw=ofGetWindowWidth()/2;
    hh=ofGetWindowHeight()/2;
    g=0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(0);
    ofBeginShape();
    branching(0,rDeg);
    ofEndShape();
   
}
void ofApp::branching(float z,float g) {
    g-=10000;
    z+=(800/100.0)+1;
    if (z<ofGetWindowWidth()) {
        x=cos(g)*100+hw;
        y=sin(g)*100+hh;
        ofLine(x,y,z,0);
      
        ofLine(x,y,z,ofGetWindowHeight());
        branching(z,g);
    }
}
