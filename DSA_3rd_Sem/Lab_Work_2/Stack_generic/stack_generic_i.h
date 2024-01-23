#include "stack_generic.h"

using namespace std;

template <class T> Stack<T>::Stack() { top = -1;}

template <class T> void Stack<T>::push(T k){
    if(isFull()){
        cout << "Stack is full\n";
        return;
    }
    cout << "Insrted Element "<< k <<endl;
    top = top + 1;
    stk[top] = k;

}

template <class T> bool Stack<T>::isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

template <class T> bool Stack<T>::isFull(){
    if(top == (SIZE -1 ))
    {
        return 1;
    }
    else{
        return 0;
    }
}

template <class T> T Stack<T>::pop(){
    T popped_element = stk[top];
    top--;
    return popped_element;
}

template <class T> T Stack<T>::topElement(){
    T top_element = stk[top];
    return top_element;
}

