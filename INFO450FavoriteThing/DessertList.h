#pragma once
#include "stdafx.h"
#include "AndroidDessert.h"

class DessertList
{
private:
	AndroidDessert iList[100];
	int listSize;

public:
	DessertList();
	void displayList();
	int addDessert(AndroidDessert &dessert);
	bool duplicateEntryFlow(int api, int releaseYear);
};
