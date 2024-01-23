#pragma once

class Polygon
{
    protected:
        double x,y,height,width;
        int NoOfSides;
    public:
        void setCentroid(double a, double b);
        void NoofSides(int s);
        void HeightWidth(double h, double w);
};

class Triangle: public Polygon
{
    public:
        void Display();
        void Move();
        void AreaPerimeter();
};


class Rectangle: public Polygon
{
    public:
        void Display();
        void Move();
        void AreaPerimeter();
};