#include <iostream>

int sum_func(int &a, int &b){
    return a+b;
}

int product_func(int &a, int &b){
    return a*b;
}

int main(){
    int a, b, sum, product;
    std::cout << "Enter two number" << std::endl;
    std::cin >> a >> b;
    sum = sum_func(a, b);
    product = product_func(a, b);
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Product = " << product << std::endl;
    return 0;
}
