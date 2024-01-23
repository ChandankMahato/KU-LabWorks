#pragma once
class Vector
{
    private:
        double *x,*y,*z;

    public:
        Vector();//thsi is constructor similar to default constructor

        Vector(double, double , double); // this is parameterized constructor

        Vector add(const Vector &V);//this is method for addition

        ~Vector();//this is destructor

        void output(); //method for output
};