#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)
#include "Animal.h"

void Animal::AddCode()
{
	int num;
	printf("Please enter Animal code number: ");
	scanf("%d", &num);
	this->code = num;
}

void Animal::PrintCode()
{
	printf("The code is: %d\n", this->code);
}

void Animal::AddName()
{
	char str[STR_NAME] = {0};
	printf("Please enter the animal name: ");
	scanf("%s", str);
	strcpy(name, str);
}

void Animal::PrintName()
{
	printf("The animal name is: %s", this->name);
}
