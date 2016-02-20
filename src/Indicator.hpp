//
//  Indicator.hpp
//  lit_assignment_2
//
//  Created by Minami Inoue on 2016/02/16.
//
//

#ifndef Indicator_hpp
#define Indicator_hpp

#include "ofMain.h"

class Indicator{
public:
    void init();
    void update();
    void draw();
    

    
    int size_rect = 0;
    
    float *volume;
    

  
    ofVec3f position;
    ofVec3f velocity;
    
    ofBoxPrimitive box;
   
    
  
    
private:
   
};



#endif /* Indicator_hpp */
