#pragma once
class Car
{
public:
	//------------Properties-------------
	char carName[15];
	int KM;
	char color[15];
	int carNumber;
	char numOfSeats;
	int numOfdrives;

	//------------Constructor-------------
	Car(int aCarNumber);

	//------------Methods/Actions-------------
	void Drive(int km);
	void CarStatus();
};

