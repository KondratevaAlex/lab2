#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

void Teacher::estimate() {
	cout << "\n������ �� ������: ";
	cin >> mark;
	cout << name << " " << surname << ": " << "������ �� ������ " << mark << endl;
};
void Teacher::set(string name, string patronymic, string surname, int experience) {
	this->name = name;
	this->patronymic = patronymic;
	this->surname = surname;
	this->experience = experience;
};
void Teacher::set(string name, string patronymic, string surname, int experience) {
	Student::set();
	this->experience = experience;
};