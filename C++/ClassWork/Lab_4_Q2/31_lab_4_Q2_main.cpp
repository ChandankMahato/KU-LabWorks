#include <iostream>
#include "31_lab_4_Q2_header.h"
Vector operator -( Vector  &A, Vector &B );
bool  operator==( Vector &, Vector &);

int main(void)
{
    Vector A(0,0,0); 
    std::cout<<"Input Section\n###############################################"<<std::endl;
    std::cout << "Enter either row or column vector!"<<std::endl;
    A.setrows();
    A.setcoloumns();
    std::cout << "Enter Vector A"<<std::endl;
    std::cin >> A;

    Vector B(0,0,0);
    std::cout << "Enter either row or column vector!" <<std::endl;
    B.setrows();
    B.setcoloumns();
    std::cout << "Enter Vector B"<<std::endl;
    std::cin >> B;

    std::cout <<"Vector A=";
    std::cout << A;
    std::cout <<"Vector B=";
    std::cout << B;
    std::cout<<"###############################################\nOutput Section\n###############################################"<<std::endl;
    if(A.getcoloumns() == B.getcoloumns())
    {
        Vector v3 =B+A;
        std::cout <<"\nA+B=" << v3 << std::endl;
    }
    if(A.getcoloumns() == B.getcoloumns())
    {
        Vector v3 =A-B;
        std::cout <<"A-B=" << v3 << std::endl;
    }
    if(A.getcoloumns() ==B.getrows())
    {
        std::cout << "\nA*B=" << A*B << std::endl;
    }
    if(A.getrows() == B.getrows())
    {
        A+=B;
        std::cout << "A+=B=" << A << std::endl;
    }
    if( A.getcoloumns() == B.getcoloumns())
    {
            if (A > B)   
        {
            std::cout << A <<" is greater than \n" << B << std::endl;
        }
        else if( A == B)
        {
            std::cout << A <<" is equal to \n" << B << std::endl;
        }
        else
        {
            std::cout << A <<" is less than \n " << B << std::endl;
        }
    }
    else
    {
        std::cout << A <<"and" << B << "are of different types\n" <<std::endl;

    }

    A++;
    std::cout <<"A++=" << A<< std::endl;

    ++B;
    std::cout <<"++B=" << B << std::endl;

    A--;
    std::cout<<"A--=" << A<<std::endl;

    --B;
    std::cout <<"--B=" << B<<std::endl;

    -A;
    std::cout <<"-A="  <<A <<std::endl;

    -B;
    std::cout <<"-B=\n" <<B <<std::endl;
    std::cout<<"###############################################\n";
} 