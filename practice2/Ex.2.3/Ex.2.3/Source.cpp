#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//������������ ������� 1 � ������������
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

	//������������ ������� 2 � ������������
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
	cout << "��� = " << b << endl;
}