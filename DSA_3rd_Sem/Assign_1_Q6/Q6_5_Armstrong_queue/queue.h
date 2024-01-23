#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

#define SIZE 10
using namespace std;

class Queue {
    private:
    int items[SIZE];
    int front, rear;
        
    public:
        Queue();
        void enQueue(int value);
        int deQueue();
};

#endif