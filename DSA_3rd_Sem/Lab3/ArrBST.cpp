#include "ArrBST.h"
#include <iostream>

ArrBST::ArrBST()
{
    for (int i = 0; i < max_no_nodes; i++)
    {
        nodes[i] = NULL;
    }
}
ArrBST::~ArrBST() {}
bool ArrBST::isEmpty()
{
    return nodes[1] == NULL;
}

void ArrBST::add(int key, int value)
{
    ArrNode *newNode(new ArrNode(key, value));
    for (int i = 1; i < max_no_nodes;)
    {
        ArrNode *node = this->nodes[i];

        if (node == NULL)
        {
            this->nodes[i] = newNode;
            break;
        }
        else if (node->key < key)
        {
            i = 2 * i + 1;
        }
        else
        {
            i = 2 * i;
        }
    }
}
void ArrBST::max(int &output)
{
    if (isEmpty())
    {
        std::cout << "The tree is empty!" << std::endl;
    }
    else
    {
        int i = 1;
        while (i < max_no_nodes)
        {
            if (nodes[2 * i + 1] == NULL)
            {
                break;
            }
            else
            {
                i = 2 * i + 1;
            }
        }
        if (i < max_no_nodes)
        {
            output = nodes[i]->key;
        }
    }
}

void ArrBST::min(int &output)
{

    if (isEmpty())
    {
        std::cout << "The tree is empty!" << std::endl;
    }
    else
    {
        int i = 1;
        while (i < max_no_nodes)
        {
            if (nodes[2 * i] == NULL)
            {
                break;
            }
            else
            {
                i = 2 * i;
            }
        }
        if (i < max_no_nodes)
        {
            output = nodes[i]->key;
        }
    }
}

void ArrBST::inOrder()
{
    std::cout << "Inorder traversal:";
    this->inOrder(1);
    std::cout << std::endl;
}

void ArrBST::inOrder(int index, char sep)
{
    if (index < max_no_nodes && nodes[index] != NULL)
    {
        this->inOrder(2 * index);
        std::cout << nodes[index]->key << sep;
        this->inOrder(2 * index + 1);
    }
}

void ArrBST::exists(int targetKey)
{

    int i = 1;
    bool found = false;
    while (i < max_no_nodes)
    {
        ArrNode *node = this->nodes[i];
        if (node == NULL)
        {
            std::cout << "didnt find key:" << targetKey << std::endl;
            break;
        }
        else if (node->key == targetKey)
        {
            std::cout << "found key:" << targetKey << std::endl;
            break;
        }
        else if (node->key < targetKey)
        {
            i = 2 * i + 1;
        }
        else
        {
            i = 2 * i;
        }
    }
}

void ArrBST::remove(int dltkey)
{
    if (!isEmpty())
    {
        int i = 1;
        while (i < max_no_nodes)
        {
            ArrNode *node = this->nodes[i];
            if (node->key == dltkey)
            {
                break;
            }
            else if (dltkey < node->key)
            {
                i = 2 * i;
            }
            else if (dltkey > node->key)
            {
                i = 2 * i + 1;
            }
        }
        if (dltkey == nodes[i]->key)
        {
            if (nodes[2 * i] == nullptr && nodes[2 * i + 1] == nullptr)
            {
                nodes[i] = nullptr;
            }
            else if (nodes[2 * i] == nullptr && nodes[2 * i + 1] != nullptr)
            {
                nodes[i] = nodes[2 * i + 1];
                nodes[2 * i + 1] = nullptr;
            }
            else if (nodes[2 * i] != nullptr && nodes[2 * i + 1] == nullptr)
            {
                nodes[i] = nodes[2 * i];
                nodes[2 * i] = nullptr;
            }
            else if (nodes[2 * i] != nullptr && nodes[2 * i + 1] != nullptr)
            {
                int a;
                a = 2 * i;
                while (nodes[2 * a + 1] != nullptr)
                {
                    a = 2 * a + 1;
                }
                nodes[i] = nodes[a];
                nodes[a] == NULL;
            }
        }
        else
        {
            std::cout << "couldn't find the requested delete key :" << dltkey << " !!\n";
        }
    }
    else
    {
        std::cout << "tree is empty !!\n";
    }
}