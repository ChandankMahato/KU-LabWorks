#include "queue_generic.h"

using namespace std;

template <class T> Queue<T>::Queue(){
    front = -1;
    rear = -1;
}
    
template <class T> bool Queue<T>::isFull(){
    if(front == 0 && rear == SIZE - 1){
        return true;
    }
    else if(front == rear + 1){
        return true;
    }
    return false;
}
    
template <class T> bool Queue<T>::isEmpty(){
    if(front == -1)
        return true;
    else
        return false;
}
    
template <class T> T Queue<T>::enQueue(T value){
    if(isFull()){
        cout << endl << "Queue is Full!!" << endl;
    } else {
        if(front == -1) {
            front = 0;
        }
        rear = (rear+1)%SIZE;
        items[rear] = value;
        return(value);
    }
}

template <class T> T Queue<T>::deQueue(){
    T value;
    if(isEmpty()){
        cout << endl << "Queue is Empty!!" << endl;
    }else{ 
        value = items[front]; 

        if(front == rear){ 
            front = -1;
            rear = -1;
        }else {
            front = (front+1)%SIZE;
        }
        return(value);
    }
}

template <class T> void Queue<T>::display_Queue()
{ 
    int i,j;
    if(isEmpty()) {
        cout <<endl;
        cout << endl << "Queue is Empty!!" << endl;
    }else {
        for(i=front, j=1; i!=rear; i=(i+1)%SIZE, j++)
            {
                cout << j << ") "<< items[i]<< "  ";
            }
        cout << j << ") " << items[i];
    }
}

template <class T> void Queue<T>::display_Front(){
    if(isEmpty()) {
        cout << endl << "Queue is Empty!!" << endl;
    }
    else{
        cout <<items[front];
    }
}

template <class T> void Queue<T>::display_Rear(){
    if(isEmpty()) {
        cout << endl << "Queue is Empty!!" << endl;
    }
    else{
        cout <<items[rear];
    }
}
