
#include <iostream>
#include "Adding_Vector.h"

//assigning pointer x, y, z to NULL;
Vector::Vector()
{
    x=NULL;
    y=NULL;
    z=NULL;
}

//
void Vector::output()
{
    std::cout<<"RESULTANT VECTOR: \n";
    std::cout<<*(this->x)<<"\n"<<*(this->y)<<"\n"<<*(this->z)<<std::endl;// *(this->x) equivalents to *Vector::x

}
Vector::Vector(double x,double y, double z) 
{
    this->x=new double(x);
    this->y=new double(y);
    this->z=new double(z);

    static int i=0;
    i++;

    if(i==1)
    {
        std::cout<<"ELEMENTS OF VECTOR A:"<<std::endl;//prints first vector
        std::cout<<x<<"  "<<y<<"  "<<z<<std::endl;
    }

    if(i==2)
    {
        std::cout<<"ELEMENTS OF VECTOR B:"<<std::endl;//prints second vector
        std::cout<<x<<"  "<<y<<"  "<<z<<std::endl;
    }

    if(i==3)
    {
        std::cout<<"ELEMENTS OF VECTOR R:"<<std::endl; //prints resultant vector
        std::cout<<x<<"  "<<y<<"  "<<z<<std::endl;
    }
}

//addition of two vector is done here;
Vector Vector::add(const Vector &other1)
{
    double e1,e2,e3;
    e1=*(this->x)+*(other1.x); //*(this->x) is similar ot *Vector::x
    e2=*(this->y)+*(other1.y);
    e3=*(this->z)+*(other1.z);

    Vector V(e1,e2,e3);
    return V;
}

//Destructor called the x,y and z are deleted;
Vector::~Vector()
{
    delete x,y,z;
}