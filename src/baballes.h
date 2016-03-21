#pragma once
#include "ofMain.h"

class Baballe{
    
public:
    void setup(float x, float y, float radius);
    void update(float x, float y);
    void draw();
    
    float posx;
    float posy;
    float radius;
    
    Baballe();
};