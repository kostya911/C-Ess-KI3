#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
class ShopItemOrder
{
public:
	ShopItemOrder(string name, double unitPrice, int quantity)
	{
		set_name(name);
		set_price(unitPrice);
		set_quantity(quantity);
	}
	void printOrder()
	{
		cout<<"Ordered item: "<<this->name<<"\nNumber of items: "<<this->quantity<<"\nUnit price:"<<this->unitPrice<<"\nTotal price: "<<totalPrice()<<endl;
	}
	double totalPrice()
	{
		return this->unitPrice*this->quantity;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	void set_price(double price)
	{
		if(price>=0)
			this->unitPrice = price;
		else if(this->unitPrice == NULL)
			this->unitPrice = 0;
	}
	void set_quantity(int quan)
	{
		if(quan>0)
			this->quantity = quan;
		else if(this->quantity == NULL)
			this->quantity = 1;
	}
private:
	string name;
	double unitPrice;
	int quantity;
};

int _tmain(int argc, _TCHAR* argv[])
{
	ShopItemOrder order1("order",10,5);
	order1.printOrder();

	order1.set_name("Your order");
	order1.set_price(23.75);
	cout<<endl;
	order1.printOrder();

	cout<<order1.totalPrice()<<endl;
	return 0;
}

