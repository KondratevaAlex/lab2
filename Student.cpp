#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
int Student::count = 0;


Student::Student() {
	name = "Unknown";
	patronymic = "Unknown";
	surname = "Unknown";
	count++;
};

Student::Student(string name, string patronymic, string surname) {
	this->name.assign(name);
	this->patronymic.assign(patronymic);
	this->surname.assign(surname);
	count++;
};

void Student::set() {
	cout << "Введите имя: ";
	cin >> name;
	cout << "Введите отчество: ";
	cin >> patronymic;
	cout << "Введите фамилию: ";
	cin >> surname;

};

void Student::printInfo() {
	string info = name + " " + patronymic + " " + surname;
	cout << "Студент: " << info << endl;
};

void Student::getFIO() {
	char fio[3] = { surname[0], patronymic[0], name[0] };
	cout << "ФИО: " << fio[0] << fio[1] << fio[2] << endl;

};

int Student::getCount() {
	return count;
};