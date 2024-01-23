
//A system to minimize waiting customers and idle tellers in a bank


#include "queue_generic.h"
#include "queue_generic_i.h"

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    Queue<string> s;

    cout << "\n************************************\n";
    cout << "\nGenerating Token at bank specifiing customer Name in FIFO order!";
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
    cout << "\nStoring Name of Customer!\n";
    s.enQueue("'Ram'");
    s.enQueue("'Shyam'");
    s.enQueue("'Hari'");
    s.enQueue("'Krishna'");
    s.enQueue("'Shiva'");
    cout << "\nCustomer who will get the service in first: ";
    s.display_Front();
    cout << endl;
    cout << "\nCustomer who will get the service in last: ";
    s.display_Rear();
    cout <<endl;
    cout << "\nCustomer List in Order, as they arrive: ";
    s.display_Queue();
    cout <<endl;
    cout << "\nRemoving One who has been served: ";
    s.deQueue();
    cout << endl;
    cout << "\nUpdated List of Customer: ";
    s.display_Queue();
    cout << endl;
    cout << endl;
    s.enQueue("'Mohan'");
    cout << "\nUpdated List of Customer: ";
    s.display_Queue();

    cout <<endl;
    cout << "\n************************************\n";
    return 0;
}