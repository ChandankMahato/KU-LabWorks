#include "abstractBST.h"
#include <iostream>
#define max_no_nodes 128
class ArrNode
{
public:
    int key;
    int value;
    ArrNode(int key, int value) : key(key), value(value) {}
};
class ArrBST : public AbstractBST
{
private:
    ArrNode *nodes[max_no_nodes];
    void inOrder(int index, char sep = ' ');

public:
    ArrBST();
    ~ArrBST();
    bool isEmpty();
    void add(int key, int value);
    void max(int &output);
    void min(int &output);
    void exists(int targetkey);
    void inOrder();
    void remove(int key);
};
