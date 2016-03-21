
#include "baballes.h"
Baballe::Baballe(){
    
}

void Baballe::setup(float x, float y, float r){
    //assigne a x y et radius les bonnes valeurs
    ofLogNotice("Baballe::setup radius") << r;
    posx = x;
    posy = y;
    radius = r;
}
void Baballe::update(float x, float y){
    
    posx = x;
    posy = y;
    std::cout << "Baballe::update x : " << posx << ", y : " << posy << ", radius : " << radius << endl ;
    
}
void Baballe::draw(){
    
    std::cout << "Baballe::draw x : " << posx << ", y : " << posy << ", radius : " << radius << endl ;

    ofSetColor(255,130,0);
    ofDrawCircle(posx, posy, radius);
}
