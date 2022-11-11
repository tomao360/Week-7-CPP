#include <iostream>
#include "Parent.h"

int Parent::Add(int num)
{
	return num + num;
}

void Parent::Age()
{
	this->age = 50;
	printf("%d", this->age);
}