#include <string>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Human
{
private:
	string name;
	string last_name;
	string second_name;

public:
	virtual void get_full_name()
	{
		cout << "\nВведите имя: ";
		cin >> name;
		cout << "\nВведите фамилию: ";
		cin >> last_name;
		cout << "\nВведите отчество: ";
		cin >> second_name;
	}
	virtual void put_full_name()
	{
		cout << "\nФамилия: " << last_name;
		cout << "\nИмя: " << name;
		cout << "\nОтчество: " << second_name;
	}
};

class Student : public Human
{
private:
	vector <int> scores;
public:
	void get_full_name()
	{
		Human::get_full_name();
		cout << "\nВведите 5 оценок студента ";
		int sc;
		for (int i = 0; i < 5; i++)
		{
			cin >> sc;
			scores.push_back(sc);
		}
	}
	void put_full_name()
	{
		Human::put_full_name();
		int count_scores = scores.size();
		int sum_scores = 0;
		float average_score;
		for (int i = 0; i < count_scores; ++i)
		{
			sum_scores += scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		cout << "\nСредний балл: " << average_score;
	}
};

class Teacher : public Human
{
private:
	int work_time;
public:
	void get_full_name()
	{
		Human::get_full_name();
		cout << "Введите количество часов : ";
		cin >> work_time;
	}
	void put_full_name()
	{
		Human::put_full_name();
		cout << "\nКоличество часов : " << work_time;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Human* pubarr[100];
	int n = 0;
	char choice;
	do
	{
		cout << "\nВводить данные для студента или учителя (s / t) ? ";
		cin >> choice;
		if (choice == 's')
			pubarr[n] = new Student();
		else
			pubarr[n] = new Teacher();
		pubarr[n]->get_full_name();
		n++;
		cout << "Продолжать((у / n) ? ";
		cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j < n; j++)
		pubarr[j]->put_full_name();
	cout << endl;

	return 0;
}
