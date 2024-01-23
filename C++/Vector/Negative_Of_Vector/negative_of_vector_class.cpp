#include <iostream>
#include <vector>
#include <math.h>
#include "31_lab_4_Q1_header.h"


Vector::Vector()
{
    x=NULL;
    y=NULL;
    z=NULL;
}

void Vector::output()
{
    std::cout<<"RESULTANT VECTOR:\n";
    std::cout<<*(this->x)<<","<<*(this->y)<<","<<*(this->z)<<std::endl;
}

Vector::Vector(double x, double y, double z)
{
    this->x=new double(x);
    this->y=new double(y);
    this->z=new double(z);

    static int i=0;
    i++;
    if(i==2)
    {
        std::cout<<"ELEMENTS OF VECTOR A:"<<std::endl;
        std::cout<<x<<" "<<y<<" "<<z<<std::endl;
    }
    if(i==3)
    {
        std::cout<<"ELEMENTS OF NEGATIVE OF VECTOR A:"<<std::endl;
        std::cout<<x<<" "<<y<<" "<<z<<std::endl;
    }
}

Vector Vector::operator-(const Vector &neg1)
{
    double n1,n2,n3;
    n1 = *(this->x) - *(neg1.x);
    n2 = *(this->y) - *(neg1.y);
    n3 = *(this->z) - *(neg1.z);

    Vector V(n1,n2,n3);
    return V;
}

Vector::~Vector()
{
    delete x,y,z;
}



