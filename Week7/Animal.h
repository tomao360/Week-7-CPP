#pragma once
#define STR_NAME 100
class Animal
{
public:
	//------------Properties-------------
	int code = 0;
	char name[STR_NAME];

	//------------Methods/Actions-------------
	void AddCode();
	void PrintCode();
	void AddName();
	void PrintName();
};

