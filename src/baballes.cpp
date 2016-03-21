//
//  baballes.cpp
//  verif
//
//  Created by Marion Guillon on 21/03/2016.
//
//
#include "baballes.h"

/*
class Baballe
{
    
    public :
    
    ofVec2f pos;
    ofVec2f dir;
    float   radius;
    Baballe *next = NULL;
    
    void printpos()
    {
        std::cout<< "initial position :\nx = " << pos.x << ", y = " << pos.y << std::endl;
    }
    void setup ()
    {
        
    }
    
    void drawbaballe()
    {
        
        ofSetColor(127, 60, 70);
        ofFill();
        ofDrawCircle(pos.x, pos.y, radius);
        printpos();
    }
};


 : Baballe (float posx, float posy, float radius)
 {
 pos.set (posx, posy);
 }
 

void addbaballe(float x, float y, float counter, Baballe *balles)
{
    Baballe newballe(x, y, counter);
    balles->next = &newballe;
    
};
*/
void setup(float posx, float posy, float counter, Baballe *balles)
{
    Baballe newballe;
    newballe.pos.x = posx;
    newballe.pos.y = posy;
    newballe.radius = counter;
 //   newballe.next = NULL;
}
void update()
{
    
}
void draw()
{
    
}
