#pragma once
#include "Student.h"
class Teacher :
    public Student
{
private:
    int mark;

public:
    void estimate();

};