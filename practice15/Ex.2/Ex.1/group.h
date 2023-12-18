#pragma once
#include "student.h"
#include <list>
#include<algorithm>
#include<set>

using namespace std;
class Group
{
private:
	string name;
	multiset <Student*, compareStudent> masSt;
	multiset <Student*, compareStudent>::iterator iter;
public:
	Group(string name);
	Group();
	int getSize();
	void addStudent(Student* newStudent);
	void delStudent(Student* oldStudent);
	void setName(string newName);
	Student* findStudent(string, string);
	void GroupOut();
	string getName();
};