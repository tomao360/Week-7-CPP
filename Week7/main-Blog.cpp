#include <iostream>
#include <string.h>
#include "Blog.h"

int main_3()
{
	char name[] = "My Blog";
	Blog* blog1 = new Blog(name, 1000);

	char line[100];
	blog1->text[0] = 0; //The array needs to be reset 
	strcpy_s(line, "Hi!\n");
	blog1->AddLine(line);
	strcpy_s(line, "My name is Tamara Osipov\n");
	blog1->AddLine(line);
	strcpy_s(line, "I am 28 years old\n");
	blog1->AddLine(line);
	strcpy_s(line, "I love to travel\n");
	blog1->AddLine(line);

	blog1->SaveInFile();

	strcpy_s(blog1->text, "");
	strcpy_s(blog1->text, blog1->LoadFromFile());

	blog1->Print();

	return 0;
}
