#include <iostream>

void swap_func(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main(){
    int a = 5, b = 6;
    std::cout << "Before swap\n" << "a = " << a << "\tb = " << b;
    swap_func(a, b);
    std::cout << "\nAfter swap\n" << "a = " << a << "\tb = " << b << std::endl;;
    return 0;
}
