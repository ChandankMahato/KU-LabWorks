#ifndef STACK_GENERIC_H
#define STACK_GENERIC_H

#include <iostream>
#include <string>


//A program to convert a decimal number to binary

#define SIZE 10

class Stack{
    private:
        int stk[SIZE], top;
    public:
        Stack();

        void push(int k);
        int pop();
        int display();
        int topElement();
        bool isFull();
        bool isEmpty();
};

#endif
