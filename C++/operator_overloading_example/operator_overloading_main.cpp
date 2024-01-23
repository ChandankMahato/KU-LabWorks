#include "operator_overloading_example.h"
int main(void){
vector v1(10,11,12);
vector v2(20,30,40);
vector v3 =v2+v1; //v2.operator+(c2)

v3.print();
v3++;
v3.print();
++v3;
v3.print();
-v3;//v3.operator-();
v3.print();
}