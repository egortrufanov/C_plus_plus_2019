#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	int n, i, element;
	ifstream in;
		ofstream out;
		out.open("array.txt");
	cout << "Enter size of array: ";
	cin >> n;
	int* A = new int[n];
	cout << "Enter array's elements: "<< endl;
	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cout << "source array: ";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	out << "Source massive: ";
	for (i = 0; i < n; i++)
	{
		out << A[i] << " ";
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				element = A[j];
				A[j] = A[j + 1];
				A[j + 1] = element;
			}
		}
	}
	out << endl << "Sorted massive: ";
	for (i = 0; i < n; i++)
	{
		out << A[i] << " ";
	}
}