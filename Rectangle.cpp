#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <typeinfo>
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	dlinaa = dlinab = 0.0;
}

Rectangle::Rectangle(double noll)
{
	dlinaa = dlinab = noll;
}

Rectangle::Rectangle(double _dlinaa, double _dlinab)
{
	dlinaa = _dlinaa;
	dlinab = _dlinab;
}

Rectangle Rectangle::setrect(Rectangle rect)
{
	printf("\nДлина стороны а: ");
	try {
		scanf("%lf", &rect.dlinaa);
		if (dlinaa < 0) {
			throw "Неверный диапазон.";
		}
	}
	catch (const char* ex) {
		cout << "Исключение: " << ex << endl;
	}
	printf("\nДлина стороны b: ");
	try {
		scanf("%lf", &rect.dlinab);
		if (dlinab < 0) {
			throw "Неверный диапазон.";
		}
	}
	catch (const char* ex) {
		cout << "Исключение: " << ex << endl;
	}
	return rect;
}

void Rectangle::printrect(Rectangle rect)
{
	printf("\nДлины сторон а и b соответственно: %lf, %lf", rect.dlinaa, rect.dlinab);
}

double* Rectangle::rectperimeter(double* perimetr)
{
	*perimetr = (dlinaa * dlinab) * 2;
	return perimetr;
}

double& Rectangle::rectsurf(double& volume)
{
	volume = dlinaa * dlinab;
	return volume;
}

void Rectangle::addAnotherInfo(ObjectInfo* someinfo)
{
	another_info = someinfo;
}

Rectangle Rectangle::operator+(const Rectangle& another)
{
	Rectangle result;
	result.dlinaa = this->dlinaa + another.dlinaa;
	result.dlinab = this->dlinab + another.dlinab;
	return result;
}

Rectangle& Rectangle::operator++()
{
	this->dlinaa += 1;
	this->dlinab += 1;
	return *this;
}

Rectangle& Rectangle::operator++(int)
{
	Rectangle tmp(*this);
	this->dlinaa++;
	this->dlinab++;
	return tmp;
}
