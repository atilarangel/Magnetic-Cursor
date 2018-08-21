#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------

void ofApp::draw(){
	ofBackground(153, 185, 152);

	int getWidth = ofGetWindowWidth();
	int getHeight = ofGetWindowHeight();
	int valueWidth = getWidth % 15 == 1 ? 15 : 14;
	int valueHeight = 14;

	int count = -13, x1 = 0, y1 = 0, x2 = (getWidth / valueWidth)/2, y2 = 50, x3 = (getWidth / valueWidth), y3 = 0,
	x12 = 0, y12 = 100, x22 = (getWidth / valueWidth) / 2, y22 = 50, x32 = (getWidth / valueWidth), y32 = 100;
	ofNoFill();
	ofSetColor(253, 206, 169);
	
	//ofDrawTriangle(x1+100, y1, (x2+100 + 10 <= ofGetMouseX() ? ofGetMouseX() : x2 + 100), (y2 + 10 <= ofGetMouseY() ? ofGetMouseY() : y2), x3+100, y3);
		while (count <= valueWidth*6) {
			ofNoFill();
			ofSetColor(253, 206, 169);
			if (count % 2 == 0) {
				ofNoFill();
				ofSetColor(244, 131, 125);
			}
			if (count % 3 == 0) {
				ofNoFill();
				ofSetColor(234, 73, 95);
			}

			ofDrawTriangle(
				(x1 + 50 >= ofGetMouseX() && x1 - 50 <= ofGetMouseX() && y1 + 30 >= ofGetMouseY() && y1 - 30 <= ofGetMouseY() ? ofGetMouseX() : x1),
				y1,
				(x2 + 50 >= ofGetMouseX() && x2 - 50 <= ofGetMouseX() && y2 + 30 >= ofGetMouseY() && y2 - 30 <= ofGetMouseY() ? ofGetMouseX() : x2),
				y2,
				(x3 + 50 >= ofGetMouseX() && x3 - 50 <= ofGetMouseX() && y3 + 30 >= ofGetMouseY() && y3 - 30 <= ofGetMouseY() ? ofGetMouseX() : x3),
				y3);
			ofDrawTriangle(
				(x12 + 50 >= ofGetMouseX() && x12 - 50 <= ofGetMouseX() && y12 + 30 >= ofGetMouseY() && y12 - 30 <= ofGetMouseY() ? ofGetMouseX() : x12),
				y12,
				(x22 + 50 >= ofGetMouseX() && x22 - 50 <= ofGetMouseX() && y22 + 30 >= ofGetMouseY() && y22 - 30 <= ofGetMouseY() ? ofGetMouseX() : x22),
				y22,
				(x32 + 50 >= ofGetMouseX() && x32 - 50 <= ofGetMouseX() && y32 + 30 >= ofGetMouseY() && y32 - 30 <= ofGetMouseY() ? ofGetMouseX() : x32),
				y32);
			
			if (count % valueWidth == 1) {
				y1 += 100;
				y2 += 100;
				y3 += 100;

				y12 += 100;
				y22 += 100;
				y32 += 100;

				x1 = 0;
				x2 = (getWidth / valueWidth) / 2;
				x3 = (getWidth / valueWidth);

				x12 = 0;
				x22 = (getWidth / valueWidth) / 2;
				x32 = (getWidth / valueWidth);

			}
			else {
				x1 += getWidth / valueWidth;
				x2 += getWidth / valueWidth;
				x3 += getWidth / valueWidth;

				x12 += getWidth / valueWidth;
				x22 += getWidth / valueWidth;
				x32 += getWidth / valueWidth;
			}

			count++;
		}
}

