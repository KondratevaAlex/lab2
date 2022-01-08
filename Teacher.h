#pragma once
#include "Student.h"
class Teacher :
    public Student
{
private:
    int mark;
    int experience;
    string AcademicDegree;
public:
    Teacher(string name, string patronymic, string surname, int experience);
    void estimate();
    void set(string name, string patronymic, string surname, int experience);
    void  operator =(Student b);
    friend void operator << (ostream& o, Teacher r);
    friend Teacher operator >> (istream& i, Teacher& r);
    void setAnotherInformation();
    void getAnotherInformation();
};