#ifndef STACK_GENERIC_H
#define STACK_GENERIC_H

#include <iostream>
#include <string>

#define SIZE 10

template <class T> class Stack{
    private:
        int top;
        T stk[SIZE];
    public:
        Stack();

        void push(T k);
        T pop();
        T topElement();
        bool isFull();
        bool isEmpty();
};

#endif
