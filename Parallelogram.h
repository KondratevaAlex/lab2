#pragma once
#ifndef Parallelogram_h
#define Parallelogram_h
#include "ObjectInfo.h"

class Parallelogram {
private:
	double dlinaa, dlinab, ygolalp;
	ObjectInfo* another_info;
public:
	Parallelogram setpar(Parallelogram par);
	void printpar(Parallelogram par);
	double parperimeter(Parallelogram par);
	double parsurf(Parallelogram par);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif
