#include <iostream>
using namespace std;
// Программа деления двух чисел
int main()
{
	double x; /* объявления переменных*/
	double a, b;
	cout << "\nВведите a и b:\n";
	cin >> a; // ввод с клавиатуры значения a
	cin >> b; // ввод с клавиатуры значения b
	x = a / b; // вычисление значения x
	cout << "\nx = " << x << endl; //вывод результата на экран
	return 0;
}