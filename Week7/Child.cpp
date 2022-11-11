#include "Child.h"

void Child::UseParent()
{
	int a;
	a = AddNum(12);  //Gets from the parent Base
	a = IAmProtected(12);  //Gets from the parent Base
}

int Child::Calc()
{
	return 100;
}