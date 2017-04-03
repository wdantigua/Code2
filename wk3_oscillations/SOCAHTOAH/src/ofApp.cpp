#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
  
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBlendMode(OF_BLENDMODE_SCREEN);
    ofNoFill();
     for(int i = 0; i < 3; i++) {
        ofBeginShape();
        for(int w = -20; w < ofGetWindowWidth() + 20; w += 5) {
             h = ofGetWindowHeight() / 2;
            h += 200 * sin(w * 0.03 + a * 0.07 + i * TWO_PI / 3) * pow(abs(sin(w * 0.001 + a * 0.02)), 5);
            ofCurveVertex(w, h);
        }
    }
        ofEndShape();
    a+=1;
 
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
