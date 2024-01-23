#include <iostream>
#include <cmath>

using namespace std;

class point
{
    private:
        double x,y;
    public:
        void getpoint(double,double);
        double distance (point &);
};

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