#pragma once

//
//  ofxNamedVariables.h
//  life_2013
//
//  Created by FURUDATE Ken on 10/31/13.
//
//

#include "ofMain.h"

class ofxNamedVariables{
public:
	
	// PRIMITIVES
	void addParam(const string & name, float & param){
		floatParams.insert(	make_pair(name, &param));
	};
	void addParam(const string & name, int & param){
		intParams.insert(	make_pair(name, &param));
	};
	void addParam(const string & name, string & param){
		strParams.insert(	make_pair(name, &param));
	};
	void addParam(const string & name, bool & param){
		boolParams.insert(	make_pair(name, &param));
	};
	
	// ofVecs
	void addParam(const string & name, ofVec3f & param){
		string x = name+"/x";
		string y = name+"/y";
		string z = name+"/z";
		addParam(x, param.x);
		addParam(y, param.y);
		addParam(z, param.z);
	}
	void addParam(const string & name, ofVec2f &param){
		string x = name+"/x";
		string y = name+"/y";
		addParam(x, param.x);
		addParam(y, param.y);
	}

	// --------------------------------------------

	// PRIMITIVES
	void setParam(const string & name, float param){
		map<string, float*	>::iterator it = floatParams.find(name);
		if(it != floatParams.end()){
			*(it->second) = param;
		}
	}
	void setParam(const string & name, int param){
		map<string, int*	>::iterator it = intParams.find(name);
		if(it != intParams.end()){
			*(it->second) = param;
		}
	}
	void setParam(const string & name, string param){
		map<string, string*	>::iterator it = strParams.find(name);
		if(it != strParams.end()){
			*(it->second) = param;
		}
	}
	void setParam(const string & name, bool param){
		map<string, bool*	>::iterator it = boolParams.find(name);
		if(it != boolParams.end()){
			*(it->second) = param;
		}
	}
	// ofVecs
	void setParam(const string & name, ofVec3f & param){
		string x = name+"/x";
		string y = name+"/y";
		string z = name+"/z";
		setParam(x, param.x);
		setParam(y, param.y);
		setParam(z, param.z);
	}
	void setParam(const string & name, ofVec2f & param){
		string x = name+"/x";
		string y = name+"/y";
		setParam(x, param.x);
		setParam(y, param.y);
	}

protected:
	map<string, float*	>	floatParams;
	map<string, int*	>	intParams;
	map<string, string*	>	strParams;
	map<string, bool*	>	boolParams;
};