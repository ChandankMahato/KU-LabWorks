#include <iostream>
#include "../include/stack.h"
#include "../include/queue.h"

using namespace std;

int main(){

    Stack s;
    Queue q;
    int choice;
    int value;

    cout << "\n1. Make a LinkedList Behave like a Stack!"<<endl;
    cout << "2. Make a Linkedlist Behave like a Queue!"<<endl;
    cout << "3. Exist Program"<<endl;

    do{
        cout << "Enter Choice(1-3): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nLinkedlist Is Now Behaving Like Stack!"<<endl;
            do{
                cout << "\n1.checkIsEmpty  2.push  3.pop  4.peek  5.Exist From Stack Behaviour"<<endl;
                cout <<"\nEnter Choice(1-5): ";
                cin >>choice;
                switch (choice)
                {
                case 1:
                    if(s.isEmpty()){
                        cout << "List is Empty" <<endl;
                    }else{
                        cout << "List is Not Empty" <<endl;
                    }
                    break;
                case 2:
                    cout << "Enter Value: ";
                    cin >>value;
                    s.push(value);
                    break;
                case 3:
                    s.pop();
                    break;
                case 4:
                    if(s.isEmpty()){
                       cout << "List is Empty!"<<endl;
                    }else{
                        cout << "Top element of Stack: "<<s.peek() <<endl;
                    }
                    break;
                case 5:
                    cout << "1. Make a LinkedList Behave like a Stack!"<<endl;
                    cout << "2. Make a Linkedlist Behave like a Queue!"<<endl;
                    cout << "3. Exist Program";
                    break;
                default:
                    cout << "Wrong Input! input(1-5)"<<endl;
                    break;
                }
            }while(choice!=5);
            break;
        case 2:
            cout << "\nLinkedlist Is Now Behaving Like Queue!"<<endl;
            do{
                cout << "\n1.checkIsEmpty  2.enQueue  3.deQueue  4.Display 5.Exist From Queue Behaviour"<<endl;
                cout <<"\nEnter Choice(1-5): ";
                cin >>choice;
                switch (choice)
                {
                case 1:
                    if(q.isEmpty()){
                        cout << "Queue is Empty"<<endl;
                    }else{
                        cout << "Queue is Not Empty"<<endl;
                    }
                    break;
                case 2:
                    cout << "Enter Value: ";
                    cin >> value;
                    q.enQueue(value);
                    break;
                case 3:
                    q.Dequeue();
                    break;
                case 4: 
                    q.Display();
                    break;
                case 5:
                    cout << "1. Make a LinkedList Behave like a Stack!"<<endl;
                    cout << "2. Make a Linkedlist Behave like a Queue!"<<endl;
                    cout << "3. Exist Program";
                    break;
                
                default:
                    cout << "Wrong Input! Input(1-5)"<<endl;
                    break;
                }
            }while(choice!=5);
            break;
        case 3:
            break;
        default:
            cout <<"Wrong Input! Input(1-3)"<<endl;
            break;
        }

    }while(choice!=3);
}