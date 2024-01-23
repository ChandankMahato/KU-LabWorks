#include "Adding_Two_Vector.h"
#include <iostream>


vector operator+(const vector &v1,const vector &v2)
{
    if(v1.isRowVector()==v2.isRowVector())
    {
        return vector(v1.getx()+v2.getx(),v1.gety()+v2.gety(),v1.getz()+v2.getz());
    }
    else
    {
        std::cout<<"ROW VECTOR AND COLUMN VCECTOR CAN NOT BE ADDED"<<std::endl;
    }
}

std::ostream& operator <<(std::ostream &out,const vector &t)
{
    out<<t.getx()<<" "<<t.gety()<<" "<<t.getz();

}