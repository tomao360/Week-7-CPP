#include "ItemPrice.h"


int ItemPrice::Clac(int price)
{
	return price + Tax();
}

int ItemPrice::Tax()
{
	return 10;
}