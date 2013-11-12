#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0, 0, 0);
	ofSetVerticalSync(true);
	ofSetFrameRate(30);
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofEnableBlendMode(OF_BLENDMODE_ADD);
	
	oscRecv.setup(12345);
	
	rotationVelocity.set(ofRandomf()*0.5, ofRandomf()*0.5, ofRandomf()*0.5);
	rotation.set(0, 0, 0);

	oscVars.addParam("/rotation", rotation);
	oscVars.addParam("/rotationVelocity", rotationVelocity);
}

//--------------------------------------------------------------
void testApp::update(){
	while (oscRecv.hasWaitingMessages()) {
		ofxOscMessage m;
		oscRecv.getNextMessage(&m);
		oscVars.setParam(m);
	}
	
	
	rotation += rotationVelocity;
}

//--------------------------------------------------------------
void testApp::draw(){
	glPushMatrix();
	glTranslated(ofGetWidth()/2, ofGetHeight()/2, 0);
	
	ofNoFill();
	ofSetColor(255, 64);
	
	for(int i=0; i<40; i++){
		glRotated(rotation.x, 1, 0, 0);
		glRotated(rotation.y, 0, 1, 0);
		glRotated(rotation.z, 0, 0, 1);
		ofRect(0, 0, (40-i)*10, (40-i)*10);
	}
	
	glPopMatrix();
	
	ofSetColor(255);
	ofDrawBitmapString("current rotation : "+ofToString(rotation), 20, 20);
	ofDrawBitmapString("rotation velocity: "+ofToString(rotationVelocity), 20, 40);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
