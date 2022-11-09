#include <iostream>
#include <string.h>
#include "Reader.h"

Reader::Reader(char listName[MAX_STR])
{
	currLine = 0;
	strcpy_s(this->ListName, listName);
}

int Reader::AddLine(char line[MAX_STR])
{
	if (currLine == MAX_LINES) return -1;

	strcpy_s(Lines[currLine], line);
	currLine++;
	return 0;
}

void Reader::Print()
{
	printf("The list name : % s\n", ListName);
	
	for (int i = 0; i < currLine; i++)
	{
		printf("%s\n", Lines[i]);
	}

	currLine = 0;
}

int Reader::GetCurrLine()
{
	return currLine;
}