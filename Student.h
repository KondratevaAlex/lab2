﻿#pragma once
#include <string>
#ifndef STUDENT_H_
#define STUDENT_H_
using namespace std;

class Student
{
protected:
	string name;
	string patronymic;
	string surname;
	string group;
	static int count;
public:
	Student();
	Student(string name);
	Student(string name, string patronymic, string surname);
	Student(const Student& st);
	Student& operator=(const Student& st);
	string getName();
	string getPatronymic();
	string getSurname();
	void setAnotherInformation();
	void getAnotherInformation();
	void set();
	void printInfo();
	void getFIO();
	static int getCount();
	friend void operator << (ostream& o, Student r);
	friend Student operator >> (istream& i, Student& r);

};

#endif
