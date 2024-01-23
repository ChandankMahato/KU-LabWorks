#include <iostream>
#include <vector>
#include <math.h>
#include "31_lab_4_Q1_header.h"

int main()
{
    double a1,a2,a3;
    a1=a2=a3=0;
    double b1,b2,b3;
    
    std::cout<<"\n THIS PROGRAM IS FOR ROW VECTOR'S OR COLUMN VECTOR'S AND CURRENTLY TAKES ONLY THREE INPUTS!\n";

    std::cout<<"########################\n";
    std::cout<<"INPUT SECTION\n";

    std::cout<<"ENTER THE ELEMENTS OF VECTOR A:\n";
    std::cin>>b1>>b2>>b3;
    
    std::cout<<"OUTPUT SECTION!\n";
    std::cout<<"########################\n";
    
    Vector v1(a1,a2,a3);
    Vector v2(b1,b2,b3);
    Vector v3=v1-v2;

    v3.output();
    std::cout<<"########################";
}