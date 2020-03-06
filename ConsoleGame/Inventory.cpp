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
	for (int i = 0; i < this->playerInventory.size(); i++) {
		cout << "[" << i+1 << "] " << this->playerInventory[i]->getItemName() << endl;
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
	if (isInventoryFull()) {
		cout << "Inventory is full!\n";
	}
	else {
		this->playerInventory.push_back(itemToAdd);
	}
}

void Inventory::removeItem(int x)
{
	it = this->playerInventory.begin();
	if (x == 1) {
		this->playerInventory.erase(this->playerInventory.begin());
	}
	else if (x == MAX_INVENTORY_SIZE) {
		this->playerInventory.pop_back();
	}
	else {
		for (int i = 0; i < x; i++, it++) {
			if (i == (x - 1)) {
				this->playerInventory.erase(it);
				break;
			}
		}
	}
}
