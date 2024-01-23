#include "ArrayQueueTemplate.h"
#include <iostream>

using namespace std;

template <class T>
void ArrayQueue<T>::insert(const T &element){
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

template <class T>
void ArrayQueue<T>::enter(){
    
        for(i=0;i<5;i++)
        {
            std::cout<<"Enter The Elment "<<i+1<<"=";
            std::cin>>x[i];
        }
        try 
        {
            for(i=0;i<5;i++)
            {
                insert(x[i]);
            }
        }
        catch (const char* message)
        {
            std::cerr<< message << endl;
        }
}

template <class T>
void ArrayQueue<T>::remove(){
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
template <class T>
T ArrayQueue<T>::rear(){
    if (is_empty())
    {
       throw "SORRY, REAR ELEMENT CAN NOT BE DISTINGUISED! \n STACK IS EMPTY!";
    }
    else
    {
        return array[r];
    }
}
template <class T>
T ArrayQueue<T>::front(){
    if (is_empty())
    {
        throw "SORRY, FRONT ELEMENT CAN NOT BE DISTINGUISHED! \nSTACK IS EMPTY!";
    }

    else
    {
        return array[f];
    }
}
template <class T>
bool ArrayQueue<T>::is_full() const{
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
template <class T>
bool ArrayQueue<T>::is_empty() const{
    if (f == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


