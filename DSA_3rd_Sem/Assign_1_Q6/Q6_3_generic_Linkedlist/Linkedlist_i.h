
// A system to store information about students of a school
#include <iostream>
#include<vector>
#include "Linkedlist.h"

template <class T> bool Node<T>::isEmpty(Node *node){
    if(node == NULL){
        cout << "List is Empty!" << endl;
        return true;
    }
    else{
        return false;
    }
}


template <class T> void Node<T>::addToHead(Node **front_node, T new_data)
{
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = (*front_node);
    (*front_node) = newNode;
    pos++;
}

template <class T> void Node<T>::addToTail(Node **end_node, T new_data){
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

template <class T> void Node<T>::insertAtPosition(Node **pos_node, int position, T new_data){
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

template <class T> void Node<T>::removeFromHead(Node **front_node){
    if(isEmpty(*front_node)){
        return;
    }
    else{
        Node *temp;
        temp= (*front_node);
        if(temp->next != NULL){
            (*front_node) = (*front_node)->next;
            cout << temp->data <<endl;
            free(temp);
        }
        else{
            cout << temp->data << endl;
            cout << "List is Empty Now!"<<endl;
            *front_node = NULL;
        }
        pos--;
    }
}

template <class T> void Node<T>::removeFromTail(Node **end_node){
    Node *temp;
    temp = (*end_node);

    if(isEmpty(*end_node)){
        return;
    }else{
        if(temp->next !=NULL){
            while(temp->next->next != NULL){
            temp = temp->next;
            }
            cout <<  temp->next->data <<endl;
            temp->next = NULL;

        }else{
            cout << temp->data << endl;
            cout << "List is Empty Now!"<<endl;
            *end_node = NULL;
        }
        pos--;
    }
}

template <class T> void Node<T>::removeFromPosition(Node **node, int position){
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
        }
        else if(temp->next!= NULL && position==1){
            (*node) = (*node)->next;
            free(temp);
        }
        else{
            *node = NULL;
            cout << "List is Empty Now!"<<endl;
        }
        pos--;
    } 
}

template <class T> void Node<T>::traverse(Node *node){
    int count = 0;
    if(isEmpty(node)){
        return;
    }else{
        while(node!=NULL){
        display.push_back(node->data);
        node = node->next;
        }

        for(auto i = display.begin(); i!=display.end(); i++){
            count++;
            cout << count << ")" << *i << " ";
        }
        display.clear();
    }
}

template <class T> bool Node<T>::search(Node **search_node, T key){
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
