#include "stack_generic.h"
#include "stack_generic_i.h"

using namespace std;

int main(){

    int choice, integerElement;
    float floatElement;
    string stringElement;

    Stack<int> integer_stack;
    Stack<string> string_stack;
    Stack<float> float_stack;

    cout << "\nList to choose Data type->"<<endl;
    cout<< "Enter 2 to Input Integer type Data!"<<endl;
    cout<< "Enter 3 to Input Float type Data!"<<endl;
    cout<< "Enter 4 to Input String type Data!"<<endl;
    cout << "Enter 5 to Exist"<<endl;
    cout << endl;

    do{
        cout << "View list to choose data type? Enter 1."<<endl;
        cout << "Enter Choice = ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "\nList to choose Data type->"<<endl;
                cout<< "Enter 2 to Input Integer type Data!"<<endl;
                cout<< "Enter 3 to Input Float type Data!"<<endl;
                cout<< "Enter 4 to Input String type Data!"<<endl;
                cout << "Enter 5 to Exist"<<endl;
                break;
            case 2:
                do{
                    cout << "\nView Operation List? Enter: 1"<<endl;
                    cout << "Enter Choice = ";
                    cin >> choice;
                    cout << endl;

                    switch (choice)
                    {
                    case 1:
                        cout << "Operation List->"<<endl;
                        cout << "Enter 2 to push element to stack"<<endl;
                        cout << "Enter 3 to pop element from stack"<<endl;
                        cout << "Enter 4 to check if stack is empty"<<endl;
                        cout << "Enter 5 to check if stack is full"<<endl;
                        cout << "Enter 6 to check top element in stack"<<endl;
                        cout << "Enter 7 to exit"<<endl;
                        break;
                    case 2:
                        cout << "Enter Integer Element = ";
                        cin >> integerElement;
                        integer_stack.push(integerElement);
                        break;
                    case 3:
                        cout << "Popped Element is : " << integer_stack.pop();
                        cout << endl;
                        break;
                    case 4:
                        if(integer_stack.isEmpty()){
                            cout << "Stack is Empty!"<<endl;
                        }else{
                            cout << "Stack is Not Empty!"<<endl;
                        }
                        break;
                    case 5:
                        if(integer_stack.isFull()){
                            cout << "Stack is Full"<<endl;
                        }else{
                            cout << "Stack is Not Full!"<<endl;
                        }
                        break;
                    case 6:
                        cout << "Top Element is :" << integer_stack.topElement();
                        cout <<endl;
                        break;
                    case 7:
                        break;
                    default:
                        break;
                    }
                }while(choice!=7);
                break;
            case 3:
                do{
                    cout << "\nView Operation List?Enter: 1"<<endl;
                    cout << "Enter Choice = ";
                    cin >> choice;
                    cout << endl;;

                    switch (choice)
                    {
                    case 1:
                        cout << "Enter 2 to push element to stack"<<endl;
                        cout << "Enter 3 to pop element from stack"<<endl;
                        cout << "Enter 4 to check if stack is empty"<<endl;
                        cout << "Enter 5 to check if stack is full"<<endl;
                        cout << "Enter 6 to check top element in stack"<<endl;
                        cout << "Enter 7 to exit"<<endl;
                        break;
                    case 2:
                        cout << "Enter float Element = ";
                        cin >> floatElement;
                        float_stack.push(floatElement);
                        break;
                    case 3:
                        cout << "Popped Element is : " << float_stack.pop();
                        cout << endl;
                        break;
                    case 4:
                        if(float_stack.isEmpty()){
                            cout << "Stack is Empty!"<<endl;
                        }else{
                            cout << "Stack is Not Empty!"<<endl;
                        }
                        break;
                    case 5:
                        if(float_stack.isFull()){
                            cout << "Stack is Full"<<endl;
                        }else{
                            cout << "Stack is Not Full!"<<endl;
                        }
                        break;
                    case 6:
                        cout << "Top Element is :" << float_stack.topElement();
                        cout <<endl;
                        break;
                    case 7:
                        break;
                    default:
                        break;
                    }
                }while(choice!=7);
                break;
            case 4:
                do{
                    cout << "\nView Operation List?Enter: 1"<<endl;
                    cout << "Enter Choice = ";
                    cin >> choice;
                    cout << endl;

                    switch (choice)
                    {
                    case 1:
                        cout << "Enter 2 to push element to stack"<<endl;
                        cout << "Enter 3 to pop element from stack"<<endl;
                        cout << "Enter 4 to check if stack is empty"<<endl;
                        cout << "Enter 5 to check if stack is full"<<endl;
                        cout << "Enter 6 to check top element in stack"<<endl;
                        cout << "Enter 7 to exit"<<endl;
                        break;
                    case 2:
                        cout << "Enter String Element = ";
                        cin >> stringElement;
                        string_stack.push(stringElement);
                        break;
                    case 3:
                        cout << "Popped Element is : " << string_stack.pop();
                        cout << endl;
                        break;
                    case 4:
                        if(string_stack.isEmpty()){
                            cout << "Stack is Empty!"<<endl;
                        }else{
                            cout << "Stack is Not Empty!"<<endl;
                        }
                        break;
                    case 5:
                        if(string_stack.isFull()){
                            cout << "Stack is Full"<<endl;
                        }else{
                            cout << "Stack is Not Full!"<<endl;
                        }
                        break;
                    case 6:
                        cout << "Top Element is :" << string_stack.topElement();
                        cout <<endl;
                        break;
                    case 7:
                        break;
                    default:
                        break;
                    }
                }while(choice!=7);
                break;
            case 5:
                break;
            default:
                cout << "Enter Input between 1-4"<<endl;
                break;
        }
    }while(choice != 5);
    return 0;  
}