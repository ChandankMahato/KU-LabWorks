#include <iostream>
#include <cmath>

class Point{
    private:
        double x;
        double y;
    public:
        void setCoordinates(double x,double y);
        double distanceFrom(const Point &anotherPoint);
};

void Point::setCoordinates(double x,double y)
{
    this->x=x;
    this->y=y;
}

double Point::distanceFrom(const Point &anotherPoint)
{
    double sq_xdiff= pow(anotherPoint.x-this->x,2);
    double sq_ydiff=pow(anotherPoint.y-this->y,2);

    return sqrt(sq_xdiff+sq_ydiff);
}

int main()
{
    Point p1;
    p1.setCoordinates(10,20);

    Point p2;
    p2.setCoordinates(0,10);

    std::cout<<"Distance = "<<p1.distanceFrom(p2)<<std::endl;
}