#include <iostream>;
#include <math.h>;
using namespace std;
double side(int x1, int y1, int x2, int y2)
{
	double side = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return side;
}
double square(double a1, double a2, double a3)
{
	double p = (a1 + a2 + a3) / 2;
	double square = sqrt(p * (p - a1) * (p - a2) * (p - a3));
	return square;
}
int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
	double s = 0, a, b, c, d, e, f, g;
	cout << "Vvedite koordinaty vershin:" << endl;

	cin >> x1 >> y1;
	cin >> x2 >> y2;
	a = side(x1, y1, x2, y2);
	cin >> x3 >> y3;
	b = side(x2, y2, x3, y3);
	f = side(x1, y1, x3, y3);
	cin >> x4 >> y4;
	c = side(x3, y3, x4, y4);
	g = side(x1, y1, x4, y4);
	cin >> x5 >> y5;
	d = side(x4, y4, x5, y5);
	e = side(x1, y1, x5, y5);

	s += square(a, b, f);
	s += square(f, c, g);
	s += square(g, d, e);

	cout << "Ploschad': " << s;
}