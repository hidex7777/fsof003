#include "Unit.h"

Unit::Unit(int dimsize) {
	this->location.set(ofRandom(dimsize) - (dimsize * 0.5), ofRandom(dimsize) - (dimsize * 0.5), ofRandom(dimsize));
	this->velocity.set(ofRandom(-5, 5) * 3, ofRandom(-5, 5) * 3, ofRandom(-5, 5) * 3);
	this->orient = ofRandom(4);
	this->blocksize = ofRandom(dimsize * 0.5) + 350;
}
void Unit::update(int dimsize) {
	this->location += this->velocity;
	if ((this->location.x < dimsize * -0.5) || (this->location.x > dimsize * 0.5)) {
		this->location.x -= this->velocity.x;
		this->velocity.x *= -1;
	}
	if ((this->location.y < dimsize * -0.5) || (this->location.y > dimsize * 0.5)) {
		this->location.y -= this->velocity.y;
		this->velocity.y *= -1;
	}
	if ((this->location.z < 0) || (this->location.z > dimsize)) {
		this->location.z -= this->velocity.z;
		this->velocity.z *= -1;
	}
	this->ball.setPosition(this->location);
	//frames
	for (int i = 0; i < this->frames.size(); i++) {
		this->frames[i] = this->ball.getRadius() + (cos((ofGetFrameNum() * 0.1) + (i * 0.25))) * 22;
	}
}
void Unit::draw() {
	//ball
	ofSetColor(this->ballcolor);
	this->ball.draw();
	//stick
	ofSetColor(this->stickcolor);
	ofSetLineWidth(this->stickweight);
	ofVec3f mystart;
	ofVec3f myend;
	if (this->orient == 0) {
		//north
		mystart = this->location - ofVec3f(0, 0, this->sticklen + this->ball.getRadius());
		myend = this->location + ofVec3f(0, 0, this->blocksize + this->sticklen);
	}
	else if (this->orient == 1) {
		//east
		mystart = this->location + ofVec3f(this->sticklen + this->ball.getRadius(), 0, 0);
		myend = this->location - ofVec3f(this->blocksize + this->sticklen, 0, 0);
	}
	else if (this->orient == 2) {
		//south
		mystart = this->location + ofVec3f(0, 0, this->sticklen + this->ball.getRadius());
		myend = this->location - ofVec3f(0, 0, this->blocksize + this->sticklen);
	}
	else if (this->orient == 3) {
		//west
		mystart = this->location - ofVec3f(this->sticklen + this->ball.getRadius(), 0, 0);
		myend = this->location + ofVec3f(this->blocksize + this->sticklen, 0, 0);
	}
	ofDrawLine(mystart, myend);
	//block
	ofSetColor(this->blockcolor);
	ofSetLineWidth(this->blockweight);
	if (this->orient == 0) {
		//north
		for (int i = 0; i < this->frames.size(); i++) {
			ofDrawLine(ofVec3f(this->location.x - this->frames[i], this->location.y + this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball),
				ofVec3f(this->location.x + this->frames[i], this->location.y + this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball));
			ofDrawLine(ofVec3f(this->location.x + this->frames[i], this->location.y + this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball),
				ofVec3f(this->location.x + this->frames[i], this->location.y - this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball));
			ofDrawLine(ofVec3f(this->location.x + this->frames[i], this->location.y - this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball),
				ofVec3f(this->location.x - this->frames[i], this->location.y - this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball));
			ofDrawLine(ofVec3f(this->location.x - this->frames[i], this->location.y - this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball),
				ofVec3f(this->location.x - this->frames[i], this->location.y + this->frames[i], this->location.z + (this->blockstep * i) + this->blockandball));
		}
	}
	else if (this->orient == 1) {
		//east
		for (int i = 0; i < this->frames.size(); i++) {
			ofDrawLine(ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y + this->frames[i], this->location.z - this->frames[i]),
				ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y + this->frames[i], this->location.z + this->frames[i]));
			ofDrawLine(ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y + this->frames[i], this->location.z + this->frames[i]),
				ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y - this->frames[i], this->location.z + this->frames[i]));
			ofDrawLine(ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y - this->frames[i], this->location.z + this->frames[i]),
				ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y - this->frames[i], this->location.z - this->frames[i]));
			ofDrawLine(ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y - this->frames[i], this->location.z - this->frames[i]),
				ofVec3f(this->location.x - this->blockandball - (this->blockstep * i), this->location.y + this->frames[i], this->location.z - this->frames[i]));
		}
	}
	else if (this->orient == 2) {
		//south
		for (int i = 0; i < this->frames.size(); i++) {
			ofDrawLine(ofVec3f(this->location.x - this->frames[i], this->location.y + this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball),
				ofVec3f(this->location.x + this->frames[i], this->location.y + this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball));
			ofDrawLine(ofVec3f(this->location.x + this->frames[i], this->location.y + this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball),
				ofVec3f(this->location.x + this->frames[i], this->location.y - this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball));
			ofDrawLine(ofVec3f(this->location.x + this->frames[i], this->location.y - this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball),
				ofVec3f(this->location.x - this->frames[i], this->location.y - this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball));
			ofDrawLine(ofVec3f(this->location.x - this->frames[i], this->location.y - this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball),
				ofVec3f(this->location.x - this->frames[i], this->location.y + this->frames[i], this->location.z - (this->blockstep * i) - this->blockandball));
		}
	}
	else if (this->orient == 3) {
		//west
		for (int i = 0; i < this->frames.size(); i++) {
			ofDrawLine(ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y + this->frames[i], this->location.z - this->frames[i]),
				ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y + this->frames[i], this->location.z + this->frames[i]));
			ofDrawLine(ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y + this->frames[i], this->location.z + this->frames[i]),
				ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y - this->frames[i], this->location.z + this->frames[i]));
			ofDrawLine(ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y - this->frames[i], this->location.z + this->frames[i]),
				ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y - this->frames[i], this->location.z - this->frames[i]));
			ofDrawLine(ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y - this->frames[i], this->location.z - this->frames[i]),
				ofVec3f(this->location.x + this->blockandball + (this->blockstep * i), this->location.y + this->frames[i], this->location.z - this->frames[i]));
		}
	}
}
void Unit::setStickInUnit(ofColor col, int alp, int slen, int swei) {
	this->stickcolor = ofColor(col, alp);
	this->sticklen = slen;
	this->stickweight = swei;
}
void Unit::setBallInUnit(ofColor col, int alp, int siz) {
	this->ballcolor = ofColor(col, alp);
	this->ball.setRadius(ofRandom(siz) + siz);
}
void Unit::setBlockInUnit(ofColor col, int alp, int fwe, int fstep) {
	this->blockcolor = ofColor(col, alp);
	this->blockweight = fwe;
	this->blockstep = fstep;
	this->blockandball = this->sticklen;
	int fnum = floor((this->blocksize - this->sticklen) / this->blockstep);
	for (int i = 0; i < fnum; i++) {
		this->frames.push_back((this->ball.getRadius() * 0.7) + (cos(i * 5) * 15));
	}
}