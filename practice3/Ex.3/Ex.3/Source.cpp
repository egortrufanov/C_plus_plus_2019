#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void privet(string name)
{
	cout << name << ", " << "������������!" << endl;
}
void privet(string name, int k)
{
	cout << name << " " << ", ��� ��� " << "������������! "
		<< "�� ����� " << k << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "������� ���� ���" << endl;
	cin >> name;
	int k;
	cout << "������� ���� ������� �����" << endl;
	cin >> k;
	privet(name);
	privet(name, k);
	return 0;
}