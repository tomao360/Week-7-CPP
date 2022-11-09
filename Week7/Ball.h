#pragma once
class Ball
{
public:
	int size;
	char color[15];
	char type[15];

	void Jumping(int count);
	void Rolling(int strength);
	void Inflated(int Inflated);
};

