#include <iostream>

#include "operator_overloading_example.h"
vector :: vector (){
    e1 = NULL;
    e2 =NULL;
    e3 = NULL;

}
void vector :: print()
{
    std::cout << *(this->e1) <<"," <<*(this->e2)<< "," << *(this->e3) <<std::endl;
}
vector :: vector(int a , int b ,int c){
   this -> e1 =new int(a);

    this ->e2 =new int(b);

    this -> e3 =new int(c);
    }
vector :: vector (const vector& another)
{
    e1 = another.e1;
    e2 = another.e2;
    e3 = another.e3;
}
vector vector ::operator +(const vector  &v1 ){
    int e1,e2,e3;
    e1 =*(v1.e1)+ *(this-> e1); 
    e2 =*(v1.e2)+ *(this -> e2);
    e3 = *(v1.e3)+ *(this ->e3);
    vector v(e1,e2,e3); 
    return v;
}
void vector::operator ++()
{

    ++(*(this->e1));
    ++(*(this->e2));
    ++(*(this->e3));
}
void vector::operator ++(int x)
{

(*(this->e1))++;
    (*(this->e2))++;
    (*(this->e3))++;
}

void vector::operator -()
{

    *this->e1 = -*(this->e1);
    *this->e2 = -*(this->e2);
    *this->e3 = -*(this->e3);
}
vector :: ~vector()
{
    delete e1,e2,e3;
}