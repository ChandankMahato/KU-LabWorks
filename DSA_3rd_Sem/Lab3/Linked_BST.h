#include "abstractBST.h"

struct Node{
    int data;
    int key;
    Node* left;
    Node* right;
};

class LinkedBST : public AbstractBST{
    public:
    Node* root;
    LinkedBST();
    ~LinkedBST();
    
    bool isEmpty();
    void add(int key, int value);
    void max(int &output);
    void min(int &output);
    bool searchBST(int targetkey);
    bool removeBST(int delete_key);
    void inorder();
    void operationList();
 
   private:
    void add(Node *root, Node* newNode);
    void inorder(Node* node);
};
