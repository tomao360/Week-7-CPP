#pragma once
class Blog
{
public:
	//------------Properties-------------
	char name[100];
	int lineCount; //BlogSize
	char text[1000];

	//------------Constructor-------------
	Blog(char name[100], int BlogSize);

	//------------Methods/Actions-------------
	void SaveInFile();
	char* LoadFromFile();
	void AddLine(char* txt);
	void Print();
};

