// A system to store information about students of a school
#include <iostream>
#include<vector>
#include "Linkedlist.h"
#include "Linkedlist_i.h"

int main(){
    Node<string> *string_head = NULL;
    Node<string> s;

    Node<int> *int_head = NULL;
    Node<int> i;

    Node<float> *float_head = NULL;
    Node<float> f;

    int choice, position;

    string firstName;
    int roll;
    float mark;

    cout << "1. Insert Student Information from Front"<<endl;
    cout << "2. Insert Student Information at Position"<< endl;
    cout << "3. Insert Student Information from End"<<endl;
    cout << "4. Delete Student Information from Front"<<endl;
    cout << "5. Delete Student Information at Position"<<endl;
    cout << "6. Delete Student Information from End"<<endl;
    cout << "7. Traverse through Student Information"<<endl;
    cout << "8. Search existence of particular Student Information" <<endl;
    cout << "9. Opeartion List"<<endl;
    cout << "10. Exist"<<endl;
    cout<< endl;

    do{ 
        cout << "Need to See Operation List?Enter '9'"<<endl;
        cout << "Enter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout <<endl;
            cout << "Enter firstName: ";
            cin >> firstName;
            s.addToHead(&string_head, firstName);

            cout << "Enter Roll: ";
            cin >> roll;
            i.addToHead(&int_head, roll);

            cout << "Enter Mark: ";
            cin >> mark;
            f.addToHead(&float_head, mark);
            cout << endl;

            break;
        case 2:
            cout << "\nEnter Position: ";
            cin >> position;

            cout << "Enter firstName: ";
            cin >> firstName;
            s.insertAtPosition(&string_head,position, firstName);

            cout << "Enter Roll: ";
            cin >> roll;
            i.insertAtPosition(&int_head,position, roll);

            cout << "Enter Mark: ";
            cin >> mark;
            f.insertAtPosition(&float_head,position, mark);
            cout << endl;

            break;
        case 3:
            cout <<endl;
            cout << "Enter firstName: ";
            cin >> firstName;
            s.addToTail(&string_head, firstName);

            cout << "Enter Roll: ";
            cin >> roll;
            i.addToTail(&int_head, roll);

            cout << "Enter Mark: ";
            cin >> mark;
            f.addToTail(&float_head, mark);
            cout << endl;
            break;
        case 4:
            cout << endl;
            cout << "Deleting Student Information from First!"<<endl;
            cout << "Name: ";
            s.removeFromHead(&string_head);
            cout << "Roll: ";
            i.removeFromHead(&int_head);
            cout << "Mark: ";
            f.removeFromHead(&float_head);
            cout << endl;
            break;
        case 5:
            cout << "\nDeleting Student Information at particular position!\n";
            cout << "Enter Position: ";
            cin >> position;
            cout << "Student Information at position " << position << " Deleted";
            cout << endl;
            s.removeFromPosition(&string_head, position);
            i.removeFromPosition(&int_head, position);
            f.removeFromPosition(&float_head, position);
            cout << endl;
            break;
        case 6:
            cout << endl;
            cout << "Deleting Student Information form Last!"<<endl;
            cout << "Name: ";
            s.removeFromTail(&string_head);
            cout << "Roll: ";
            i.removeFromTail(&int_head);
            cout << "Mark: ";
            f.removeFromTail(&float_head);
            cout << endl;
            break;
        case 7:
            cout << endl;
            cout << "Name:";
            s.traverse(string_head);
            cout << endl;
            cout << "Roll: ";
            i.traverse(int_head);
            cout <<endl;
            cout << "Marks: ";
            f.traverse(float_head);
            cout << endl;
            cout << endl;
            break;
        case 8:
            if(s.isEmpty(string_head) || i.isEmpty(int_head) || f.isEmpty(float_head)){
                cout << " ";
            }else{
                cout << "Enter the Name of student to be Searched: ";
                cin >> firstName;
                if(s.search(&string_head, firstName)){
                    cout << "List contain the searched value!"<< endl;
                }else{
                    cout << "List does not contain searched value!"<<endl;
                }
            }
            break;
        case 9:
            cout << "1. Insert Student Information from Front"<<endl;
            cout << "2. Insert Student Information at Position"<< endl;
            cout << "3. Insert Student Information from End"<<endl;
            cout << "4. Delete Student Information from Front"<<endl;
            cout << "5. Delete Student Information at Position"<<endl;
            cout << "6. Delete Student Information from End"<<endl;
            cout << "7. Traverse through Student Information"<<endl;
            cout << "8. Search existence of particular Student Information" <<endl;
            cout << "9. Opeartion List"<<endl;
            cout << "10. Exist"<<endl;
            cout<< endl;
            break;
        case 10:
            break;
        default:
            cout << "Wrong Input! (input 1-8)";
            break;
        }
    }while(choice!=10);
}