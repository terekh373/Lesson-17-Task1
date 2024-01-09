#pragma once
#include <iostream>
#include <string>
using namespace std;

class Computer
{
	string name;
	float frequency;
	int ram;
	bool dvd;
	float cost;

public:
	Computer(string name, float frequency, int ram, bool dvd, float cost);

	int getRam()const;
	void show()const;
};