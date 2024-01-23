#include <iostream>
#include <cmath>
#include "31_lab_5_header.h"

int main()
{
    double x1,x2,h1,w1;
    int s1;
    
    std::cout<<"INPUT SECTION\n######################################################"<<std::endl;
    std::cout<<"Enter Centroid=\n";
    std::cin>>x1>>x2;
    //For a polygon You Must Enter No of Sides Greater Than Equals to 3
    std::cout<<"Enter No OF Sides=";
    std::cin>>s1;

    std::cout<<"Enter Height And Width=\n";
    std::cin>>h1>>w1;

    std::cout<<"######################################################\n";
    std::cout<<"OUTPUT SECTION!\n";

    if(s1==3)
    {
        Triangle t1;
        t1.setCentroid(x1,x2);
        t1.NoofSides(s1);
        t1.HeightWidth(h1,w1);
        t1.Display();
        t1.AreaPerimeter();

        std::cout<<"\nEnter New Location of Centroid=\n";
        std::cin>>x1>>x2;
        t1.setCentroid(x1,x2);
        t1.Move();
        t1.AreaPerimeter();
        std::cout<<"######################################################";
    }
    else if(s1==4)
    {
        Rectangle r1;
        r1.setCentroid(x1,x2);
        r1.NoofSides(s1);
        r1.HeightWidth(h1,w1);
        r1.Display();
        r1.AreaPerimeter();

        std::cout<<"\nEnter New Location of Centroid=\n";
        std::cin>>x1>>x2;
        r1.setCentroid(x1,x2);
        r1.Move();
        r1.AreaPerimeter();
        std::cout<<"######################################################";
    }
}