#include "ArrayQueue.h"

int main() {
    ArrayQueue a1;
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
            int x[5],i;
            for(int i=0;i<5;i++)
            {
                std::cout<<"Enter The Elment "<<i+1<<"=";
                std::cin>>x[i];
            }
            try 
            {
                for(int i=0;i<5;i++)
                {
                    a1.insert(x[i]);
                }
            }
            catch (const char* message)
            {
                std::cerr<< message << endl;
            }
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