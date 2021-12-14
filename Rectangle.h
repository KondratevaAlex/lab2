#pragma once
#ifndef Rectangle_h
#define Rectangle_h
#include "ObjectInfo.h"

class Rectangle {
private:
	double dlinaa, dlinab;
	ObjectInfo* another_info;
public:
	Rectangle setrect(Rectangle rect);
	void printrect(Rectangle rect);
	double rectperimeter(Rectangle rect);
	double rectsurf(Rectangle rect);
	void addAnotherInfo(ObjectInfo* someinfo);
};

#endif
