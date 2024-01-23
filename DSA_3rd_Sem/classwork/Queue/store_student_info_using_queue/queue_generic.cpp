#include "queue_generic.h"
#include "queue_generic_i.h"

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int student_roll, choice;
    float student_mark;
    string student_firstName;

    Queue<int>  roll;
    Queue<float> mark;
    Queue<string> firstName;

    cout << "************************************\n";

    cout << "\nInformation of Student of Class 10!";
    cout << "\nEnter Information of Students: \n";

    cout << "\nEnter 1 to Enter the student informations!"<<endl;
    cout << "Enter 2 to display the student informations!"<<endl;
    cout << "Enter 3 to display first student in list!"<<endl;
    cout << "Enter 4 to display last student in list!"<<endl;
    cout << "Enter 5 to delete student information from begining!"<<endl;
    cout << "Enter 6 to get choice list!"<<endl;
    cout << "Enter 7 to exist"<<endl;

    do{
        cout << "Enter choice: " ;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout <<endl;
            cout << "Enter firstName: ";
            cin >> student_firstName;
            firstName.enQueue(student_firstName);

            cout << "Enter Roll: ";
            cin >> student_roll;
            roll.enQueue(student_roll);

            cout << "Enter Mark Obtained: ";
            cin >> student_mark;
            mark.enQueue(student_mark);
            cout <<endl;
            break;
        case 2:
            cout << "\n Displaying Information: \n";
            cout << "Name: ";
            firstName.display_Queue() ;
            cout << endl;
            cout << "Roll: ";
            roll.display_Queue();
            cout << endl;
            cout << "Mark: ";
            mark.display_Queue();
            cout << endl;
            break;
        case 3:
            cout << "\nInformation of first student in the list!"<<endl;
            cout << "firstName: ";
            firstName.display_Front();
            cout <<endl;

            cout << "Roll: ";
            roll.display_Front();
            cout <<endl;

            cout << "Marks: ";
            mark.display_Front();
            cout <<endl;
            break;
        case 4:
            cout << "\nInformation of last student in the list!"<<endl;
             cout << "firstName: ";
            firstName.display_Rear();
            cout <<endl;

            cout << "Roll: ";
            roll.display_Rear();
            cout <<endl;

            cout << "Marks: ";
            mark.display_Rear();
            cout <<endl;
            break;
        case 5:
            cout << "\nDeleted Information of first student in the list!"<<endl;
            cout << "Information deleted is as follow: "<<endl;
            cout << "firstName: "<< firstName.deQueue()<<endl;
            cout << "Roll: "<< roll.deQueue()<<endl;
            cout << "Mark: "<<mark.deQueue()<<endl;
            cout << endl;
            break;
        case 6:
            cout << "\nEnter 1 to Enter the student informations!"<<endl;
            cout << "Enter 2 to display the student informations!"<<endl;
            cout << "Enter 3 to display first student in list!"<<endl;
            cout << "Enter 4 to display last student in list!"<<endl;
            cout << "Enter 5 to delete student information from begining!"<<endl;
            cout << "Enter 6 to get choice list!"<<endl;
            cout << "Enter 7 to exist"<<endl;
            break;
        case 7:
            cout << "\n************************************";
            break;
        
        default:
            cout << "Input form 1-4"<<endl;
            break;
        }
    }while(choice!=7);
    return 0;  
}