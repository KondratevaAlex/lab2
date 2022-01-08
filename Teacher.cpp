#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

Teacher::Teacher(string name, string patronymic, string surname, int experience) : Student(name, patronymic, surname) {
	this->experience = experience;
};

void Teacher::estimate() {
	cout << "\nОценка за работу: ";
	cin >> mark;
	cout << name << " " << surname << "\nСтаж работы в годах: " << experience << "\nОценка за работу " << mark << endl;
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
void Teacher::operator =(Student b) {
	this->name = b.getName();
	this->patronymic = b.getPatronymic();
	this->surname = b.getSurname();
};