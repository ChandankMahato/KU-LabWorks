#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    point p1;
    p1.setCoordinates(10,20);

    point p2;
    p2.setCoordinates(5,15);

    cout << "distance= "<<p1.distanceFrom(p2)<<endl;
}