#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)
#include "AnimalRunner.h"

void AnimalRunner::RunDog()
{
	for (int i = 0; i < COUNT; i++)
	{
		ListDog[i] = new DDog;
		ListDog[i]->AddCode();
		ListDog[i]->AddName();
		ListDog[i]->GurimCountDog();
		printf("Dog number %d:\n", i);
		ListDog[i]->PrintAnimalDog();
	}
}

void AnimalRunner::RunCat()
{
	for (int i = 0; i < COUNT; i++)
	{
		ListCat[i] = new Cat;
		ListCat[i]->AddCode();
		ListCat[i]->AddName();
		ListCat[i]->GurimCountCat();
		printf("Cat number %d:\n", i);
		ListCat[i]->PrintAnimalCat();
	}
}
