/*
swap two number using reference variable
*/
#include <iostream>
using namespace std;

int main()
{
    int a, &b=a,c;

    cout<<"BEFORE SWAP"<<endl;
    cout<<"A=";
    cin>>a;
    cout<<"C=";
    cin>>c;

    cout<<"AFTER SWAP"<<endl;

    b=b+c;
    c=b-c;
    b=b-c;

    cout<<"A="<<a<<endl;
    cout<<"C="<<c;
}