#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)s
#include "Cat.h"

void Cat::GurimCountCat()
{
	int num;
	printf("Please enter Cat gurim count: ");
	scanf("%d", &num);
	this->gurimCount = num;
}

void Cat::PrintGurimCountCat()
{
	printf("The DogGurimCount is: %d", this->gurimCount);
}

void Cat::PrintAnimalCat()
{
	int num;
	printf("Please enter the animal age: ");
	scanf("%d", &num);
	this->age = num;

	printf("Animal code: %d, Animal name: %s, Cat gurim count: %d, Animal age: %d\n", code, name, gurimCount, age);
}