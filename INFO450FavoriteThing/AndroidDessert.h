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
	AndroidDessert(string a, double b, int c, int d, bool e);

	// !!! Important !!!
	// Android Desserts can have duplicate Dessert Code Names but not Duplicate API levels, so this will determine if duplicate item or not
	int getApiLevel();

	int getReleaseYear();

	// Asks user to add their favorite android dessert
	int enterDessert();

	friend ostream & operator<<(ostream &os, const AndroidDessert &dessert);


};