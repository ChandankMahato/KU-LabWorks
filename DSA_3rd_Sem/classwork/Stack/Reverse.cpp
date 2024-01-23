//cpp program to reverse a string using stack
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

//A Class to represent a stack
class Stack
{
    private:
        int top;
        unsigned capacity;
        char* array;
    public:
        Stack* createStack(unsigned capacity);
        int isFull(Stack* stack);
        int isEmpty(Stack* stack);
        void push(Stack* stack, char item);
        char pop(Stack* stack);
        void reverse(char str[]);
};

//function to create a stack of given
//capacity. It initializes size of stack as 0
Stack *Stack::createStack(unsigned capacity){
    Stack* stack = new Stack();
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = new char[(stack->capacity) * sizeof(char)];
    return stack;
}

//Stack is full when top is equal to the last index
int Stack::isFull(Stack* stack){
    return stack->top == stack->capacity - 1;
}

//Stack is empty when top is equal to -1
int Stack::isEmpty(Stack* stack){
    return stack->top == -1;
}

//Function to add an item to stack
//It increases top by 1
void Stack::push(Stack* stack, char item){
    if(isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

//Function to remove an item from stack
//It decreases top by 1
char Stack::pop(Stack* stack){
    if(isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

//A stack based function to reverse a string
void Stack::reverse(char str[])
{
    //create a stack of capacity
    //equal to lenght of string
    int n = strlen(str);
    Stack* stack = createStack(n);

    //push all character of string to stack
    int i;
    for(i = 0; i<n; i++){
        push(stack, str[i]);
    }

    //pop all characters of string and 
    //put them bact to str
    for(i = 0; i<n; i++){
        str[i] = pop(stack);
    }

}

//Driver code
int main(){

    Stack a;
    char *str = (char *)malloc(sizeof(char));

    cout << "Enter '_' in place of 'space'"<<endl;
    cout << "Enter Your String = ";
    cin >> str;

    a.reverse(str);
    cout << "Reversed String is = " <<str;
    return 0;
}