#pragma once
#ifndef Triangle_h
#define Triangle_h
#include "ObjectInfo.h"

class Triangle {
private:
	double dlinaa, dlinab, dlinac;
	ObjectInfo* another_info;
public:
	Triangle settri(Triangle trian);
	void printtri(Triangle trian);
	double triperimeter(Triangle trian);
	double& trisurf(double &volume);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif
