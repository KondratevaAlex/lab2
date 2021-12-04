#pragma once
#ifndef Triangle_h
#define Triangle_h

class Triangle {
private:
	double dlinaa, dlinab, dlinac;
public:
	Triangle settri(Triangle trian);
	void printtri(Triangle trian);
	double triperimeter(Triangle trian);
	double trisurf(Triangle trian);
};

#endif