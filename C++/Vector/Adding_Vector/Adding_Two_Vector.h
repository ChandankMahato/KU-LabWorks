#pragma once
#include <iostream>
class vector{
    private:
        double x,y,z;
        bool row;

    public:
    vector(double x=0.0, double y=0.0, double z=0.0, bool row=0):x(x),y(y),z(z),row(row){}

    double getx()const{return x;}
    double gety()const{return y;}
    double getz()const{return z;}
    bool isRowVector() const{return row;}

    void setx(double x){this->x=x;}
    void sety(double y){this->y=y;}
    void setz(double z){this->z=z;}
    void setrow(bool row){this->row=row;}

    friend vector operator*(const vector &v1, const vector &v2);
};
