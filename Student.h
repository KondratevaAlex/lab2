#pragma once
#include <string>
#ifndef STUDENT_H_
#define STUDENT_H_
using namespace std;

class Student
{
private:
	string name;
	string patronymic; // îò÷åñòâî
	string surname; // ôàìèëèÿ
public:
	Student();
	Student(string name, string patronymic, string surname); //èñïîëüçîâàíèå ìåòîäà asign()
	void set();
	void printInfo();
	void getFIO(); //èíäåêñàöèÿ

};

#endif
