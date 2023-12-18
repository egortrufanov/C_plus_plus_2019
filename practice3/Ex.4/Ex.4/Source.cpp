#include <iostream>
#include<math.h>
using namespace std;
// Вычисление площади равностороннего треугольника
double ploschad(double a)
{
	double p = 3*a / 2;
	double s = sqrt(p * (p - a) * (p - a) * (p - a));
	return s;
}
double ploschad(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
int main()
{
	double a, b, c, s;
	cout << "Vvedite znacheniya storon: ";
	cin >> a >> b >> c;
	if (a = b = c)
		s = ploschad(a);
	else s = ploschad(a, b, c);
	cout << "Ploschad': " << s << endl;
}