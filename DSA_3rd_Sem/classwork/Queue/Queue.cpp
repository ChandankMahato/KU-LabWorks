//Queue implementation in C++
#include <iostream>
#define SIZE 5

using namespace std;

class Queue{
    private:
        int items[SIZE], front, rear;
    public:
        Queue();
        bool isFull();
        bool isEmpty();
        void enQueue(int element);
        int deQueue();
        void display();
};

Queue::Queue(){
    front = -1;
    rear = -1;
}

bool Queue::isFull(){
    if(front == 0 && rear == SIZE - 1){
        return true;
    }
    return false;
}

bool Queue::isEmpty(){
    if(front == -1){
        return true;
    }
    return false;
}

void Queue::enQueue(int element){
    if(isFull()){
        cout << "Queue is full";
    }else{
        if(front == -1){
            front = 0;
        }
        rear++;
        items[rear] = element;
        cout << endl << "Inserted " << element << endl;
    }
}

int Queue::deQueue(){
    int element;
    if(isEmpty()){
        cout << "Queue is Empty" << endl;
        return(-1);
    }else{
        element = items[front];
        if(front >= rear){
            front = -1;
            rear = -1;
        }
        else{
            front ++;
        }
        cout << endl << "Deleted="<< element << endl;
        cout << items[front-1] << endl;;
        items[front-1] = 0;
        cout << items[front-1];
        return(element);
    }
}

void Queue::display(){
    int i;
    if(isEmpty()){
        cout << endl << "Empty Queue" << endl;
    }else{
        cout << endl << "Front Index= " << front;
        cout << endl << "Items = ";
        for(i = front; i <= rear; i++){
            cout << items[i] << " ";
        }
        cout << endl << "Rear Index = " << rear << endl;
    }
}

int main(){
    Queue q;

    //deQueue is not possble on empty queue
    q.deQueue();

    //enQueue 5 elements
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    //6th element can't be added to because the queue is full
    q.enQueue(6);

    q.display();

    //deQueue removes element entered first i.e. 1
    q.deQueue();
    q.deQueue();

    //Now we have just 4 elements
    q.display();

    return 0;
}