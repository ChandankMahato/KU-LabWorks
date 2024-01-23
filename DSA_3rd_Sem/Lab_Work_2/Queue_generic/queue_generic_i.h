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
    return false;
}
    
template <class T> bool Queue<T>::isEmpty(){
    if(front == -1){
        return true;
    }
    return false;
}
    
template <class T> void Queue<T>::enQueue(T value){
    if(isFull()){
        cout << endl << "Queue is Full!!" << endl;
    } else {
        if(front == -1) front = 0;
        rear++;
        items[rear] = value;
        cout <<"Value inserted= "<< value << endl;
    }
}

template <class T> T Queue<T>::deQueue(){
    T value;
    if(isEmpty()){
        cout << endl << "Queue is Empty!!" << endl;
    }else{ 
        value = items[front]; 

        if(front >= rear){ 
            front = -1;
            rear = -1;
        }else {
            front++;
        }
        cout << endl << "Deleted => " << value << " from Queue";
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
        cout << endl << "Queue Details=>";
        cout << endl << "Front_Index= " << front;
        cout << endl << "Queue elements : ";
        for(i=front; i<=rear; i++)
        cout << items[i] << " ";
        cout << endl << "Rear_Index = " << rear << endl;
    }
}

template <class T> void Queue<T>::display_Front(){
    if(isEmpty()) {
        cout << endl << "Queue is Empty!!" << endl;
    }
    else{
        cout << endl << "Front_Index = " << front;
        cout << endl << "Front_Element = "<<items[front];
    }
}

template <class T> void Queue<T>::display_Rear(){
    if(isEmpty()) {
        cout << endl << "Queue is Empty!!" << endl;
    }
    else{
        cout << endl << "REAR_Index = " << rear;
        cout << endl << "Rear_Element = "<<items[rear];
    }
}
