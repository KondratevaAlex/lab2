#pragma once
#include <string>
#ifndef STUDENT_H_
#define STUDENT_H_
using namespace std;

class Student
{
private:
	string name;
	string patronymic;
	string surname;
	static int count;
public:
	Student();
	Student(string name, string patronymic, string surname);
	void set();
	void printInfo();
	void getFIO();
	static int getCount();

};

#endif
