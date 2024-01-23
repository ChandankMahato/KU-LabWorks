#include "Adding_Two_Vector.h"
#include <iostream>


vector operator+(const vector &v1, const vector &v2);
std::ostream& operator <<(std::ostream &out,const vector &t);

int main()
{
    vector v1(2,2,3,true);
    vector v2(1,2,3,false);
    vector v3=v1+v2;
    std::cout<<v1<<std::endl;;
    std::cout<<v2<<std::endl;
    std::cout<<v3<<std::endl;


    return 0;
}