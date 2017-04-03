#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    scale = 1;
    cols = floor(ofGetWindowWidth()/scale);
    rows = floor(ofGetWindowHeight()/scale);
    
    inc = 0.01;
   ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    yOff = start;
    for(int y = 0; y < rows; y++){
        xOff = start;
        for(int x = 0; x < cols; x++){
            float r = ofMap(ofNoise(xOff,yOff), 0, 1, 255,100);
//            float g= ofMap(ofNoise(xOff,yOff), 0 ,1 ,0, 255);
//            float b= ofMap(ofNoise(xOff, yOff), 0 ,1 ,0, 255);
            xOff += inc;
            ofSetColor(ofColor(r));
            ofDrawCircle(x * scale, y * scale, scale);
        }
        yOff += inc;
    }
    start += inc * 20;

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
