#pragma once
#include <iostream>
#include <ctime>
#include "Car.h"
using namespace std;

class Lux : public Car
{
private:
	string marka;
	string color;
	string probeg;
	string cost;
	long long time;

public:
	Lux() : Car() {}
	Lux(
		string marka,
		string color,
		string probeg,
		string cost,
		long long time
	) : Car(marka, color, probeg, cost, time) {}

	void printInfo()
	{
		cout << "Lux \t";
		Car::printInfo();
	}
};