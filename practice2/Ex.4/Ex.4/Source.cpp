#include <iostream>;
using namespace std;
int main()
{
	int times, points = 0;
	cout << "Skol'ko raz? ";
	cin >> times;
	for (int i=1; i<=times; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x * x + y * y <= 1)
			points = points + 10;
		else if (x * x + y * y > 1 && x * x + y * y <= 4)
			points = points + 5;
	}
	float s = points / times;
	cout << "U tebya " << points << " ochkov" << endl;
	if (s == 10)
		cout << "Snaiper";
	else if (s < 10 && s>0)
		cout << "Neploho";
	else cout << "Mazila";
}