#pragma once
#ifndef Trapezoid_h
#define Trapezoid_h

struct Trapezoid
{
	double a;
	double b;
	double c;
	double d;
	double h;
};

void trapenter(struct Trapezoid* trap);
void trapprint(struct Trapezoid trap);
double trapvolume(Trapezoid);
double trapperimeter(Trapezoid);


#endif
