#include "ofApp.h"
#include "baballes.h"







//--------------------------------------------------------------
void ofApp::setup(){
    counter =   0;
    ofSetCircleResolution(50);
    ofBackground(255,255,255);
    ofSetWindowTitle("La Baballe");
    ofSetFrameRate(60);
    
    
    //balle1.setup(ofRandomWidth(), ofRandomHeight(), ofRandom(0, 40), );
    
}

//--------------------------------------------------------------
void ofApp::update(){
    counter = counter + 0.033f;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //let's draw a circle:
    /*ofSetColor(255,130,0);
    float radius = 50 + 10 * sin(counter);
    ofFill();		// draw "filled shapes"
    ofDrawCircle(100,400,radius);*/
  
/*
    while (balles->next)
    {
        ofDrawCircle((*balles).pos.x, (*balles).pos.y, (*balles).radius);
    }
}*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
   // Bababalle ballon(243, 353);
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
    ofLogNotice("j'ai clique ") << x;
    Baballe b;
    b.setup(x,y);
    baballes.push_back(b);
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
