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
bool DessertList::duplicateEntryFlow(int api, int releaseYear)
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		if (iList[i].getApiLevel() == api && iList[i].getReleaseYear() == releaseYear)
			cout << iList[i];
			return true;
	}
	return false;
}

int DessertList::addDessert(AndroidDessert &dessert)
{
	iList[listSize] = dessert;
	if (listSize < 100)
	{
		listSize++;
		return 0;
	}
	else
	{
		cout << "Error: list is too full" << endl;
		return BAD_USER_INPUT;
	}
}

void DessertList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << iList[i] << endl;
	}
}