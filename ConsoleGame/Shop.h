#pragma once
#include <vector>
#include <random>

#include "BuyItem.h"

using namespace std;

class Shop {

private:

	const int MAX_SHOP_SIZE = 10;

	BuyItem* allBuyItems[50]; //The size of the array needs to change later when the total game items are determined
	vector<BuyItem*> currentShopItems;
	vector<BuyItem*>::iterator it;

	void importBuyItems();

public:

	//Constructor and destructor
	Shop();
	~Shop();

	void fillShopItems();
	void displayShopItems();

};