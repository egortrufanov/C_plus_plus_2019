#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char op;
	cout << "������ ���� �����, ������ ���� ���� �����: ";
	cin >> op;
	cout << "������ �������\n";
	cout << "������ ���������\n";
	switch (op)
	{
	case 'S':
		cout << "����� ������ ������\n";
		break;
	case 'V':
		cout << "����������� ����\n";
		cout << "����� ������ ������\n";
	}
}