#include <iostream>
#include "Car.h"

Car::Car(int aCarNumber)
{
	carNumber = aCarNumber;
}

void Car::Drive(int km)
{
	KM += km;
	numOfdrives += 1;
}

void Car::CarStatus()
{
	printf("Car name:%s, Car number:%d KM:%d, Number of drives:%d, Average KM per drive:%d\n", carName, carNumber, KM, numOfdrives, KM / numOfdrives);
}