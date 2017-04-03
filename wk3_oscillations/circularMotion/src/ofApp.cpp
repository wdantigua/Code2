#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   
  
    r = 300;
    a = 30;
    aVel = 0.0;
    aAcc = 0.001;
    

}

//--------------------------------------------------------------
void ofApp::update(){
   
    
    x = r * sin(a);
    y =r * cos(a);
   
    cout<<x<<y<<endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
 
    ofTranslate(ofGetWindowWidth()*0.5, ofGetWindowHeight()*0.5);
    ofDrawCircle(x, y, r*0.1);
    
    a += aVel;
    aVel += aAcc;
    
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
