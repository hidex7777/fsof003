#pragma once
#include "ofMain.h"

class Unit {
public:
	Unit(int dimsize);
	~Unit() {};
	void update(int dimsize);
	void draw();
	void setStickInUnit(ofColor col, int alp, int slen, int swei);
	void setBallInUnit(ofColor col, int alp, int siz);
	void setBlockInUnit(ofColor col, int alp, int fwe, int fstep);
private:
	ofVec3f location;
	ofVec3f velocity;
	int orient;
	ofSpherePrimitive ball;
	ofColor ballcolor;
	ofColor stickcolor;
	int sticklen;
	int stickweight;
	ofColor blockcolor;
	int blockandball;
	int blocksize;
	int blockalpha;
	int blockweight;
	int blockstep;
	vector<float> frames;
};