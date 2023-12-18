#include <iostream>
#include<math.h>
using namespace std;
// Вычисление площади равностороннего треугольника
int main()
{
	int p;
	cout << "Vvedite znachenie perimetra: ";
	cin >> p;
	double a = p / 3;
	double s = sqrt(p * (p - a) * (p - a) * (p - a));
	cout << "Storona " << "Ploschad'"<< endl;
	cout << a << "       " << s;
}