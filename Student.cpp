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
}
Student::Student(string name)
{
	this->name = name;
	patronymic = "None";
	surname = "None";
	count++;
}
;

Student::Student(string name, string patronymic, string surname) {
	this->name.assign(name);
	this->patronymic.assign(patronymic);
	this->surname.assign(surname);
	count++;
}
Student::Student(const Student& st)
{
	this->name = st.name;
	this->patronymic = st.patronymic;
	this->surname = st.surname;
	count++;
}
Student& Student::operator=(const Student& st)
{
	this->name = st.name;
	this->patronymic = st.patronymic;
	this->surname = st.surname;
	return *this;
}
;

void Student::set() {
	cout << "Введите имя: ";
	cin >> name;
	cout << "Введите отчество: ";
	cin >> patronymic;
	cout << "Введите фамилию: ";
	cin >> surname;

};

void operator << (ostream& o, Student r)
{
	cout << r.name << " " << r.patronymic << " " << r.surname << endl;
}

Student operator >> (istream& o, Student& r)
{
	cin >> r.name >> r.patronymic >> r.surname;
	return r;
}

void Student::getFIO() {
	char fio[3] = { surname[0], patronymic[0], name[0] };
	cout << "ФИО: " << fio[0] << fio[1] << fio[2] << endl;

};

int Student::getCount() {
	return count;
};
string Student::getName() {
	return name;
}

string Student::getPatronymic() {
	return patronymic;
}

string Student::getSurname() {
	return surname;
}
