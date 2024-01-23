#include <iostream>
#include <cmath>
#include "31_lab_5_header.h"

        void Polygon::setCentroid(double a, double b)
        {
            x=a;
            y=b;
        }
        void Polygon::NoofSides(int s)
        {
            NoOfSides=s;
        }
        void Polygon::HeightWidth(double h, double w)
        {
            height=h;
            width=w;
        }
        void Triangle::Display()
        {
            std::cout<<"This is Triangle!"<<std::endl;
            std::cout<<"Centroid="<<"("<<x<<","<<y<<")"<<std::endl;
            std::cout<<"No OF Sides="<<NoOfSides<<std::endl;
        }
        void Triangle::Move()
        {
            std::cout<<"This is Triangle At New Location!\n";
            std::cout<<"Centroid="<<"("<<x<<","<<y<<")"<<std::endl;
            std::cout<<"No OF Sides="<<NoOfSides<<std::endl;
        }
        void Triangle::AreaPerimeter()
        {
            std::cout<<"Triangle Area="<<(0.5*height*width)<<std::endl;
            std::cout<<"(equilateral)Triangle Perimeter="<<(3*width)<<std::endl;
        }


        void Rectangle::Display()
        {
            std::cout<<"This is Rectangle!"<<std::endl;
            std::cout<<"Centroid="<<"("<<x<<","<<y<<")"<<std::endl;
            std::cout<<"No Of Sides="<<NoOfSides<<std::endl;
        }
          void Rectangle::Move()
        {
            std::cout<<"This is Rectangle At New Location!"<<std::endl;
            std::cout<<"Centroid="<<"("<<x<<","<<y<<")"<<std::endl;
            std::cout<<"No OF Sides="<<NoOfSides<<std::endl;
        }
        void Rectangle::AreaPerimeter()
        {
            std::cout<<"Rectangle Area="<<(height*width)<<std::endl;
            std::cout<<"Rectangle Perimeter="<<(2*width+2*height)<<std::endl;
        }
