#pragma once
#ifndef Parallelogram_h
#define Parallelogram_h

class Parallelogram {
private:
	double dlinaa, dlinab, ygolalp;
public:
	Parallelogram setpar(Parallelogram par);
	void printpar(Parallelogram par);
	double parperimeter(Parallelogram par);
	double parsurf(Parallelogram par);
};

#endif
