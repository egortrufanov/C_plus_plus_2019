#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char op;
	cout << "Сделай свой выбор, собери авто свой мечты: ";
	cin >> op;
	cout << "Колеса круглые\n";
	cout << "Мощный двигатель\n";
	switch (op)
	{
	case 'S':
		cout << "Радио играть должно\n";
		break;
	case 'V':
		cout << "Кондиционер хочу\n";
		cout << "Радио играть должно\n";
	}
}