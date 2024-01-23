#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include<vector>

using namespace std;

class Node{
    private:
        int data;
        int pos=0;
        Node *next;
        vector<int> display;
    public:
        void addToHead(Node **front_node, int new_data);
        void addToTail(Node **end_node, int new_data);
        void insertAtPosition(Node **pos_node, int position, int new_data);

        void removeFromHead(Node **front_node);
        void removeFromTail(Node **end_node);
        void removeFromPosition(Node **node, int position);

        void traverse(Node *node);
        bool isEmpty(Node *node);
        bool search(Node **search_node, int key);
};

#endif

