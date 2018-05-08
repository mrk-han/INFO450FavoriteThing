#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int BAD_USER_INPUT = 808;

class AndroidDessert
{
protected:

	string versionCodeName;
	double versionNumber;
	int versionApiLevel;
	int versionReleaseYear;
	bool hasSecurityPatchSupport; // true (https://en.wikipedia.org/wiki/Android_version_history) if supported then true, if unsupported then false //
	
public:

	AndroidDessert();
	~AndroidDessert();
	int getApiLevel();
	int getReleaseYear();
	int enterDessert();
	friend ostream & operator<<(ostream &os, const AndroidDessert &dessert);

};