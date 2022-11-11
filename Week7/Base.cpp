#include "Base.h"

int Base::AddNum(int num)
{
	this->num = num;

	this->num = this->num + Calc();

	return this->num;
}

int Base::Calc()
{
	return 999;
}

int Base::IAmPrivate(int num)
{
	this->num = num;

	return 0;
}

int Base::IAmProtected(int num)
{
	this->num = num;

	return 0;
}



