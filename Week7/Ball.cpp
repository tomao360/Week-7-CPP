#include <iostream>
#include "Ball.h"

void Ball::Jumping(int count)
{
	size -= count;
}

void Ball::Rolling(int strength)
{
	size -= strength;
}

void Ball::Inflated(int Inflated)
{
	size += Inflated;
}