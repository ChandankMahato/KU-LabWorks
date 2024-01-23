//main1.cpp

#include <iostream>
#include <string>
#include<cstring>
#include<vector>
#include "Book_issued.h"

int main(void)
{
    string sname;
    cout<<"ENTER STUDENT NAME:";
    getline(cin,sname);

    Student s1;
    s1.setName(sname);

    int count;
    cout <<"NO. OF BOOKs TO BE ISSUED=";
    cin>>count;

    for(int i=0;i<count;i++)
    {
        long id;
        cout<<"ENTER THE BOOK ID=";
        cin>>id;
        s1.issueBook(id);
    }

    cout<<"############################"<<endl;

    cout << "Name "  << s1.getName() <<endl;
    s1.getissuedBook();

    cout<<"############################";
}