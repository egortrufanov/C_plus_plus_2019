#include <iostream>
#include <set>
#include <string>
#include <ctime>
#include "Lux.h"
#include "Econom.h"
#include "Car.h"



long long DateToSec(string s) {
	const time_t sec = time(NULL);
	struct tm aTime;
	int p = 1900;
	localtime_s(&aTime, &sec);
	int days = 10 * (s[0] - '0') + (s[1] - '0');
	int months = 10 * (s[3] - '0') + (s[4] - '0');
	int time = 0;
	int k = 1;
	int years = 0;
	for (int i = s.length() - 1; i >= 6; i--) {
		years += k * (s[i] - '0');
		k *= 10;
	}
	if (years > (aTime.tm_year + 1900)) return -1;
	if (years == (aTime.tm_year + 1900) && months > (aTime.tm_mon + 1)) return -1;
	if (years == (aTime.tm_year + 1900) && months == (aTime.tm_mon + 1) && days > aTime.tm_mday) return -1;
	if (months == (aTime.tm_mon) || days > (aTime.tm_mday)) p--;
	return (aTime.tm_year + p - years);
}

int main()
{
	set<Car*> car;
	set<Car*>::iterator iter;
	char choice;
	string marka;
	string probeg;
	string cost;
	string color;
	string timet;
	long long timec;

	do
	{
		std::cout << "What category of auto?(L/E)";
		std::cin >> choice;
		if (choice == 'L')
		{
			std::cout << "Write marka, color, probeg,\n"
				<< "cost per day and date \n"
				<< "assembly of auto(dd.mm.yyyy)?\n";
			std::cout << "press ENTER after writing of each option\n";
			std::cin >> marka >> color >> probeg >> cost >> timet;
			timec = DateToSec(timet);
			car.insert(new Lux(marka, color, probeg, cost, timec));
		}
		if (choice == 'E')
		{
			std::cout << "Write marka, color, probeg,\n"
				<< "cost per day and date \n"
				<< "assembly of auto(dd.mm.yyyy)?\n";
			std::cout << "press ENTER after writing of each option\n";
			std::cin >> marka >> color >> probeg >> cost >> timet;
			timec = DateToSec(timet);
			car.insert(new Econom(marka, color, probeg, cost, timec));
		}
		std::cout << "Do you want to write more?(y/n)";
		std::cin >> choice;
	} while (choice == 'y');
	iter = car.begin();
	while (iter != car.end())
		(*iter++)->printInfo();
	return 0;
}