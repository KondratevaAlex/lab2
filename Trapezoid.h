#pragma once
#ifndef Trapezoid_h
#define Trapezoid_h
#include "ObjectInfo.h"

class Trapezoid {
private:
	double dlinaa, dlinab, dlinac, dlinad, dlinah;
	ObjectInfo* another_info;
public:
	Trapezoid();
	Trapezoid(double noll);
	Trapezoid(double _dlinaa, double _dlinab, double _dlinac, double _dlinad, double _dlinah);
	Trapezoid settrap(Trapezoid trap);
	void printtrap(Trapezoid trap);
	double* trapperimeter(double* perimetr);
	double& trapsurf(double &volume);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif
