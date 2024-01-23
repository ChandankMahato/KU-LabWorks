#include <iostream>
#include "31_lab_4_Q2_header.h"

    void  Vector::setrows()
    {
        std::cin >> m;
    }

    void Vector :: setcoloumns()
    {
        std::cin >> n;
    }
    Vector :: Vector ()
    {
        e1 = NULL;
        e2 =NULL;
        e3 = NULL;
    }

    std::ostream & operator << (std::ostream & outputStream , const Vector& v)
    {
        if (v.m  < v.n)
        {
            return outputStream <<"("<<*(v.e1) << ","<< *(v.e2) <<","<< *(v.e3)  << ")" <<std::endl;
        }
        else
        {
            return outputStream <<"\n("<<*(v.e1) << ")" <<std::endl <<"("<< *(v.e2) << ")" << std::endl << "(" <<*(v.e3)  <<")"  <<std::endl;
        }
    }

    std::istream & operator >> (std::istream& inputStream , const Vector & v)
    {
        return inputStream >> *(v.e1)  >>  *(v.e2) >> *(v.e3) ;
    }

    Vector :: Vector(double a , double b ,double c)
    {
        this -> e1 =new double(a);
        this ->e2 =new double(b); 
        this -> e3 =new double(c);
    }

    Vector :: Vector (const Vector& another)
    {
        e1 = another.e1;
        e2 = another.e2;
        e3 = another.e3;
    }

    Vector operator +(const Vector  &A,const Vector &B )
    {
        double e1,e2,e3;
        e1 =*(A.e1)+ *(B. e1); 
        e2 =*(A.e2)+ *(B.e2);
        e3 = *(A.e3)+ *(B.e3);
        Vector v(e1,e2,e3); 
        v.m=A.m;
        v.n=A.n;
        return v;   
    }

    Vector operator -( Vector  &A, Vector &B )
    {
        double e1,e2,e3;
        e1 =(A.gete1())- (B. gete1()); 
        e2 =(A.gete2())- (B.gete2());
        e3 =(A.gete3())- (B.gete3());
        Vector v(e1,e2,e3); 
        v.setcoloumns_a(A.getcoloumns());
        v.setcoloumns_a(A.getcoloumns());
        return v;   
    }

    Vector Vector ::operator +=(const Vector  &A )
    {
        double e1,e2,e3;
        e1 =*(A.e1)+ *(this->e1); 
        e2 =*(A.e2)+ *(this->e2);
        e3 = *(A.e3)+ *(this->e3);
        Vector v(e1,e2,e3); 
        return v;
    }

    int  operator *(const Vector & v,const Vector & A)
    {
        int e;
        e= (*(v.e1))*(*A.e1)+(*(v.e2))*(*A.e2)+(*(v.e3))*(*A.e3);
        return e;
    }

    void Vector::operator ++()
    {

        ++(*(this->e1));
        ++(*(this->e2));
        ++(*(this->e3));
    }
    void Vector::operator ++(int x)
    {
        (*(this->e1))++;
        (*(this->e2))++;
        (*(this->e3))++;
    }

    void Vector::operator --()
    {
        --(*this->e1);
        --(*this->e2);
        --(*this->e3);
    }

    void Vector::operator --(int x)
    {
        (*this->e1)--;
        (*this->e2)--;
        (*this->e3)--;
    }

    void Vector::operator -()
    {
        *this->e1 = -*(this->e1);
        *this->e2 = -*(this->e2);
        *this->e3 = -*(this->e3);
    }

    bool  operator==(Vector &v, Vector &A)
    {
        if ((A.gete1() == v.gete1()) && (A.gete2() == v.gete2()) && (A.gete3() == v.gete3()))
        {
            return true;
        }
        else 
        {
            return false;
        }

    }   

    bool operator >(const Vector &A, const Vector &B)
    {
        if (*A.e1 > *(B.e1) && *A.e2 > *(B.e2) && *A.e3 > *(B.e3))
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }

    Vector :: ~Vector()
    {
        delete e1,e2,e3;
    }