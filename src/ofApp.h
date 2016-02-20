#pragma once

#include "ofMain.h"
#include "Indicator.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    int i;
    
    float cloudSize = ofGetWidth()/2;
    
    float spacing = 200;
    float x,y,z;
    float movementSpeed = 0.05;
    
    

    
    static const int CIRCLE_NUM = 100;
    
    //位置ベクトル
    Indicator indicator[CIRCLE_NUM];
    
    ofSoundPlayer Sound;
    
    ofEasyCam cam;
   
    ofVideoGrabber vidGrabber;
 
    
    
};
