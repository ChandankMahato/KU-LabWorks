#include <iostream>
#include<vector>
#include "Linkedlist.h"

int main(){
    Node *head = NULL;
    Node n;
    int choice, value, position;

    cout << "1. Insert from Front"<<endl;
    cout << "2. Insert at Position"<< endl;
    cout << "3. Insert from End"<<endl;
    cout << "4. Delete from Front"<<endl;
    cout << "5. Delete at Position"<<endl;
    cout << "6. Delete from End"<<endl;
    cout << "7. Traverse"<<endl;
    cout << "8. Search" <<endl;
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
            cout << "Enter Value: ";
            cin >> value;
            cout << endl;
            n.addToHead(&head, value);
            break;
        case 2:
            cout << "Enter Value: ";
            cin >> value;
            cout << "\nEnter Position: ";
            cin >> position;
            cout << endl;
            n.insertAtPosition(&head, position, value);
            break;
        case 3:
            cout << "Enter Value: ";
            cin >> value;
            cout << endl;
            n.addToTail(&head, value);
            break;
        case 4:
            n.removeFromHead(&head);
            break;
        case 5:
            cout << "Enter Position: ";
            cin >> position;
            cout << endl;
            n.removeFromPosition(&head, position);
            break;
        case 6:
            n.removeFromTail(&head);
            cout << endl;
            break;
        case 7:
            n.traverse(head);
            cout << endl;
            break;
        case 8:
            if(n.isEmpty(head)){
                cout << " ";
            }else{
                cout << "Enter the Value to be Searched: ";
                cin >> value;
                if(n.search(&head, value)){
                    cout << "List contain the searched value!"<< endl;
                }else{
                    cout << "List does not contain searched value!"<<endl;
                }
            }
            break;
        case 9:
            cout << "1. Insert from Front"<<endl;
            cout << "2. Insert at Position"<< endl;
            cout << "3. Insert from End"<<endl;
            cout << "4. Delete from Front"<<endl;
            cout << "5. Delete at Position"<<endl;
            cout << "6. Delete from End"<<endl;
            cout << "7. Traverse"<<endl;
            cout << "8. Search" <<endl;
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