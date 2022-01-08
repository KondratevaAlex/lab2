#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

void Teacher::estimate() {
	cout << "\nќценка за работу: ";
	cin >> mark;
	cout << name << " " << surname << ": " << "ќценка за работу " << mark << endl;
};