#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void privet(string name)
{
	cout << name << ", " << "здравствуйте!" << endl;
}
void privet(string name, int k)
{
	cout << name << " " << ", еще раз " << "здравствуйте! "
		<< "Вы ввели " << k << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "Введите свое имя" << endl;
	cin >> name;
	int k;
	cout << "Введите Ваше любимое число" << endl;
	cin >> k;
	privet(name);
	privet(name, k);
	return 0;
}