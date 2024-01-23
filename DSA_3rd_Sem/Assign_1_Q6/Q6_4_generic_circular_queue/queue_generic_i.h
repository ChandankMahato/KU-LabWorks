#include "queue_generic.h"
//A system to minimize waiting customers and idle tellers in a bank

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
    
template <class T> void Queue<T>::enQueue(T value){
    if(isFull()){
        cout << endl << "Queue is Full!!" << endl;
    } else {
        if(front == -1) {
            front = 0;
        }
        rear = (rear+1)%SIZE;
        items[rear] = value;
        cout <<"Customer Name= "<< value << endl;
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
        cout << endl << "Customer Name = " << value;
        return(value);
    }
}

template <class T> void Queue<T>::display_Queue()
{ 
    int i;
    if(isEmpty()) {
        cout <<endl;
        cout << endl << "Queue is Empty!!" << endl;
    }else {
        cout <<endl;
        cout << "Customer Name List in FIFO order: \n";
        for(i=front; i!=rear; i=(i+1)%SIZE)
        cout << items[i] << " ";
        cout << items[i];
    }
}

template <class T> void Queue<T>::display_Front(){
    if(isEmpty()) {
        cout << endl << "Queue is Empty!!" << endl;
    }
    else{
        cout << endl << "Customer Name = "<<items[front];
    }
}

template <class T> void Queue<T>::display_Rear(){
    if(isEmpty()) {
        cout << endl << "Queue is Empty!!" << endl;
    }
    else{
        cout << endl << "Customer Name = "<<items[rear];
    }
}
