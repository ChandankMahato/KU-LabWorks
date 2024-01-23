
//A program to convert a decimal number to binary

#include "stack.h"

using namespace std;

Stack::Stack() { top = -1;}

void Stack::push(int k){
    if(isFull()){
        cout << "Stack is full\n";
        return;
    }
    top = top + 1;
    stk[top] = k;

}

bool Stack::isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

bool Stack::isFull(){
    if(top == (SIZE -1 ))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int Stack::pop(){
    int popped_element = stk[top];
    top--;
    return popped_element;
}

int Stack::display(){
    while(top !=-1){
        int popped_element = stk[top];
        top--;
        cout << popped_element<<" ";
    }  
}

int Stack::topElement(){
    int top_element = stk[top];
    return top_element;
}

