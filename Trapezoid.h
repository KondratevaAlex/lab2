#pragma once
#ifndef Trapezoid_h
#define Trapezoid_h
#include "ObjectInfo.h"

class Trapezoid {
private:
	double dlinaa, dlinab, dlinac, dlinad, dlinah;
	ObjectInfo* another_info;
public:
	Trapezoid settrap(Trapezoid trap);
	void printtrap(Trapezoid trap);
	double trapperimeter(Trapezoid trap);
	double trapsurf(Trapezoid trap);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif
