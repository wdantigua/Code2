#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
    ofSetVerticalSync(true);
    cam.setDistance(200);
    
//    ofSetBackgroundColor(255);
    
    length = 10;
    size = 5;
    num = 35;
    grav = 200;
}

//--------------------------------------------------------------
void ofApp::update(){
    
   
   
    
    ofTranslate(ofGetWindowWidth()*0.5,ofGetWindowHeight()*0.5,0);
    ofRotateX((ofGetMouseY()/ofGetWindowHeight()));
    ofRotateZ(TWO_PI-((ofGetMouseX()/ofGetWindowWidth())*TWO_PI+PI));
    
    
  
}

//--------------------------------------------------------------
void ofApp::draw(){
    lite.enable();
    lit.enable();
    lit.setDirectional();
    cam.begin();
    mat.begin();
    x = sin(ofGetFrameNum()/50)*100;
    y = cos(ofGetFrameNum()/50)*100;
    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            x2 = (length*i+length/2-length*num/2);
            y2 = (length*j+length/2-length*num/2);
            
            distance = ofDist(x, y, x2, y2);
            
            distance = distance > grav? 0 : tan(((grav-distance)/grav)*HALF_PI)*(-grav/4);
            
                ofPushMatrix();
                ofTranslate(x2, y2, distance/10);
                ofDrawBox(size*2);
                ofPopMatrix();
          
        }
    }

    
//    fill(255, 0, 0);
    
    ofPushMatrix();
    ofTranslate(x, y, 0);
    ofDrawSphere(10);
    ofPopMatrix();
    mat.end();
    cam.end();
}
//void drawBox(float x, float y, float z, int r) {
////    ofColor c = 200+2*z;
////    c = c < 0 ? 0 : c;
////    
////   ofSetColor(c);
//    ofPushMatrix();
//    ofTranslate(x, y, z);
//    ofDrawBox(r*2);
//    ofPopMatrix();
//}



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

