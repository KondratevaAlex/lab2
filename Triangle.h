#pragma once
#ifndef Triangle_h
#define Triangle_h

struct Triangle
{
	double a;
	double b;
	double c;
};

void trienter(struct Triangle* tri);
void triprint(struct Triangle tri);
double trivolume(Triangle);
double triperimeter(Triangle);


#endif