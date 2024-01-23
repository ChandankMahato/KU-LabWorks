#include <iostream>
#include "../include/Linkedlist.h"

using namespace std;

bool Linkedlist::isEmpty(){
    return HEAD == NULL && TAIL == NULL;
}

void Linkedlist::addToHead(int value){
    Node *temp;
    temp = new Node();

    temp->data = value;
    temp->next = HEAD;
    HEAD = temp;
}

void Linkedlist::removeFromHead(){
    Node *temp;
    temp = HEAD;
    if(isEmpty())
        {
            cout << "List is Empty!";
        }else{
           if(temp->next != NULL){
                cout << "Element deleted from List is: "<<HEAD->data <<endl;
                free(HEAD);
                HEAD = temp->next;
            }else{
                cout << "Element deleted from List is: "<<HEAD->data<<endl;
                HEAD = NULL;
                TAIL = NULL;
            }
        }
}

int Linkedlist::getHeadValue(){
    if(isEmpty() == true){
        cout << "List is Empty!";
        HEAD = NULL;
    }else{
         return HEAD->data;
    }
}

void Linkedlist::addToTail(int value){
    Node *temp;
        temp = new Node();
        if(TAIL == NULL){
            TAIL = temp;
            TAIL->next = NULL;
            TAIL->data = value;
            HEAD = TAIL;
        }else{
            TAIL->next = temp;
            temp->data = value;
            temp->next = NULL;
            TAIL = temp;
        }
}

void Linkedlist::traverse(){
    Node *temp;
        temp = HEAD;
        if(isEmpty()){
            cout << "List is Empty"<<endl;
            return;
        }
        cout<< "List elements are: ";
        while(temp !=NULL){
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout <<endl;
}
