#include<iostream>
#include "abstractBST.h"
#include "Linked_BST.h"

using namespace std;

int main(){
    int value, choice, key, get_Max_Min_element;
    Node* root;
    LinkedBST l;

    cout << "\nselect Choice to perform Operations on BST!\n";
    l.operationList();
    do{
      cout << "\nEnter Choice: ";
      cin >> choice;
      switch(choice){
          case 0:
            l.operationList();
            break;
          case 1:
            if(l.isEmpty()){
              cout << "Binary Search Tree Is Empty!"<<endl;
            }else{
              cout << "Binary Search Tree is Not Empty!"<<endl;
            }
            break;
          case 2:
            cout << "Enter Value: ";
            cin >> value;
            key = value;
            l.add(key, value);
            break;
          case 3:
            l.max(get_Max_Min_element);
            if(!l.isEmpty()){
              cout << "Maximum Element In BST is "<< get_Max_Min_element;
              cout << endl;
            }
            break;
          case 4:
            l.min(get_Max_Min_element);
            if(!l.isEmpty()){
              cout << "Minimum Element In BST is: "<< get_Max_Min_element;
              cout <<endl;
            }
            break;
          case 5:
            cout << "Enter Value to be Searched: ";
            cin >> key;
            if(!l.isEmpty()){
              if(l.searchBST(key)){
                cout << "BST contain given value!\n";
              }else{
                cout << "BST does not contain given value!\n";
              }
            }
            break;
          case 6:
            l.inorder();
            break;
          case 7:

            if(!l.isEmpty()){
              cout << "Enter Value to be Removed: ";
              cin >> key;
              cout << "Inorder Traversal Before Deletion:";
              l.inorder();
              l.removeBST(key);
              cout << "Inorder Traversal After Deletion:";
              l.inorder();
            }else{
              cout << "Binary Search Tree Is Empty!\n";
            }
            break;
          case 8:
            cout << "Operation Terminated!";
            break;
          default:
            cout << "Choice List is 0-8, Choose 0 to get Operation List!\n";
            break;
        }
    }while(choice !=8);
	return 0;
}