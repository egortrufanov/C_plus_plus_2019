#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Razmer massiva: ";
	cin >> n;
	int* myArray = new int[n];
	cout << "Vvedite elementy massiva: ";
	for (int i = 0; i < n; i++)
	{
		cin >> myArray[i];
	}
	cout << "Vash massiv: ";
	for (int i = 0; i < n; i++)
	{
		cout << myArray[i]<< " ";
	}
	delete[] myArray;
	return 0;
}