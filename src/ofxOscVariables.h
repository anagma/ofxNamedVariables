#pragma once
//
//  ofxOscParameterManager.h
//  life_2013
//
//  Created by FURUDATE Ken on 10/31/13.
//
//

#include "ofxNamedVariables.h"
#include "ofxOsc.h"

class ofxOscVariables : public ofxNamedVariables{
public:
	void setParam(ofxOscMessage &m){
		const string addr = m.getAddress();
//		if(m.getNumArgs() == 1){
//			cout << "1" << endl;
			if(m.getArgType(0) == OFXOSC_TYPE_FLOAT){
				ofxNamedVariables::setParam(addr, m.getArgAsFloat(0));
			}else if(m.getArgType(0) == OFXOSC_TYPE_INT32){
				ofxNamedVariables::setParam(addr, m.getArgAsInt32(0));
				ofxNamedVariables::setParam(addr, m.getArgAsInt32(0)>0);
			}else if(m.getArgType(0) == OFXOSC_TYPE_STRING){
				ofxNamedVariables::setParam(addr, m.getArgAsString(0));
			}
//		}else if(m.getNumArgs() == 2){
////			cout << "2" << endl;
//			ofVec2f v(m.getArgAsFloat(0), m.getArgAsFloat(1));
//			ofxNamedVariables::setParam(addr, v);
//			
////			ofxNamedVariables::setParam(addr+"/x", m.getArgAsFloat(0));
////			ofxNamedVariables::setParam(addr+"/y", m.getArgAsFloat(1));
//		}else if(m.getNumArgs() == 3){
////			cout << "3" << endl;
//			ofVec3f v(m.getArgAsFloat(0), m.getArgAsFloat(1), m.getArgAsFloat(2));
//			ofxNamedVariables::setParam(addr, v);
////			ofxNamedVariables::setParam(addr+"/x", m.getArgAsFloat(0));
////			ofxNamedVariables::setParam(addr+"/y", m.getArgAsFloat(1));
////			ofxNamedVariables::setParam(addr+"/z", m.getArgAsFloat(2));
//		}else if(m.getNumArgs() == 4){
////			cout << "4" << endl;
//			if(m.getArgType(0) == OFXOSC_TYPE_INT32){
//				ofColor c(m.getArgAsInt32(0), m.getArgAsInt32(1), m.getArgAsInt32(2), m.getArgAsInt32(3));
//				ofxNamedVariables::setParam(addr, c);
//				
////				ofxNamedVariables::setParam(addr+"/r", (unsigned char)m.getArgAsInt32(0));
////				ofxNamedVariables::setParam(addr+"/g", (unsigned char)m.getArgAsInt32(1));
////				ofxNamedVariables::setParam(addr+"/b", (unsigned char)m.getArgAsInt32(2));
////				ofxNamedVariables::setParam(addr+"/a", (unsigned char)m.getArgAsInt32(3));
//			}else if(m.getArgType(0) == OFXOSC_TYPE_FLOAT){
//				ofxNamedVariables::setParam(addr+"/r", m.getArgAsFloat(0));
//				ofxNamedVariables::setParam(addr+"/g", m.getArgAsFloat(1));
//				ofxNamedVariables::setParam(addr+"/b", m.getArgAsFloat(2));
//				ofxNamedVariables::setParam(addr+"/a", m.getArgAsFloat(3));
//			}
//		}
	}
};