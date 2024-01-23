#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node
{
    public:
        int data;
        Node *next;
};

class Linkedlist : public Node{
    private:
        Node *HEAD = NULL;
        Node *TAIL = NULL;
    public:
        bool isEmpty();
        void addToHead(int value);
        void addToTail(int value);
        void removeFromHead();
        int getHeadValue();
        void traverse();
};

#endif