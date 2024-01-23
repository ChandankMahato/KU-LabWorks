#ifndef QUEUE_GENERIC_H
#define QUEUE_GENERIC_H

#include <iostream>

#define SIZE 10
using namespace std;

template <class T>
class Queue {
    private:
    T items[SIZE];
    int front, rear;
        
    public:
        Queue();
        bool isFull();
        bool isEmpty();
        void enQueue(T value);
        T deQueue();
        void display_Queue();
        void display_Rear();
        void display_Front();
};

#endif