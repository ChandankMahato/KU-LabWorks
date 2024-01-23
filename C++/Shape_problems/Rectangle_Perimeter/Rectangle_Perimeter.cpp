//main.cpp
#include <iostream>
#include <cmath>
#include "Rectangle_perimeter.h"

void point::getpoint(double a, double b)
{
    this->x=a;
    this->y=b;
}

double point::distance(point& reference)
{
    point random;
    random.x = pow((reference.x-x),2);
    random.y = pow((reference.y-y),2);

    return(sqrt(random.x+random.y));
}

void rectangle::setPoints(const point & a, const point & b)
{
    this->p1=a;
    this->p2=b;
}
void rectangle::getDimensions(double & c, double & d)
{
    this->l=c;
    this->w=d;
}

inline double rectangle::perimeter()
{
    return(2*(l+w));
}