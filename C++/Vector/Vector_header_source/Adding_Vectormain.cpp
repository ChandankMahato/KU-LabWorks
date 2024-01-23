#include "Adding_Vector.h"
#include <iostream>

int main()
{

    double a1,a2,a3;
    double b1,b2,b3;

    std::cout<<"\nTHIS PROGRAM IS FOR ROW VECTOR'S OR COLUMN VECTOR'S ADDITION AND CURRENTLY TAKES ONLY THREE INPUT!\n";
    
    std::cout<<"INPUT SECTION!\n";
    std::cout<<"ENTER THE ELMENTS OF VECTOR A:\n";//input value of vector A
    std::cin>>a1>>a2>>a3;

    std::cout<<"ENTER THE ELEMENTS OF VECTOR B:\n";//input value of vector B
    std::cin>>b1>>b2>>b3;

    std::cout<<"OUTPUT SECTION!\n";
    std::cout<<"##################################\n";
    Vector V1(a1,a2,a3);//assigne the value of vector V1
    Vector V2(b1,b2,b3);//assign the value of vector v2

    Vector V3(V1.add(V2));//save the sum to V3

    V3.output();//returns the result
    std::cout<<"###################################";
}