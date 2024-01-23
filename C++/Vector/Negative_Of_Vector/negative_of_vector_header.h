
#pragma once

class Vector
{
    private:
        double *x, *y, *z;
    public:
        Vector();

        Vector(double,double,double);

        Vector operator-(const Vector &V);

        void output();

         ~Vector();
};
