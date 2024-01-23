 #include <iostream>
 #include "../include/queue.h"

using namespace std;

 bool Queue::isEmpty(){
        list.isEmpty();
    }

    void Queue::enQueue(int D){
        list.addToTail(D);
    }

    void Queue::Dequeue(){
        list.removeFromHead();
    }

    void Queue::Display(){
        list.traverse();
    }
