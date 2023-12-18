//Задание 2 из упр. 1
#include <iostream>
using namespace std;
int main()
{
	cout << "Vvedite chislo: ";
	int a;
	cin >> a;
	if (a % 400 == 0)
		cout << "YES";
	else if (a % 100 == 0)
		cout << "NO";
	else if (a % 4 == 0)
		cout << "YES";
	return 0;
}