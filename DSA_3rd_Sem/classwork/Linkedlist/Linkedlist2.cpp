#include <iostream>
#include<vector>

using namespace std;

class Node{
    public:
        int data;
        int pos=0;
        int count = 0;
        Node *next;
        vector<int> display;

        void insertFront(Node** front_node, int new_data);
        void insertEnd(Node** end_node, int new_data);
        void insertPos(Node** pos_node, int position, int new_data);

        void deleteFront(Node** front_node);
        void deleteEnd(Node **end_node);
        void deletePos(Node **node, int position);

        void traverse(Node *node);
        bool isEmpty(Node *node);
        bool search(Node **search_node, int key);
};

bool Node::isEmpty(Node *node){
    if(node == NULL){
        cout << "List is Empty!" << endl;
        return true;
    }
    else{
        return false;
    }
}


void Node::insertFront(Node** front_node, int new_data)
{
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = (*front_node);
    (*front_node) = newNode;
    pos++;
}

void Node::insertEnd(Node** end_node, int new_data){
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = NULL;

    Node* temp = (*end_node);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    pos++;
};

void Node::insertPos(Node** pos_node, int position, int new_data){
    Node* newNode = new Node();
    newNode->data = new_data;

    Node* temp = (*pos_node);

    for(int i = 1; i < position-1; i++){
        if(temp->next != NULL){
            temp = temp->next;
        }
    }
    newNode->next = temp->next;
    temp->next= newNode;
    pos++;
}

void Node::deleteFront(Node** front_node){
    if(isEmpty(*front_node)){
        return;
    }
    else{
        Node *temp;
        temp= (*front_node);
        if(temp->next != NULL){
            (*front_node) = (*front_node)->next;
            cout << "Front Element "<< "("<< temp->data << ")"<< " Deleted" <<endl;
            cout << endl;
            free(temp);
        }
        else{
            cout << "Front Element "<< "("<< temp->data << ")"<< " Deleted" << endl;
            cout << "List is Empty Now!"<<endl;
            cout << endl;
            *front_node = NULL;
        }
        pos--;
    }
}

void Node::deleteEnd(Node **end_node){
    Node *temp;
    temp = (*end_node);

    if(isEmpty(*end_node)){
        return;
    }else{
        if(temp->next !=NULL){
            while(temp->next->next != NULL){
            temp = temp->next;
            }
            cout << "End Element "<< "("<< temp->next->data << ")"<< " Deleted" <<endl;
            temp->next = NULL;

        }else{
            cout << "End Element "<< "("<< temp->data << ")"<< " Deleted" << endl;
            cout << "List is Empty Now!"<<endl;
            *end_node = NULL;
        }
        pos--;
    }
}

void Node::deletePos(Node **node, int position){
    Node *temp, *temp2;
    temp2 = temp = (*node);

    if(isEmpty(*node)){
        return;
    }else{
        if(temp->next!=NULL && position > 1){
            for(int i=1; i<position-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            cout << "Element At postion "<< position << "("<< temp2->data << ")"<< " Deleted" << endl;
        }
        else if(temp->next!= NULL && position==1){
            (*node) = (*node)->next;
            free(temp);
            cout << "Element At postion "<< position << "("<< temp2->data << ")"<< " Deleted" << endl;
        }
        else{
            *node = NULL;
            cout << "Element At postion "<< position << "("<< temp2->data << ")"<< " Deleted" << endl;
            cout << "List is Empty Now!"<<endl;
        }
        pos--;
    } 
}

void Node::traverse(Node *node){

    if(isEmpty(node)){
        return;
    }else{
        while(node!=NULL){
        // cout << " "<<node->data;
        display.push_back(node->data);
        node = node->next;
        }

        cout <<endl<< "NULL<- ";
        for(auto ir = display.rbegin(); ir!=display.rend(); ir++){
            cout << *ir << " ";
        }
        cout << "<-Head"<<endl;
        display.clear();
    }
}

bool Node::search(Node **search_node, int key){
    Node* temp;
    temp = (*search_node);

    if(temp->next!=NULL){

        while(temp->next!=NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;  
        }
        if(temp->data == key){
            return true;
        }
    }else{
        if(temp->data == key){
            return true;
        }
    }
    return false;
}

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
    cout << "9. Exist"<<endl;
    cout<< endl;

    do{ 
        cout << "Enter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Value: ";
            cin >> value;
            cout << endl;
            n.insertFront(&head, value);
            break;
        case 2:
            cout << "Enter Value: ";
            cin >> value;
            cout << "\nEnter Position: ";
            cin >> position;
            cout << endl;
            n.insertPos(&head, position, value);
            break;
        case 3:
            cout << "Enter Value: ";
            cin >> value;
            cout << endl;
            n.insertEnd(&head, value);
            break;
        case 4:
            n.deleteFront(&head);
            break;
        case 5:
            cout << "Enter Position: ";
            cin >> position;
            cout << endl;
            n.deletePos(&head, position);
            break;
        case 6:
            n.deleteEnd(&head);
            cout << endl;
            break;
        case 7:
            n.traverse(head);
            cout << endl;
            break;
        case 8:
            cout << "Enter the Value to be Searched: ";
            cin >> value;
            if(n.search(&head, value)){
                cout << "List contain the searched value!"<< endl;
            }else{
                cout << "List does not contain searched value!"<<endl;
            }
            break;
        case 9:
            break;
        default:
            cout << "Wrong Input! (input 1-8)";
            break;
        }
    }while(choice!=9);

}