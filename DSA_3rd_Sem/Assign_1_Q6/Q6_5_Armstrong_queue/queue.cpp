#include "queue.h"

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    Queue a;

    int n = 0;
    int r = 0;
    int c = 0;
    int b = 0;

    cout << "\n************************************\n";

    std :: cout << "Insert an number: ";
    std :: cin >> n;
    int t = n;

    while(n!= 0){
        r = n % 10;
        n = n / 10;
        c = c + 1;
        a.enQueue(r);
    }

    for(int i = 1; i <= c; i++){
        b = pow(a.deQueue(), c) + b;
    }

    cout << "Sum of Cube of each Digit: " << b;

    if( b == t) {
        std::cout << "\nEnter Numbber " << t << " is Armstrong Number!";
    }
    else{
        std::cout << "\nEnter Number "<< t << " is Not an Armstrong Number!";
    }

    cout << "\n************************************";
}