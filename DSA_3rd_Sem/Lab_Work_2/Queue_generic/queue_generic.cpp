#include "queue_generic.h"
#include "queue_generic_i.h"

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    Queue<int>  i;
    Queue<float> f;
    Queue<string> s;

    cout << "\n************************************\n";
    cout << "\nInteger Input in Queue!\n";
    if(i.isEmpty()){
        cout<< "Queue is Empty!"<<endl;
    }else{
        cout<< "Queue is Not Empty!"<<endl;
    }
    if(i.isFull()){
        cout << "Queue is Full!"<<endl;
    }else{
        cout << "Queue is Not Full!"<<endl;
    }
    i.enQueue(1);
    i.enQueue(2);
    i.enQueue(3);
    i.enQueue(4);
    i.display_Front();
    i.display_Rear();
    i.display_Queue();
    i.deQueue();
    i.display_Queue();
    cout << "\n************************************\n";
    cout << "\nFloat Input in Queue!";
    if(f.isEmpty()){
        cout << endl << "Queue is Empty!"<<endl;
    }else{
        cout << "Queue is Not Empty!"<<endl;
    }
    if(f.isFull()){
        cout<< "Queue is Full!"<<endl;
    }else{
        cout << "Queue is Not Full!"<<endl;
    }
    f.enQueue(1.34);
    f.enQueue(2.32);
    f.enQueue(3.2);
    f.enQueue(4.43);
    f.display_Front();
    f.display_Rear();
    f.display_Queue();
    f.deQueue();
    i.display_Queue();
    cout << "\n************************************\n";
    cout << "\nString Input in Queue!";
    if(s.isEmpty()){
        cout << endl << "Queue is Empty!"<<endl;
    }else{
        cout<< "Queue is Not Empty!"<<endl;
    }
    if(s.isFull()){
        cout << "Queue is Full!"<<endl;
    }else{
        cout<< "Queue is Not Full!"<<endl;
    }
    s.enQueue("'Lab'");
    s.enQueue("'Work'");
    s.enQueue("'Queue'");
    s.enQueue("'Stack'");
    s.display_Front();
    s.display_Rear();
    s.display_Queue();
    s.deQueue();
    s.display_Queue();
    cout << "\n************************************\n";
    return 0;
}