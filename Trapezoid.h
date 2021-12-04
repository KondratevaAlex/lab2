#pragma once
#ifndef Trapezoid_h
#define Trapezoid_h

class Trapezoid {
private:
	double dlinaa, dlinab, dlinac, dlinad, dlinah;
public:
	Trapezoid settrap(Trapezoid trap);
	void printtrap(Trapezoid trap);
	double trapperimeter(Trapezoid trap);
	double trapsurf(Trapezoid trap);
};

#endif
