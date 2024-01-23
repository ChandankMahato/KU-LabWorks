#include <iostream>
#include <string>
#include <cstring>

#include "Calculate_Grade.h"

int main()
{
    Student s1;

    std::cout<<"**********************************************"<<std::endl;
    std::string sname;
    std::cout<<"ENTER STUDENT NAME=";
    getline(std::cin,sname);

    s1.setName(sname);

    int smarks;
    std::cout<<"ENTER THE MARKS=";
    std::cin>>smarks;
    std::cout<<"\n";

    s1.setGrade(smarks);
    s1.getGrade();
    std::cout<<"**********************************************";
    return 0;
}