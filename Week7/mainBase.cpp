#include <iostream>
#include <string.h>
#include "Child.h"

int main_5()
{
	Base b;
	b.AddNum(10);
	int num = b.Calc();

	Child child;
	child.AddNum(123);
	num = child.AddNum(12);

	Base b1;
	b1 = child;

	return 0;
}