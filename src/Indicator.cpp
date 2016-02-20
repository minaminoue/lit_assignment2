//
//  Indicator.cpp
//  lit_assignment_2
//
//  Created by Minami Inoue on 2016/02/16.
//
//

#include "Indicator.hpp"

void Indicator::init(){


    position.x = ofGetWidth() / 2;
    position.y = ofGetHeight() / 2;
    

}


void Indicator::update(){
    
    volume = ofSoundGetSpectrum(1);
    
    size_rect = volume[0]*1500;
    
   
    
}

void Indicator::draw(){
    
    //ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofSetColor(ofColor::fromHsb(ofGetElapsedTimeMillis() % 255,255,255));
    ofNoFill();
 
    box.set(size_rect);
    box.setPosition(0,0,0);
    box.drawWireframe();
    
    
    
    
   
    
}

    



