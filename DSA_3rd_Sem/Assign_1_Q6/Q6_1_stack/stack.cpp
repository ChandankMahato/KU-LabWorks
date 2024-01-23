
//A program to convert a decimal number to binary

#include "stack.h"

using namespace std;

int main(){

    int choice, integerElement, dec_num, bin_dig;
    Stack integer_stack;

    cout << "\n*******************************"<<endl;
    cout << "Decimal to Binary Conversion!"<<endl;
    //decimal to binary
    cout << "\nEnter Decimal Number:";
    cin >> dec_num;

    while(dec_num>0)
    {
        bin_dig=dec_num%2;
        dec_num=dec_num/2;
        integer_stack.push(bin_dig);
    }
    cout << "Equivalent Binary No: ";
    integer_stack.display();

    cout <<endl;
    cout << "\n*******************************";
}