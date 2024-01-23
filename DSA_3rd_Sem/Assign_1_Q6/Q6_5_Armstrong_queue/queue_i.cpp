#include "queue.h"

using namespace std;

Queue::Queue(){
    front = -1;
    rear = -1;
}

void Queue::enQueue(int value){

        if(front == -1) front = 0;
        rear++;
        items[rear] = value;
        cout <<"Digit= "<< value << endl;
}

int Queue::deQueue(){
    int value;
    value = items[front]; 

    if(front >= rear){ 
        front = -1;
        rear = -1;
    }else {
        front++;
    }
    return(value);
}

