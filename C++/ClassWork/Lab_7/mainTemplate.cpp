#include "ArrayQueueTemplate.h"
#include <iostream>
using namespace std;

int main() {
    ArrayQueue<double> a1; // we can change the datatype here and everthing will be accordingly... for now i have set datatype to double!!

     int ch;
   cout <<"#####################################"<<endl;
   
   cout<<"1) INSERT ELEMENT TO QUEUE"<<endl;
   cout<<"2) DELETE ELEMENT FROM QUEUE"<<endl;
   cout<<"3) DISPLAY THE FRONT ELEMENT OF QUEUE"<<endl;
   cout<<"4) DISPLAY THE REAR ELEMENT OF QUEUE"<<endl;
   cout<<"5) EXIT\n"<<endl;
   do {
      cout<<"Enter your choice : ";
      cin >>ch;
      switch (ch) {
         case 1:
        {
           a1.enter();
        }
         break;
         case 2:
         {
            try
            {
                a1.remove();
                
            }
            catch(const char* message)
            {
                std::cerr<< message << endl;
            }
         }
         break;
         case 3:
         {
             try
            {
                cout << "Peaking at front element: " <<a1.front() << endl;
            }
            catch(const char* message)
            {
                std::cerr<< message << endl;
            }
         }
         break;
         case 4:
         {
              try
            {
                cout << "Peaking at rear element: " <<a1.rear() << endl;
            }
            catch(const char* message)
            {
                std::cerr<< message << endl;
            }
         }
         break;
         case 5:
         {
            cout<<"Exit"<<endl;
            cout <<"#####################################"<<endl;
         }
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=5);
    return 0;
}