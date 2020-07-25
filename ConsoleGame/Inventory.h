#pragma once
#include <vector>

#include "BuyItem.h"

using namespace std;

class Inventory {

private:
	
	//Constant integer for the maximum size of a player inventory
	const int MAX_INVENTORY_SIZE = 10;

	//The vector which represents the inventory will hold type base class for all objects purchasable
	vector<BuyItem*> playerInventory;

	//Iterator for playerInventory that can be used by any class function to iterate through playerInventory
	vector<BuyItem*>::iterator it;

public:

	//Constructor and destructor
	Inventory();
	~Inventory();

	int getMaxInventorySize();
	int getCurrentInventorySize();
	vector<BuyItem*> getInventory();
	void displayInventory();
	
	bool isInventoryFull();
	bool isInventoryEmpty();

	void addItem(BuyItem*);
	void removeItem(int); //This will probably change once this functionality is implemented in the shop

};