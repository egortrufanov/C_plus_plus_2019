#pragma once
#include <iostream>
#include <ctime>
#include "Car.h"
using namespace std;

class Econom : public Car
{
private:
	string marka;
	string color;
	string probeg;
	string cost;
	long long time;

public:
	Econom() : Car() {}
	Econom(
		string marka,
		string color,
		string probeg,
		string cost,
		long long time
	) : Car(marka, color, probeg, cost, time) {}

	void printInfo()
	{
		cout << "Econom\t";
		Car::printInfo();
	}
};