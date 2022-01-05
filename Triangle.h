#pragma once
#ifndef Triangle_h
#define Triangle_h
#include "ObjectInfo.h"

class Triangle {
private:
	double dlinaa, dlinab, dlinac;
	ObjectInfo* another_info;
public:
	Triangle();
	Triangle(double noll);
	Triangle(double _dlinaa, double _dlinab, double _dlinac);
	Triangle settri(Triangle trian);
	void printtri(Triangle trian);
	double* triperimeter(double* perimetr);
	double& trisurf(double &volume);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif
