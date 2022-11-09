#include <iostream>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996);
#include "Blog.h"


Blog::Blog(char name[100], int BlogSize)  //Constructor
{
	strcpy_s(this->name, name);
	this->lineCount = BlogSize;
}

void Blog::SaveInFile()
{
	char fileName[50];
	sprintf(fileName, "%s.txt", name);

	FILE* f = fopen(fileName, "w");
	if (f == NULL)
	{
		printf("Error opening the file\n");
		return;
	}

	fputs(text, f);
	fclose(f);
}

char* Blog::LoadFromFile()
{
	char fileName[50];
	sprintf(fileName, "%s.txt", name);

	FILE* f = fopen(fileName, "r");
	if (f == NULL)
	{
		printf("Error opening the file\n");
		return 0;
	}

	int counter = 0;

	while (fgetc(f) != EOF)
	{
		counter++;
	}

	fclose(f);

	f = fopen(fileName, "r");
	if (f == NULL)
	{
		printf("Error opening the file\n");
		return 0;
	}

	char* textReaden = (char*)malloc(sizeof(counter) + 1); //Need to add 1 to the size of malloc because of EOF
	if (textReaden == NULL)
	{
		printf("Error Allocating Memory\n");
		return 0;
	}

	fread(textReaden, counter, 1, f);
	fclose(f);

	return textReaden;
}

void Blog::AddLine(char* txt)
{
	strcat(text, txt);
}

void  Blog::Print()
{
	printf("Blog Name: %s\n%s\n",name, text);
}