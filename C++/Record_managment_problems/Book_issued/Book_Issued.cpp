//header1.cpp
#include <string.h>
#include <iostream>
#include <cstring>
#include <vector>

#include "Book_issued.h"

void Student::setName(string name)
{
    this->name =name;
}

string Student::getName()
{
    return this->name;
}

void Student::issueBook(long BOOKID)
{ 
    Student::b1.push_back(BOOKID);
}

void Student::getissuedBook()
{   
    cout<<"IDs OF BOOKS ISSUED="<<endl;

    for(const int &id : Student::b1)
    {
        cout<<id<<endl;
    }
}
