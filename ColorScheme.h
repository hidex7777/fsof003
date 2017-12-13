#pragma once
#include "ofMain.h"

class ColorScheme {
public:
	ColorScheme();
	~ColorScheme() {};
	ofColor getColor(string cname);
};