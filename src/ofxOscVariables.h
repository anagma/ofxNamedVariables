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
		if(m.getArgType(0) == OFXOSC_TYPE_FLOAT){
			ofxNamedVariables::setParam(addr, m.getArgAsFloat(0));
		}else if(m.getArgType(0) == OFXOSC_TYPE_INT32){
			ofxNamedVariables::setParam(addr, m.getArgAsInt32(0));
			ofxNamedVariables::setParam(addr, m.getArgAsInt32(0)>0);
		}else if(m.getArgType(0) == OFXOSC_TYPE_STRING){
			ofxNamedVariables::setParam(addr, m.getArgAsString(0));
		}
	}
};