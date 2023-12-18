//Задание 1 из упр. 1
#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "Vvedite koordinaty" << endl;
	cin >> x >> y;
	if (x * x + y * y < 9 && y> 0)
		cout << "vnutri";
	else if (x * x + y * y > 9 || y < 0)
		cout << "snaruzhi";
	else cout << "na granice";
}