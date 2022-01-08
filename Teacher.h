#pragma once
#include "Student.h"
class Teacher :
    public Student
{
private:
    int mark;
    int experience;

public:
    Teacher(string name, string patronymic, string surname, int experience);
    void estimate();
    void set(string name, string patronymic, string surname, int experience);
    void  operator =(Student b);
};