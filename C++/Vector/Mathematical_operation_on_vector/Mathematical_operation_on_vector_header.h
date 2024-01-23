#pragma once

class Vector{  
    double  *e1 ;
    double  *e2 ;
    double *e3;
    int m,n;

public:
    void setrows();
    void setrows_a(int a)
    {
        this -> m =a;
    }
    void setcoloumns();
    void setcoloumns_a(int a)
    {
        this -> n =a;
    }
    int getrows()
    {
        return m;
    }
    int getcoloumns()
    {
        return n;
    }
    double gete1()
    {
        return *e1;
    } 
    double gete2()
    {
        return *e2;
    }
    double gete3()
    {
        return *e3;
    }
    Vector ();//default constructor
    Vector (double ,double ,double);//parametrized constructor
    Vector (const Vector &);//copy constructor

    Vector operator += (const Vector &); //overloading += operator using member funtion
    friend Vector operator +(const Vector &, const Vector &);//overloading + operator using friend funtion
    friend int  operator * ( const Vector & ,const Vector &);//overloading * operator using friend function
    friend bool operator > (const Vector &,const Vector &);//overloading > operator using friend function
    friend std::ostream& operator <<(std::ostream& outputStream, const Vector &);//overloading << using friend function
    friend std::istream& operator >>(std::istream& inputStream, const Vector &);//overloading >> using frined function

    void operator ++(); //overloading prefix (++) using normal function
    void operator ++ (int) ;//overloading postfix (++) using normal function.
    void operator --();//overloading  prefix (--) using normal function
    void operator --(int);//overloading postfix(--) using normal function
    void operator -();//overloading - operator using normal function

    ~Vector(); // destructor
};