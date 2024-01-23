#include <iostream>
#include<vector>
#include "Linkedlist.h"

bool Node::isEmpty(Node *node){
    if(node == NULL){
        cout << "List is Empty!" << endl;
        return true;
    }
    else{
        return false;
    }
}


void Node::addToHead(Node **front_node, int new_data)
{
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = (*front_node);
    (*front_node) = newNode;
    pos++;
}

void Node::addToTail(Node **end_node, int new_data){
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = NULL;

    Node* temp = (*end_node);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    pos++;
};

void Node::insertAtPosition(Node **pos_node, int position, int new_data){
    Node* newNode = new Node();
    newNode->data = new_data;

    Node* temp = (*pos_node);

    for(int i = 1; i < position-1; i++){
        if(temp->next != NULL){
            temp = temp->next;
        }
    }
    newNode->next = temp->next;
    temp->next= newNode;
    pos++;
}

void Node::removeFromHead(Node **front_node){
    if(isEmpty(*front_node)){
        return;
    }
    else{
        Node *temp;
        temp= (*front_node);
        if(temp->next != NULL){
            (*front_node) = (*front_node)->next;
            cout << "Front Element "<< "("<< temp->data << ")"<< " Deleted" <<endl;
            cout << endl;
            free(temp);
        }
        else{
            cout << "Front Element "<< "("<< temp->data << ")"<< " Deleted" << endl;
            cout << "List is Empty Now!"<<endl;
            cout << endl;
            *front_node = NULL;
        }
        pos--;
    }
}

void Node::removeFromTail(Node **end_node){
    Node *temp;
    temp = (*end_node);

    if(isEmpty(*end_node)){
        return;
    }else{
        if(temp->next !=NULL){
            while(temp->next->next != NULL){
            temp = temp->next;
            }
            cout << "End Element "<< "("<< temp->next->data << ")"<< " Deleted" <<endl;
            temp->next = NULL;

        }else{
            cout << "End Element "<< "("<< temp->data << ")"<< " Deleted" << endl;
            cout << "List is Empty Now!"<<endl;
            *end_node = NULL;
        }
        pos--;
    }
}

void Node::removeFromPosition(Node **node, int position){
    Node *temp;
    temp = (*node);

    if(isEmpty(*node)){
        return;
    }else{
        if(temp->next!=NULL && position > 1){
            for(int i=1; i<position-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            cout << "Element At postion "<< position<< " Deleted" << endl;
        }
        else if(temp->next!= NULL && position==1){
            (*node) = (*node)->next;
            free(temp);
            cout << "Element At postion "<< position<< " Deleted" << endl;
        }
        else{
            *node = NULL;
            cout << "Element At postion "<< position<<" Deleted" << endl;
            cout << "List is Empty Now!"<<endl;
        }
        pos--;
    } 
}

void Node::traverse(Node *node){

    if(isEmpty(node)){
        return;
    }else{
        while(node!=NULL){
        display.push_back(node->data);
        node = node->next;
        }

        cout <<endl<< "NULL<- ";
        for(auto ir = display.rbegin(); ir!=display.rend(); ir++){
            cout << *ir << " ";
        }
        cout << "<-Head"<<endl;
        display.clear();
    }
}

bool Node::search(Node **search_node, int key){
    Node* temp;
    temp = (*search_node);

        if(temp->next!=NULL){

            while(temp->next!=NULL){
                if(temp->data == key){
                    return true;
                }
                temp = temp->next;  
            }
            if(temp->data == key){
                return true;
            }
        }else{
            if(temp->data == key){
                return true;
            }
        }
    return false;
}
