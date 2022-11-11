#pragma once
#include "Parent.h"

class CChild : public Parent
{
public:
	int age;
	int Mult(int num);
	void Age();
};

