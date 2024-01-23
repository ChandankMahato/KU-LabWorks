#include <iostream>
#include "Time.h"
int main() {
 Time t1(1, 59, 59);
std::cout << "Initial time" <<std::endl;
    t1.display();
Time t2(2,42,45) ;
std::cout <<"Final time" <<std::endl;
t2.display();
Time t3;
t3 = t1 +t2;
std::cout << "Added time is:" <<std::endl;
t3.display();
std::cout << "Adding 1 sec to the added final time is:" <<std::endl;
 Time t = ++t3; 
 t3.display();
 }