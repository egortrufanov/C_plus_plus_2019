#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Исправленное задание 1 с предусловием
	double x, x1, x2, y;
	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "\tx\tsin(x)\n";
	x = x1;
	while (x <= x2)
	{
		y = sin(x);
		cout << "\t" << x << "\t" << y << endl;
		x = x + 0.01;
	}

	//Исправленное задание 2 с постусловием
	setlocale(LC_ALL, "Russian");
	int a, b, temp;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	temp = a;
	do
	{
		a = temp;
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		temp = a - b;
		a = b;
	} while (temp != b);
	cout << "НОД = " << b << endl;
}