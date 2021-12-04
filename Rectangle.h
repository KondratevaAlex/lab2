#pragma once
#ifndef Rectangle_h
#define Rectangle_h

class Rectangle {
private:
	double dlinaa, dlinab;
public:
	Rectangle setrect(Rectangle rect);
	void printrect(Rectangle rect);
	double rectperimeter(Rectangle rect);
	double rectsurf(Rectangle rect);
};

#endif
