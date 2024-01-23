//main.cpp
#include <iostream>
#include <cmath>

#include "Rectangle_perimeter.h"

using namespace std;

int main(void)
{
    point p,q,r;
    cout<<"##########################################"<<endl;
    cout<<"LET THE RECTANGLE BE []ABCD."<<endl;
    cout<<"NOTE:A AND C ARE DIGONAL POINTS."<<endl;
    cout<<"A(X1,Y1) AND C(X2,Y2) THEN,"<<endl;
    cout<<"X1!=X2 AND Y1!=Y2"<<endl;

    double num1[2],num2[2],num3[2];
    cout<<"ENTER POINT A:"<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>num1[i];
    }
    cout<<"ENTER POINT C:"<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>num2[i];
    }    

    num3[0]=num1[0];
    num3[1]=num2[1];

    //num3[0]=num1[1];
    //num3[1]=num2[0];

    p.getpoint(num1[0],num1[1]);
    r.getpoint(num2[0],num2[1]);
    q.getpoint(num3[0],num3[1]);

    rectangle a;
    a.setPoints(p,r);
    double c=q.distance(p);
    double d=q.distance(r);
    a.getDimensions(c,d);
    std::cout<<"perimeter is:"<<a.perimeter()<<std::endl;

    cout<<"##########################################";

}