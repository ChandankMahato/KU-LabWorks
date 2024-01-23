#include <iostream>
#include "Linkedlist.h"

class Stack : public Node{
    private:
        Linkedlist list;
    public:
        bool isEmpty();
        void push(int d);
        void pop();
        int peek();
};