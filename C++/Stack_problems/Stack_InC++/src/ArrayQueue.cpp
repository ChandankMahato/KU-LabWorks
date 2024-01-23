#include "ArrayQueue.h"

using namespace std;

void ArrayQueue::insert(const int &element){
    if (is_full())
    {
        throw "SORRY, STACK IS FULL!\n STACK CAN BE FILLED IN THE SET OF FIVE!";
    }
    
    else
    {
        if (f == -1) 
        {
            f = 0;
        }
        r++;
        array[r] = element;
        cout << "Inserted: " << element << endl;
    }
}

void ArrayQueue::remove(){
    if (is_empty())
    {
        f=r=-1;
        throw "SORRY, ELEMENT CAN NOT BE REMOVED! \n STACK IS EMPTY!";
    }

    else
    {
        cout << "Removed: " << array[f] << endl;
        array[f] = 0;
        f++;
    }
    if(f==5)
    {
        f=r=-1;
    }
    

}
int ArrayQueue::rear() const{
    if (is_empty())
    {
       throw "SORRY, REAR ELEMENT CAN NOT BE DISTINGUISED! \n STACK IS EMPTY!";
    }
    else
    {
        return array[r];
    }
}
int ArrayQueue::front() const{
    if (is_empty())
    {
        throw "SORRY, FRONT ELEMENT CAN NOT BE DISTINGUISHED! \nSTACK IS EMPTY!";
    }

    else
    {
        return array[f];
    }
}

bool ArrayQueue::is_full() const{
    if (f == 0 && r == SIZE - 1)
    {
        return true;
    }
    else if(f==1||f==2||f==3||f==4)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
bool ArrayQueue::is_empty() const{
    if (f == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


