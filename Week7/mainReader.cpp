#include <iostream>
#include <string.h>
#include "Reader.h"

int main_4()
{
	char str[] = "Shoping";
	Reader r1(str);

	char str2[] = "Studing";
	Reader r2(str2);

	for (int i = 0; i < 12; i++)
	{
		r1.AddLine(str);
	}
	r1.GetCurrLine();
	r1.Print();

  
	Reader* list[10];
	for (int i = 0; i < 10; i++)  //Allocate 10 objects
	{
		char str[] = "Movies";
		list[i] = new Reader(str);

		for (int j = 0; j < 5; j++)  //Insert lines to each list
		{
			char str1[] = "Ironman";
			list[i]->AddLine(str1);
		}

		list[i]->Print();   //Print
		delete list[i];  //Deallocate
	}

	return 0;
}