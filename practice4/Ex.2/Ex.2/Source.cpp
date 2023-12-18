#include <iostream>;
#include <math.h>;
using namespace std;
int Myroot(double a, double b, double c, double& x1, double& x2);
int main()
{
	double a, b, c, x1 = 0, x2 = 0;
	cout << "Vvedite koefficienty: " << endl;
	cin >> a >> b >> c;
	int roots = Myroot(a, b, c, x1, x2);
	if (roots >= 0)
		cout << "korni: " << x1 << " " << x2;
	else cout << "Net korney";
}
int Myroot(double a, double b, double c, double& x1, double& x2)
{
	double d = b * b - 4 * a * c;
	if (d < 0)
		return -1;
	if (d == 0)
	{
		x1 = -b / (2 * a);
		x2 = x1;
		return 0;
	}
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return 1;
	}
}