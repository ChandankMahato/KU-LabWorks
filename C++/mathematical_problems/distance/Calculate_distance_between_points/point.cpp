#include <cmath>
#include "point.h"


void point::setCoordinates(double x, double y)
{
    this->x=x;
    this->y=y;
}

double point::distanceFrom(const point &anotherpoint)
{
    double sq_xdiff = pow(anotherpoint.x - x,2);
    double sq_ydiff = pow(anotherpoint.y - y, 2);

    return sqrt(sq_xdiff + sq_ydiff);
}