#pragma once
#include <string>

using namespace std;

class BuyItem {

protected:

	int itemPrice;
	string itemName;

public:

	//Constructor and destructor
	BuyItem();
	~BuyItem();

	virtual int getItemPrice() = 0;
	virtual string getItemName() = 0;

};
