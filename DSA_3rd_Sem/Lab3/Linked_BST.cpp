#include "abstractBST.h"
#include "Linked_BST.h"
#include<iostream>

using namespace std;

LinkedBST::LinkedBST() : root(NULL) {}

LinkedBST::~LinkedBST(){
    delete root;
}

bool LinkedBST::isEmpty()
{
    return this->root == NULL;
}


void LinkedBST::add(int key, int value){
    Node* newNode= new Node();
    newNode->key=key;
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;

    if(this->isEmpty()){
        this->root=newNode;
    }
    else{
        this->add(this->root,newNode);
    }
}

void LinkedBST::add(Node* root,Node* newNode){
    if(root->key>newNode->key){
        if(root->left!=NULL){
            add(root->left,newNode);
        }
        else {
            root->left = newNode;
        }
    }
    else if(root->key<newNode->key){
          if(root->right!=NULL){
            add(root->right,newNode);
        }
        else {
            root->right = newNode;
        }
    }
    else
    {
        cout << "Duplicate Value Encountered" << endl;
    }
}

bool LinkedBST::removeBST(int delete_key)
{
    Node *back;
    Node *temp;
    Node *delParent;
    Node *delNode; 

    temp = root;
    back = NULL;

    while((temp != NULL) && (delete_key != temp->key))
    {
        back = temp;
        if(delete_key < temp->key)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if(temp == NULL)
    {
        return false;
    }
    else
    {
        if(temp == root) 
        {
            delNode = root;
            delParent = NULL; 
        }
        else
        {
            delNode = temp;
            delParent = back;
        }
    }

    if(delNode->right == NULL)
    {
        if(delParent == NULL)
        {
            root = delNode->left;
            delete delNode;
            return true;
        }
        else
        {
            if(delParent->left == delNode)
                delParent->left = delNode->left;
            else
                delParent->right = delNode->left;
                delete delNode;
            return true;
        }
    }
    else
    {
        if(delNode->left == NULL)
        {
            if(delParent == NULL)
            {
                root = delNode->right;
                delete delNode;
                return true;
            }
            else
            {
                if(delParent->left == delNode)
                    delParent->left = delNode->right;
                else
                    delParent->right = delNode->right;
                delete delNode;
                return true;
            }
        }
        else
        {
            temp = delNode->left;
            back = delNode;
            while(temp->right != NULL)
            {
                back = temp;
                temp = temp->right;
            }
            delNode->key = temp->key;
            if(back == delNode)
                back->left = temp->left;
            else
                back->right= temp->left;
            delete temp;
            return true;
        }
    }
}

void LinkedBST::max(int &output) {
    
    if (!this->isEmpty()) {
        Node* temp = this->root;
        
        while (temp->right!= NULL) {
            temp = temp->right;
        }
        output = temp->data;
    }else {
        cout << "The Binary Search Tree is Empty" << endl;
    }
}

void LinkedBST::min(int &output) {
    
    if (!this->isEmpty()) {
        Node* temp = this->root;
        
        while (temp->left!= NULL) {
            temp = temp->left;
        }
        output = temp->data;
    } else {
        cout << "The Binary Search Tree is Empty!" << endl;
    }
}


bool LinkedBST::searchBST(int targetkey){
    bool found = false;
    
    if (this->isEmpty()) {
        cout << "The Binary Search Tree is Empty!" << endl;
    } else  {
        Node* temp = this->root;
        
        while (temp != NULL) {
            if (temp->key == targetkey) {
                found = true;
                break;
            } else if (temp->key < targetkey) {
                temp = temp->right;
            } else {
                temp = temp->left;
            }
        }
        
    }
    return found;
}


void LinkedBST::inorder() {
    if(!isEmpty()){
    cout << "Inorder Traversal:  ";
    this->inorder(this->root);
    cout << endl;
    }
}

void LinkedBST::inorder(Node *node) {
    if (node!=NULL) {
        inorder(node->left);
        std::cout << node->data << " ";
        inorder(node->right);
    }
}

void LinkedBST::operationList(){

    cout << "0. Show Operation List\n";
    cout << "1. Check BST status!\n";
    cout << "2. Add New Value To BST!\n";
    cout << "3. Maximum vlaue in BST!\n";
    cout << "4. Minimum Value in BST!\n";
    cout << "5. Search particular value in BST!\n";
    cout << "6. Inorder Traversal!\n";
    cout << "7. Remove Element!\n";
    cout << "8. Exit\n";
}