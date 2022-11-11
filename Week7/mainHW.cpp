#include <iostream>
#include <string.h>
#include "CChild.h"
#include "Runner.h"
#include "Animal.h"
#include "DDog.h"
#include "AnimalRunner.h"

int main()
{
	//Ouestion 1
	CChild child;
	int result = child.Mult(10);
	printf("%d\n", result);

	//Ouestion 2
	Runner r1;
	result = r1.Run();
	printf("%d\n", result);

	//Ouestion 3
	AnimalRunner runner2;
	runner2.RunDog();

	AnimalRunner runner1;
	runner1.RunCat();

	return 0;
}