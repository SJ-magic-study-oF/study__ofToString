#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle( "ofToString test");
	ofSetWindowShape( 600, 400 );
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	// ofSetEscapeQuitsApp(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

/******************************
ofToString(const T &value)
	T:unsigned char
		valueを文字として解釈し、これを文字列に格納する。
		
	T:int
		valueを整数として解釈し、これを文字列に格納する。
******************************/
void ofApp::keyPressed(int key){
	switch(key){
		case 'n':
		{
			/********************
			数値を扱いたいなら、intにcastすること。
			********************/
			unsigned char val = 10;
			string message = "";
			message += ofToString(int(val));
						
			printf("test: ");
			printf("%s\n", message.c_str());
		}
			break;
			
		case 't':
		{
			/********************
			文字列のケース
			********************/
			unsigned char val = 'A';
			string message = "";
			message += ofToString(val) + " = " + ofToString(int(val));
			
			printf("test: ");
			printf("%s\n", message.c_str());
		}
			break;
	}
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
