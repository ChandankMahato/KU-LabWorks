#include <iostream>
#include "../include/stack.h"

using namespace std;

    bool Stack::isEmpty(){
        list.isEmpty();
    }

    void Stack::push(int d){
        list.addToHead(d);
    }

    void Stack::pop(){
        list.removeFromHead();
    }

    int Stack::peek(){
       list.getHeadValue();
    }