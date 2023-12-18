#include <iostream>
#include <windows.h>
using namespace std;
struct Distance
{
	int feet;
	double inches;
};
Distance SummMas(Distance masDist[], int n)
{
	Distance d;
	int i;
	d.feet = 0;
	d.inches = 0;
	for (int i = 0; i < n; i++)
	{
		d.feet = d.feet + masDist[i].feet;
		d.inches = d.inches + masDist[i].inches;
		if (d.inches >= 12.0)
		{
			d.inches -= 12.0;
			d.feet++;
		}
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	cout << "\n¬ведите число футов: ";
	cin >> d.feet;
	cout << "¬ведите число дюймов: ";
	cin >> d.inches;
	return d;
}
void ShowDist(Distance& d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}
int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = AddDist(d1,d2);
	ShowDist(d1);
	ShowDist(d2);
	ShowDist(d3);
	*/

	int n;
	cout << "¬ведите размер массива рассто€ний ";
	cin >> n;
	Distance* masDist = new Distance[n];
	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}
	for (int i = 0; i < n; i++)
	{
		ShowDist(masDist[i]);
	}
	Distance d;
	d = SummMas(masDist, n);
	ShowDist(d);
	delete[] masDist;

	return 0;
}