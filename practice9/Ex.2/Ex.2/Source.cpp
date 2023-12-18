#include <iostream>
#include <istream>
#include <string>
#include <math.h>
using namespace std;
class Triangle
{
public:
	class ExScore //����� ����������
	{
	public:
		string origin; //��� ����� �������
		double iValue; //��� �������� ���������� ��������
		ExScore(string OR, int sc)
		{
			origin = OR; //������ � ������ ��������� ������
			iValue = sc; //����������� ������������ ��������
		}
	};
	double a;
	double b;
	double c;

	// ��������� ����� ������ �������
	void set_side1(double side1)
	{
		a = side1;
	}
	// ��������� ����� ������ �������
	double get_side1()
	{
		return a;
	}
	// ��������� ����� ������ �������
	void set_side2(double side2)
	{
		b = side2;
	}
	// ��������� ����� ������ �������
	double get_side2()
	{
		return b;
	}
	// ��������� ����� ������� �������
	void set_side3(double side3)
	{
		c = side3;
		if (c > a + b)
		{
			throw ExScore("� ������� set_side3()", c);
		}
		if (b > a + c)
		{
			throw ExScore("� ������� set_side2()", b);
		}
		if (a > c + b)
		{
			throw ExScore("� ������� set_side1()", a);
		}
	}
	// ��������� ����� ������� �������
	double get_side3()
	{
		return c;
	}
	//���������� ������� ������������
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
	// �������� ������� ������ Triangle
	Triangle triangle1;
	double a;
	double b;
	double c;
	// ���� ����� ������ �������
	cout << "Side1: ";
	cin >> a;
	// ���� ����� ������ �������
	cout << "Side2: ";
	cin >> b;
	// ���� ����� ������� �������
	cout << "Side3: ";
	cin >> c;

	try
	{
		triangle1.set_side1(a);
		triangle1.set_side2(b);
		triangle1.set_side3(c);
		triangle1.set_square(a, b, c);
		cout << "������� ������������ �����: " << triangle1.get_square() << "\n";
	}

	catch (Triangle::ExScore ex)
	{
		cout << "\n������ ������������� " << ex.origin;
		cout << "\n��������� �������� ������� " << ex.iValue << " �������� ������������\n";
	}
	return 0;
	}	