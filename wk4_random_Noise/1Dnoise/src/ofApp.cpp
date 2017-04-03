#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    xOff = 0;
    inc = .01;
    ofSetBackgroundColor(0);
//    ofSetFrameRate(60);

    
}

//--------------------------------------------------------------
void ofApp::update(){
//    x = ofMap(ofNoise(xOff), 0, 1, 0, ofGetWindowWidth());

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetLineWidth(20);
    ofTranslate(0, 300);
    ofNoFill();
    ofBeginShape();
    xOff = start;
    for(int x = 0; x < ofGetWindowWidth(); x++){
        
        float n = ofNoise(xOff) * 200;
        float s = sin(xOff) * ofGetWindowWidth()/6;
        
        y = n + s;
        ofVertex(x,y);
         xOff += inc;
    }
   
 start += inc;
    
    ofEndShape();
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
