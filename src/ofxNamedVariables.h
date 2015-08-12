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
	
	ofxNamedVariables() : prefix(""){
		
	}
	
	void setPrefix(string pre){
		prefix = pre;
	}
	
	// PRIMITIVES
	void addParam(const string & name, float & param){
		floatParams.insert(	make_pair(prefix+name, &param));
	};
	void addParam(const string & name, int & param){
		intParams.insert(	make_pair(prefix+name, &param));
	};
	void addParam(const string & name, string & param){
		strParams.insert(	make_pair(prefix+name, &param));
	};
	void addParam(const string & name, bool & param){
		boolParams.insert(	make_pair(prefix+name, &param));
	};
//	void addParam(const string & name, unsigned char & param){
//		charParams.insert(	make_pair(prefix+name, &param));
//	};
	
	// ofVecs
//	void addParam(const string & name, ofVec3f & param){
//		vec3fParams.insert(	make_pair(prefix+name, &param));
//	}
//	void addParam(const string & name, ofVec2f & param){
//		vec2fParams.insert(	make_pair(prefix+name, &param));
//	}
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
	
	// ofColor
	void addParam(const string & name, ofColor & param){
		colorParams.insert(	make_pair(prefix+name, &param));
	}
	
	
//	void addParam(const string & name, ofColor &param){
//		string r = name+"/r";
//		string g = name+"/g";
//		string b = name+"/b";
//		string a = name+"/a";
//		addParam(r, param.r);
//		addParam(g, param.g);
//		addParam(b, param.b);
//		addParam(a, param.a);
//	}
//
//	// ofFloatColor
//	void addParam(const string & name, ofFloatColor &param){
//		string r = name+"/r";
//		string g = name+"/g";
//		string b = name+"/b";
//		string a = name+"/a";
//		addParam(r, param.r);
//		addParam(g, param.g);
//		addParam(b, param.b);
//		addParam(a, param.a);
//	}

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
//	void setParam(const string & name, ofVec3f param){
//		map<string, ofVec3f*	>::iterator it = vec3fParams.find(name);
//		if(it != vec3fParams.end()){
//			(it->second)->set(param);
//		}
//	}
//	void setParam(const string & name, ofVec2f param){
//		map<string, ofVec2f*	>::iterator it = vec2fParams.find(name);
//		if(it != vec2fParams.end()){
//			(it->second)->set(param);
//		}
//	}
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
//	// ofFloatColor
//	void setParam(const string & name, ofFloatColor & param){
//		string r = name+"/r";
//		string g = name+"/g";
//		string b = name+"/b";
//		string a = name+"/a";
//		setParam(r, param.r);
//		setParam(g, param.g);
//		setParam(b, param.b);
//		setParam(a, param.a);
//	}
	// ofColor
	void setParam(const string & name, ofColor param){
		map<string, ofColor*	>::iterator it = colorParams.find(name);
		if(it != colorParams.end()){
			(it->second)->set(param);
		}
	}
	
//	void setParam(const string & name, ofColor & param){
//		string r = name+"/r";
//		string g = name+"/g";
//		string b = name+"/b";
//		string a = name+"/a";
//		setParam(r, param.r);
//		setParam(g, param.g);
//		setParam(b, param.b);
//		setParam(a, param.a);
//	}
protected:
	map<string, float*			>	floatParams;
	map<string, int*			>	intParams;
	map<string, string*			>	strParams;
	map<string, bool*			>	boolParams;
//	map<string, unsigned char*	>	charParams;
	
	map<string, ofColor *> colorParams;
	map<string, ofVec3f *> vec3fParams;
	map<string, ofVec2f *> vec2fParams;
	
	string prefix;
};