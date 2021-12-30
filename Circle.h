#pragma once
#ifndef Circle_h
#define Circle_h
#include "ObjectInfo.h"
#define M_PI   3.14159265358979323846

class Circle {
private:
	double dlinar;
	ObjectInfo* another_info;
public:
	Circle setcirc(Circle circ);
	void printcirc(Circle circ);
	double circperimeter(Circle circ);
	double& circsurf(double &volume);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif

