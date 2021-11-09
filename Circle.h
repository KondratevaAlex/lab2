#pragma once
#ifndef Circle_h
#define Circle_h

struct Circle
{
	double r;
};

void circenter(struct Circle* circ);
void circprint(struct Circle circ);
double circvolume(Circle);
double circperimeter(Circle);


#endif
