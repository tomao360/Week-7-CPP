#include <iostream>
#include "Car.h"

int main_2()
{
	Car* car1 = new Car(123);
	strcpy_s(car1->carName, "Nissan");
	car1->KM = 200;
	car1->numOfdrives = 0;
	car1->Drive(20);
	car1->Drive(30);
	car1->Drive(50);
	car1->Drive(60);
	car1->Drive(70);
	car1->CarStatus();

	Car* car2 = new Car(456);
	strcpy_s(car2->carName, "Hunda");
	car2->KM = 0;
	car2->numOfdrives = 15;
	car2->Drive(33);
	car2->Drive(10);
	car2->Drive(100);
	car2->Drive(50);
	car2->Drive(70);
	car2->CarStatus();

	Car* car3 = new Car(789);
	strcpy_s(car1->carName, "Lamborgini");
	car3->KM = 10;
	car3->numOfdrives = 20;
	car3->Drive(60);
	car3->Drive(23);
	car3->Drive(14);
	car3->Drive(20);
	car3->Drive(70);
	car3->CarStatus();

	return 0;
}