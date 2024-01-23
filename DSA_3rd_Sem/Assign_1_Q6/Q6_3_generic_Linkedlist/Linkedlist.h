
// A system to store information about students of a school

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include<vector>

using namespace std;

template <class T>
class Node{
    private:
        T data;
        int pos=0;
        Node *next;
        vector<T> display;
    public:
        void addToHead(Node **front_node, T new_data);
        void addToTail(Node **end_node, T new_data);
        void insertAtPosition(Node **pos_node, int position, T new_data);

        void removeFromHead(Node **front_node);
        void removeFromTail(Node **end_node);
        void removeFromPosition(Node **node, int position);

        void traverse(Node *node);
        bool isEmpty(Node *node);
        bool search(Node **search_node, T key);
};

#endif

