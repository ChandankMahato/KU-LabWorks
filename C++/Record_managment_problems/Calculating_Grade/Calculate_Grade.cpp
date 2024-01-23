#include <iostream>
#include <string>
#include <cstring>

#include "Calculate_Grade.h"

void Student::setName(const std::string &name)
{
    this->name=name;
}

void Student::setGrade(double grade)
{
    this->grade=grade;
}

void Student::getName()
{
    std::cout<<name<<std::endl;
}

void Student::getGrade()
{
    std::cout<<name<<std::endl;
    std::string G;

    if(grade>100)
    {
        G="MARKS MUST BE ENTERED BETWEEN 0-100";
    }

    else if(grade>=Grade::A)
    {
        G="YOUR Grade = A";
    }
    else if(grade>=Grade::A_minus)
    {
        G="YOUR Grade = A-";
    }
    else if(grade>=Grade::B_plus)
    {
        G="YOUR Grade = B+";
    }
    else if(grade>=Grade::B)
    {
        G="YOUR Grade = B";
    }
    else if(grade>=Grade::B_minus)
    {
        G="Your Grade = B-";
    }
    else if(grade>=Grade::C_plus)
    {
        G="Your Grade = C+";
    }
    else if(grade>=Grade::C)
    {
        G="Your Grade = C";
    }
    else if(grade>=Grade::C_minus)
    {
        G="Your Grade = C-";
    }
    else if(grade>=Grade::D)
    {
        G="Your Grade = D";
    }
    else if(grade<0)
    {
        G="MARKS MUST BE ENTERED BETWEEN 0-100";
    }
    else if(grade<=Grade::F)
    {
        G="Your Grade = F";
        std::cout<<"You Have Failed"<<std::endl;
    }

    std::cout<<G<<std::endl;
}