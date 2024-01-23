//Singly Linked list implementations in C++
#include <iostream>

using namespace std;

//creating a node
class Node{
    public:
        int data;
        Node* next;
        void insertFront(Node** head_ref, int new_data);
        void insertAfter(Node* prev_node, int new_data);
        void insertEnd(Node** head_ref, int new_data);
        void printList(Node *node);
};

void Node::insertFront(Node** head_ref, int new_data)
{
    //creating new node
    Node* new_node = new Node();

    //assign data to new node
    new_node->data = new_data;

    //pointing the next of new node to previous node
    new_node->next = (*head_ref);

    //pointing head to new node
    (*head_ref) = new_node;
}

void Node::insertAfter(Node* prev_node, int new_data)
{
    if(prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL";
        return;
    }

    //create new node
    Node* new_node = new Node();

    //assign data to new node
    new_node->data = new_data;

    //point the next of new node to that which is previously pointed by prev_node
    new_node->next = prev_node->next;

    //move the next of prev node as new_node
    prev_node->next = new_node;
}

void Node::insertEnd(Node** head_ref, int new_data)
{
    //create new node
    Node* new_node = new Node();

    Node *last = *head_ref;

    //assign data to new node
    new_node->data = new_data;

    //assign the next of new node to NULL
    new_node->next = NULL;

    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while(last->next !=NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void Node::printList(Node *node)
{
    while(node!=NULL)
    {
        cout << " "<<node->data;
        node = node->next;
    }
}


int main(){
    Node *head = NULL;
    Node l;
    int choice, value;

    cout << "1.Insert From Front"<<endl;
    cout << "2. Insert After 3rd last position"<<endl;
    cout << "3. Insert End"<<endl;
    cout << "4. Print the Linked list Value"<<endl;
    cout << "5. Exist"<<endl;

    do{
        cout << "Enter Choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "Enter Value: ";
            cin >> value;
            l.insertFront(&head, value);
            break;
        case 2:
            cout << "Enter Value: ";
            cin >> value;
            l.insertAfter(head->next, value);
            break;
        case 3:
            cout << "Enter value: ";
            cin>> value;
            l.insertEnd(&head, value);
            break;
        case 4:
            l.printList(head);
            break;
        default:
            break;
        }
    }while(choice!=5);
}
