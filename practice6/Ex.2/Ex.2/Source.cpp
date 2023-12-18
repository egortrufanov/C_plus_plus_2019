#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	ofstream text("lyrics.txt");
	string s;
	if (!text)
	{
		cout << "Файл открыть невозможно\n";
	}
	else
	{
		getline(cin, s);
		while (s != "  ")
		{
			text << s << endl;
			getline(cin, s);
		}
		text.close();
	}
}