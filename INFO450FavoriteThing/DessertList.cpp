#include "stdafx.h"
#include "DessertList.h"
#include <iostream>
using namespace std;

//Constructor
DessertList::DessertList()
{
	listSize = 0;
}

// Iterate through array... if the api and codename are the same, we have found a duplicate in the list.
// If we do find a duplicate in the list, then we ask user whether they want to delete the existing entry or not. **EXTRA CREDIT**
// If we do not find a duplicate, the item is added.
bool DessertList::isDuplicateEntry(AndroidDessert dessert)
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		if ((dessert.getApiLevel() == dList[i].getApiLevel()) && (dessert.getReleaseYear() == dList[i].getReleaseYear()))
		{
			cout << "You have already entered an Android Version with this API Level and release year" << endl;

			return true;
		}
	}
	return false;
}

int DessertList::addDessert()
{
	AndroidDessert newDessert;
	newDessert.enterDessert();
	if (isDuplicateEntry(newDessert))
	{
		cout << "Deleting the previous entry AND the duplicate entry. Re-enter if this was a mistake" << endl;
		newDessert.~AndroidDessert();
		return 0;
	}
	else
	{
		dList[listSize] = newDessert;
		listSize++;
		return 0;
	}
}

void DessertList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << dList[i] << endl;
		cout << endl;
	}
}