#pragma once
#ifndef ObjectInfo_h
#define ObjectInfo_h

class ObjectInfo {
private:
	int colour, day, month, year;
public:
	ObjectInfo();
	ObjectInfo(int _colour, int _day, int _month, int _year);
	ObjectInfo setInfo(ObjectInfo obj);
	void printInfo(ObjectInfo obj);
};

#endif
