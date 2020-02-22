#include "Inventory.h"
#include <iostream>

Inventory::Inventory()
{

}

Inventory::~Inventory()
{
	
}

int Inventory::getMaxInventorySize()
{
	return MAX_INVENTORY_SIZE;
}

int Inventory::getCurrentInventorySize()
{
	return playerInventory.size();
}

vector<BuyItem*> Inventory::getInventory()
{
	return playerInventory;
}

void Inventory::displayInventory()
{
	for (int i = 0; i < playerInventory.size(); i++) {
		cout << "[1] " << playerInventory[i]->getItemName();
	}
}

bool Inventory::isInventoryFull()
{
	if (this->getCurrentInventorySize() == MAX_INVENTORY_SIZE) {
		return true;
	}
	else {
		return false;
	}
}

bool Inventory::isInventoryEmpty()
{
	if (this->getCurrentInventorySize() == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Inventory::addItem(BuyItem* itemToAdd)
{
	//This does not work. Creates an access violation
	playerInventory.push_back(itemToAdd);
}

void Inventory::removeItem(int x)
{
	it = playerInventory.begin();
	if (x == 1) {
		playerInventory.erase(playerInventory.begin());
	}
	else if (x == MAX_INVENTORY_SIZE) {
		playerInventory.pop_back();
	}
	else {
		for (int i = 0; i < x; i++, it++) {
			if (i == (x - 1)) {
				playerInventory.erase(it);
			}
		}
	}
}
