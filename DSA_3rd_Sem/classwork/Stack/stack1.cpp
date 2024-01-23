#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10

class Stack{
    private:
        int items[MAX];
        int top;
        int size;
    public:
        Stack(){
            cout << "\nWelcome To Stack!"<<endl;
            size=0;
        }
        Stack(Stack *s){
            s->top=-1;
        }
        void createEmptyStack(Stack *s);
        int isfull(Stack *s);
        int isempty(Stack *s);
        void push(Stack *s, int newitem);
        void pop(Stack *s);
        void printStack(Stack *s);
};

//to create empty stack
void Stack::createEmptyStack(Stack *s){
   
    s->top=-1;
    size=0;
    if(s->top=-1){
        cout << "Empty Stack Created!\n";
    }    
}

int Stack::isfull(Stack *s){
    if(s->top == MAX - 1)
    {
        cout << "Stack is Full!\n";
        return true;
    }
    else
    {
        cout << "PUSH? Stack is not full yet!\n";
        return false;
    }
}

int Stack::isempty(Stack *s){
    if(s->top == -1)
    {
        cout << "Stack is Empty!\n";
        return true;
    } 
    else if(size == 0){
        cout << "Stack is Empty!\n";
        return true;
    }
    else
    {
        cout << "POP? Stack is not Empty yet!\n";
        return false;
    }
}

void Stack::push(Stack *s, int newitem){
    if(isfull(s)){
    }else{
        s->top++;
        s->items[s->top] = newitem;
        size++;
    }
}

void Stack::pop(Stack *s){
    if(isempty(s)){
    }else{
        cout << "Item Popped = "<< s->items[s->top]<<endl;
        s->top--;
        size--;
    }
}

void Stack::printStack(Stack *s){
    cout <<"Stack: ";
    for(int i=0; i<size; i++){
        cout << s->items[i] << " ";
    }
    cout << endl;
}

int main(){
    int choice,element;
    Stack *s = (Stack *)malloc(sizeof(Stack));
    Stack a;
    Stack b(s);

    cout << "Enter 1 to createEmptyStack\n";
    cout << "Enter 2 to check if stack is empty\n";
    cout << "Enter 3 to check if stack is full\n";
    cout << "Enter 4 to push element to stack\n";
    cout << "Enter 5 to pop element from stack\n";
    cout << "Enter 6 to print stack\n";
    cout << "Enter 7 to exit!\n" << endl;

    do{
        cout << "Enter Choice = ";
        cin >>choice;

        switch (choice)
        {
        case 1:
            a.createEmptyStack(s);
            cout << endl;
            break;
        case 2:
            a.isempty(s);
            cout << endl;
            break;
        case 3:
            a.isfull(s);
            cout << endl;;
            break;
        case 4:
            cout << "Enter Element = ";
            cin>> element;
            a.push(s,element);
            cout << endl;
            break;
        case 5:
            a.pop(s);
            cout << endl;
            break;
        case 6:
            a.printStack(s);
            cout << endl;
            break;
        case 7:
            cout << "Closed";
            break;
        default:
            cout << "Wrong Input!\n";
            break;
        }
    }
    while(choice!=7);
}

