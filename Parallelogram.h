#pragma once
#ifndef Parallelogram_h
#define Parallelogram_h

struct Parallelogram
{
	double a;
	double b;
	double alpha;
};

void paralenter(struct Parallelogram* paral);
void paralprint(struct Parallelogram paral);
double paralvolume(Parallelogram);
double paralperimeter(Parallelogram);


#endif
