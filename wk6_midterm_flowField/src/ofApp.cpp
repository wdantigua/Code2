#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    
    for (int i = 0; i < num; i++) {
        vehicles.push_back(vehicle(ofVec2f(ofRandom(ofGetWindowWidth()), ofRandom(ofGetWindowHeight()))));
    }
    flowField=flowfield();
}


//--------------------------------------------------------------
void ofApp::update(){
    mouse.set(ofGetMouseX(), ofGetMouseY());
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (vehicle v : vehicles) {
        
        v.follow(flowField);
        v.update();
        v.display(255);
        v.borders();
    }
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
