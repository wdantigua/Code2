#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    pos = ofVec2f(0, 0);
    vel = ofVec2f(0, 0);
    acc = ofVec2f(0,0);
    mass = 2;
    limit = ofVec2f(10, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
    pos += vel;
    vel+= acc;
    acc *= 0;
    force = ofVec2f(0.2, 0)/mass;
    acc += force;
 
    
  
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawRectangle(pos.x, pos.y, 100, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
