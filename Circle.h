#pragma once
#ifndef Circle_h
#define Circle_h
#define M_PI   3.14159265358979323846

class Circle {
private:
	double dlinar;
public:
	Circle setcirc(Circle circ);
	void printcirc(Circle circ);
	double circperimeter(Circle circ);
	double circsurf(Circle circ);
};

#endif
