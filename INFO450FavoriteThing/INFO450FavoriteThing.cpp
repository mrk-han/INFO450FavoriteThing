// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "AndroidDessert.h"
#include "DessertList.h"
#include <string>
#include <iostream>
using namespace std;


void instructions();
void tellUserStuff();

int main()
{
	AndroidDessert myDessert;
	DessertList myList;
	instructions();
	char answer;

	do
	{
		// adds new dessert to list
		myList.addDessert();

		// spits out instructions found below
		tellUserStuff();

		cin >> answer;

		cout << endl;
		cin.clear();
		cin.ignore();


	} while (answer == 'Y' || answer == 'y');

	// displays list of created objects to user using friend function
	myList.displayList();

    return 0;
}



void instructions()
{
	cout << "**" << " ********************* " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "      Keep a list      " << "**" << endl;
	cout << "**" << "    of your favorite   " << "**" << endl;
	cout << "**" << "  Android Versions!!!  " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "     You can enter:    " << "**" << endl;
	cout << "**" << "  Version Number, Api  " << "**" << endl;
	cout << "**" << "  Level, Dessert Code  " << "**" << endl;
	cout << "**" << "  Name, Release Date,  " << "**" << endl;
	cout << "**" << "  and Security Support " << "**" << endl;
	cout << "**" << "                       " << "**" << endl;
	cout << "**" << "  Enter the same       " << "**" << endl;
	cout << "**" << "  Code Name and API    " << "**" << endl;
	cout << "**" << "  Level as a previous  " << "**" << endl;
	cout << "**" << "  entry to Delete      " << "**" << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << endl;
	cout << endl;
}

void tellUserStuff()
{
	cout << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << endl;
	cout << "Would you like to add another Android Dessert? Y or y for Yes" << endl;
	cout << endl;
	cout << "**" << " ********************* " << "**" << endl;
	cout << "If a dessert is no longer your favorite, press Y or y" << endl;
	cout << "then re - enter the same API and release year" << endl;
	cout << "of the dessert you would like to delete" << endl;
	cout << "**" << " ********************* " << "**" << endl;
}
