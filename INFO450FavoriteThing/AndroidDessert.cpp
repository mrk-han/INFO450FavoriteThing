
#include "stdafx.h"
#include "AndroidDessert.h"


//default constructor
AndroidDessert::AndroidDessert()
{
	versionCodeName = "";
	versionNumber = 0;
	versionApiLevel = 0;
	versionReleaseYear = 0;
	hasSecurityPatchSupport = NULL;
}

AndroidDessert::~AndroidDessert()
{
}


int AndroidDessert::getApiLevel()
{
	return versionApiLevel;
}

int AndroidDessert::getReleaseYear()
{
	return versionReleaseYear;
}

// asks user to enter their favorite android dessert
int AndroidDessert::enterDessert()
{
	cout << "What is your favorite Android Dessert?" << endl;;
	getline(cin, versionCodeName);

	cout << "What is the associated Version Number? (4.4 | 5.1 | 8.1)" << endl;
	cin >> versionNumber;
	if (!cin.good())
	{
		cout << "Not valid; please try again" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> versionNumber;
		return BAD_USER_INPUT;
	}
	cin.ignore();

	cout << "What is the associated API Level?" << endl;
	cin >> versionApiLevel;
	if (!cin.good())
	{
		cout << "Not valid; please try again" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> versionApiLevel;
		return BAD_USER_INPUT;
	}
	cin.ignore();

	cout << "What is the release year associated with this Android Dessert?" << endl;
	cin >> versionReleaseYear;
	if (!cin.good())
	{
		cout << "Not valid; please try again" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> versionReleaseYear;
		return BAD_USER_INPUT;
	}

	// Switch Statement (If release year == a certain year then make it have supported or unsupported boolean for securtity patch)
	switch (versionReleaseYear)
	{
	case 2008 :
		hasSecurityPatchSupport = false;
		break;
	case 2009 :
		hasSecurityPatchSupport = false;
		break;
	case 2010 :
		hasSecurityPatchSupport = false;
		break;
	case 2011 : 
		hasSecurityPatchSupport = false;
		break;
	case 2012 :
		hasSecurityPatchSupport = false;
		break;
	case 2013 :
		hasSecurityPatchSupport = false;
		break;
	case 2014 :
		hasSecurityPatchSupport = false;
		break;
	case 2015 :
		hasSecurityPatchSupport = true;
		break;
	case 2016 : 
		hasSecurityPatchSupport = true;
		break;
	case 2017 :
		hasSecurityPatchSupport = true;
		break;
	case 2018 :
		hasSecurityPatchSupport = false;
	default:
		break;
	}


	cin.clear();
	cin.ignore();


	return 0;
}


//overloaded function which displays dessert to teh console
ostream & operator<<(ostream &os, const AndroidDessert &dessert)
{
	string x;
	if (dessert.hasSecurityPatchSupport)
	{
		x = "Supported.";
	}
	else
	{
		x = "Not Supported";
	}
	os << "Android Dessert: " << dessert.versionCodeName << endl;
	os << "Version #: " << dessert.versionNumber << endl;
	os << "API Level: " << dessert.versionApiLevel << endl;
	os << "Release Year: " << dessert.versionReleaseYear << endl;
	os << "Security Patches Supported? " << x << endl;
	return os;
}

