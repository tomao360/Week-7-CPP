#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)
#include "DDog.h"

void DDog::GurimCountDog()
{
	int num;
	printf("Please enter Dog gurim count: ");
	scanf("%d", &num);
	this->gurimCount = num;
}

void DDog::PrintGurimCountDog()
{
	printf("The DogGurimCount is: %d", this->gurimCount);
}

void DDog::PrintAnimalDog()
{
	printf("Animal code: %d, Animal name: %s, Dog gurim count: %d\n", code, name, gurimCount);
}
