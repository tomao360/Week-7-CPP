#pragma once
#include "DDog.h"
#include "Cat.h"
#define COUNT 3

class AnimalRunner
{
public:
	DDog* ListDog[COUNT];
	Cat* ListCat[COUNT];
	void RunDog();
	void RunCat();
};

