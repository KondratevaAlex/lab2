#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

Teacher::Teacher(string name, string patronymic, string surname, int experience) : Student(name, patronymic, surname) {
	this->experience = experience;
};

void Teacher::estimate() {
	cout << "\n������ �� ������: ";
	cin >> mark;
	cout << name << " " << surname << "\n���� ������ � �����: " << experience << "\n������ �� ������ " << mark << endl;
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
void operator << (ostream& o, Teacher r)
{
	cout << "\n" << r.name << " " << r.patronymic << " " << r.surname << " ���� � �����: " << r.experience << endl;
	r.getAnotherInformation();
};

Teacher operator >> (istream& o, Teacher& r)
{
	cin >> r.name >> r.patronymic >> r.surname >> r.experience;
	return r;
};
void Teacher::setAnotherInformation() {
	cout << "������ ������� �������������: ";
	cin >> AcademicDegree;
}


void Teacher::getAnotherInformation() {
	cout << "������ ������� �������������: " << AcademicDegree << endl;
}
Teacher& Teacher::operator= (const Teacher& st) {
	this->name = st.name;
	this->patronymic = st.patronymic;
	this->surname = st.surname;
	return *this;
}