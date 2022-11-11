#include <iostream>
#include "CChild.h"

int CChild::Mult(int num)
{
	int a = Add(num);

	return a * a;
}

void CChild::Age()
{
	this->age = 25;
	printf("Tha Child's age is: %d\n", this->age);
}