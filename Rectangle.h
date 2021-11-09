#pragma once
#ifndef Rectangle_h
#define Rectangle_h

struct Rectangle
{
	double a;
	double b;
};

void rectenter(struct Rectangle* rect);
void rectprint(struct Rectangle rect);
double rectvolume(struct Rectangle);
double rectperimeter(struct Rectangle);

#endif