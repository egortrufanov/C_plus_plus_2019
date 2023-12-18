#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Car
{
private:
	string marka;
	string color;
	string probeg;
	string cost;
	long long time;

public:
	Car() : marka("0"), color("0"), probeg("0"), cost("0"), time(0) {}
	Car(string marka, string color, string probeg, string cost, long long time)
	{
		this->marka = marka;
		this->color = color;
		this->probeg = probeg;
		this->cost = cost;
		this->time = time;
	}

	virtual void printInfo()
	{
		cout << this->marka << "\t" <<
			this->color << "\t" <<
			this->probeg << "\t" <<
			this->cost << "\t" << this->time << endl;
	}
};