#pragma once
#include "enumclass.h"

enum Grades{A=80,A_minus=75,B_plus=70,B=65,B_minus=60,C_plus=55,C=50,C_minus=45,D=40,F=39};
class Student{
    private:
        std::string name;
        double Grade;
    public:
        void setname(const std::string &);
        void setgrade(double grade);
        void getname();
        void getgrade();
};