#pragma once

enum Grade{A=80,A_minus=75,B_plus=70,B=65,B_minus=60,C_plus=55,C=50,C_minus=45,D=40,F=39};
class Student
{
    private:
        std::string name;
        double grade;

    public:
        void setName(const std::string &);
        void setGrade(double grade);
        void getName();
        void getGrade();
};