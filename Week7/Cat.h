#pragma once
#include "Animal.h"
class Cat : public Animal
{
private:
	int gurimCount;
public:
	int age;
	void GurimCountCat();
	void PrintGurimCountCat();
	void PrintAnimalCat();
};

