#include <iostream>
using namespace std;
// ��������� ������� ���� �����
int main()
{
	double x; /* ���������� ����������*/
	double a, b;
	cout << "\n������� a � b:\n";
	cin >> a; // ���� � ���������� �������� a
	cin >> b; // ���� � ���������� �������� b
	x = a / b; // ���������� �������� x
	cout << "\nx = " << x << endl; //����� ���������� �� �����
	return 0;
}