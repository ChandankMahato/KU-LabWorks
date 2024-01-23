#include <iostream>
#include "Linkedlist.h"

class Queue : public Node{
    private:
        Linkedlist list;
    public:
    bool isEmpty();
    void enQueue(int d);
    void Dequeue();
    void Display();
       
};
