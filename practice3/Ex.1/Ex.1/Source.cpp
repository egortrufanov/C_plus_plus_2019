#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void privet(string name);
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "¬ведите свое им€" << endl;
	cin >> name;
	privet(name);
	return 0;
}
void privet(string name)
{
	cout << name << ", " << "здравствуйте!" << endl;
}