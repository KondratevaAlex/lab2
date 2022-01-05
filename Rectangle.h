#pragma once
#ifndef Rectangle_h
#define Rectangle_h
#include "ObjectInfo.h"

class Rectangle {
private:
	double dlinaa, dlinab;
	ObjectInfo* another_info;
public:
	Rectangle();
	Rectangle(double noll);
	Rectangle(double _dlinaa, double _dlinab);
	Rectangle setrect(Rectangle rect);
	void printrect(Rectangle rect);
	double* rectperimeter(double* perimetr);
	double& rectsurf(double &volume);
	void addAnotherInfo(ObjectInfo* someinfo);

	Rectangle operator+(const Rectangle& another);
	Rectangle& operator++();
	Rectangle& operator++(int);
};

#endif
