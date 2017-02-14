#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   
    
    pos1 = ofVec2f(0,0);
     pos2 = ofVec2f(0,50);
     pos3 = ofVec2f(25,25);
    vel = ofVec2f(0);
    acc = ofVec2f(0);
    rad =1;
    amp = 300;
    ang=0;
    angVel = 0;
    angAc = 0.001;
  

}

//--------------------------------------------------------------
void ofApp::update(){
    ang+= angVel;
    angVel+= angAc;
   
    if (ang > 1)
    {
        
        angAc = 0;
    }

    cout<<ang<<" "<<angVel<<" "<<angAc<< endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
//     ofTranslate(0,ofGetHeight()/2);
    ofTranslate(ofGetWidth()/2, amp*sin(ang + ofGetHeight()/2));
    ofRotate(amp*sin(ang)*0.2);
    ofSetColor(255);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawTriangle(pos1, pos2, pos3);
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
