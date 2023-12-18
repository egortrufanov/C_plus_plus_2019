#include<iostream>
#include<string>
#include "student.h"
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int number;
	string category;
	string name;
	string last_name;
	cout << "Name: ";
	getline(cin, name);
	cout << "Last name: ";
	getline(cin, last_name);
	cout << "Card number: ";
	cin >> number;
	cout << "Card category: ";
	cin >> category;
	IdCard idc(number, category);
	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	Student* student02 = new Student(name, last_name, &idc);
	student02->set_scores(scores);
	float average_score = sum / 5.0;
	student02->set_average_score(average_score);
	cout << "Average points for " 
		<< student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;
	return 0;
}