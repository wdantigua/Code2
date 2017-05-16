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
    dec=0;
}

//--------------------------------------------------------------
void ofApp::update(){
    dec-=0.00003;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWindowWidth(), ofGetWindowHeight()*0.00001);
    ofRotate(90);
    ofEnableBlendMode( OF_BLENDMODE_ADD);
    ofSetBackgroundColor(50);
//    ofBeginShape();
    branching(0,rDeg);
//    ofEndShape();
   
}
void ofApp::branching(float z,float g) {
    g-=dec;
    z+=(300/100.0)+1;
    if (z<ofGetWindowWidth()) {
        x=cos(g)*100+hw;
        y=sin(g)*100+hh;
        ofSetColor(255,100);
        ofLine(x-100,y+150,z,ofGetWindowWidth());
      
        ofLine(x-100,y+150,z,0);
        branching(z,g);
    }
}
