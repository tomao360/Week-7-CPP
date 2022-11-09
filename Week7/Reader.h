#pragma once
#define MAX_LINES 10
#define MAX_STR 100

class Reader
{
public:
	//------------Constructor-------------
	Reader(char alistName[MAX_STR]);

	//------------Methods/Actions-------------
	int AddLine(char line[MAX_STR]);
	void Print();
	int GetCurrLine();

private:
	//------------Properties-------------
	char Lines[MAX_LINES][MAX_STR];
	int currLine;
	char ListName[MAX_STR];
};

