#pragma once
#include "stdafx.h"
#include "AndroidDessert.h"

class DessertList
{
protected:
	AndroidDessert dList[100];
	int listSize;

public:
	DessertList();
	void displayList();
	int addDessert();
	bool isDuplicateEntry(AndroidDessert dessert);
};
