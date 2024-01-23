//header.h
#pragma once

class point
{
    private:
        double x,y;
    public:
        void getpoint(double,double);
        double distance (point &);
};

class rectangle
{
    private:
        point p1,p2,p3;
        double l,w;

    public:
        void setPoints(const point &, const point &);
        void getDimensions(double &, double &);
        double perimeter();
};


