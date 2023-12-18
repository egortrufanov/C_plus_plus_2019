#include <iostream>
#include <istream>
#include <string>
#include <math.h>
using namespace std;
class Triangle
{
public:
	class ExScore //класс исключений
	{
	public:
		string origin; //для имени функции
		double iValue; //для хранения ошибочного значения
		ExScore(string OR, int sc)
		{
			origin = OR; //строка с именем виновника ошибки
			iValue = sc; //сохраненное неправильное значение
		}
	};
	double a;
	double b;
	double c;

	// Установка длины первой стороны
	void set_side1(double side1)
	{
		a = side1;
	}
	// Получение длины первой стороны
	double get_side1()
	{
		return a;
	}
	// Установка длины второй стороны
	void set_side2(double side2)
	{
		b = side2;
	}
	// Получение длины второй стороны
	double get_side2()
	{
		return b;
	}
	// Установка длины третьей стороны
	void set_side3(double side3)
	{
		c = side3;
		if (c > a + b)
		{
			throw ExScore("в функции set_side3()", c);
		}
		if (b > a + c)
		{
			throw ExScore("в функции set_side2()", b);
		}
		if (a > c + b)
		{
			throw ExScore("в функции set_side1()", a);
		}
	}
	// Получение длины третьей стороны
	double get_side3()
	{
		return c;
	}
	//Нахождение площади треугольника
	double square;
	void set_square(double a, double b, double c)
	{
		square = sqrt((a + b + c) / 2 * (((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)));
	}
	double get_square()
	{
		return square;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	// Создание объекта класса Triangle
	Triangle triangle1;
	double a;
	double b;
	double c;
	// Ввод длины первой стороны
	cout << "Side1: ";
	cin >> a;
	// Ввод длины второй стороны
	cout << "Side2: ";
	cin >> b;
	// Ввод длины третьей стороны
	cout << "Side3: ";
	cin >> c;

	try
	{
		triangle1.set_side1(a);
		triangle1.set_side2(b);
		triangle1.set_side3(c);
		triangle1.set_square(a, b, c);
		cout << "Площадь треугольника равна: " << triangle1.get_square() << "\n";
	}

	catch (Triangle::ExScore ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nВведенное значение стороны " << ex.iValue << " является недопустимым\n";
	}
	return 0;
	}	