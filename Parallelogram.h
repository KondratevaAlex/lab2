#pragma once
#ifndef Parallelogram_h
#define Parallelogram_h
#include "ObjectInfo.h"

class Parallelogram {
private:
	double dlinaa, dlinab, ygolalp;
	ObjectInfo* another_info;
public:
	Parallelogram();
	Parallelogram(double noll);
	Parallelogram(double _dlinaa, double _dlinab, double _ygolalp);
	Parallelogram setpar(Parallelogram par);
	void printpar(Parallelogram par);
	double* parperimeter(double* perimetr);
	double& parsurf(double &volume);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif
