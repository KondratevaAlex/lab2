#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

void Teacher::estimate() {
	cout << "\n������ �� ������: ";
	cin >> mark;
	cout << name << " " << surname << ": " << "������ �� ������ " << mark << endl;
};