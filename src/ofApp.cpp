#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    ofSetCircleResolution(100);
    ofBackground(0);
    
    Sound.loadSound("medusa.mp3");
    Sound.setLoop(true);
    Sound.play();
    
    vidGrabber.setVerbose(true);
    vidGrabber.setDeviceID(0);
    vidGrabber.initGrabber(ofGetWidth(), ofGetHeight());

    
    for(int i = 0;i < CIRCLE_NUM;i++){
        indicator[i].init();
    }

  
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0;i < CIRCLE_NUM;i++){
        indicator[i].update();
    }
    
    vidGrabber.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(250,250,250);
    vidGrabber.draw(0, 0);
    
    float cloudSize = ofGetWidth()/2;
    
    cam.begin();
    
    float t = (ofGetElapsedTimef() + spacing) * movementSpeed;
    
    x=ofSignedNoise(t, 0, 0);
    y=ofSignedNoise(0, 0, t);
    z=ofSignedNoise(0, t, 0);
    
    ofVec3f pos(x,y,z);
    
    pos *= cloudSize;
    
    ofTranslate(pos);
    
    ofRotateX(pos.x);
    ofRotateY(pos.y);
    ofRotateZ(pos.z);
    

    
    for(int i = 0;i < CIRCLE_NUM;i++){
        indicator[i].draw();
    }
    cam.end();
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();  }

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
