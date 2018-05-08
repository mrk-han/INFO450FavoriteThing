// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AndroidDessert.h"
#include "DessertList.h"
#include <string>
#include <iostream>
using namespace std;


void instructions();

int main()
{

	AndroidDessert myDessert;
	DessertList myList;
	instructions();
	char answer;

	do
	{
		myDessert.enterDessert();
		myList.displayList();

		cout << "Would you like to add another Android Dessert? Y or y for Yes" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore();


	} while (answer == 'Y' || answer == 'y');

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
