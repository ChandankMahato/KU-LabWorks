#include <string.h>
#include <iostream>
#include <cstring>

using namespace std;

enum Grade {A,A_minus,B_plus,B_minus};

#define MAX 10
class Student 
{
    private:
    string name;
    long books[MAX];

    Grade g;

    public:
    string getName();
    void setName(string);
    void issueBook(long ptr[MAX]);
    void getissuedBook();

    void setGrade(Grade g);
};

void Student::setName(string name)
{
    this->name =name;
}

string Student::getName()
{
    return this->name;
}

void Student::issueBook(long p[MAX] )
{ 
    int i;

    for (i=0;i<MAX ;i++)
    {
        this->books[i] = p[i];
    }

}

void Student::getissuedBook()
{
    for (int i=0 ;i<MAX ;i++)
    {
        cout<<"BOOK ID= "<<books[i] << endl;
    }
}

void Student::setGrade(Grade g)
{
    this->g=g;
}

int main(void)
{
    Student s1;
    s1.setName("Chandan");
    
    long bookid[MAX];
    int i;
    for(i=0;i<10;i++)
    {
        cout <<"Enter the book id=";
        cin >> bookid[i];
    }

    s1.issueBook(bookid);

    cout<<"############################"<<endl;

    cout << "Name \t"  << s1.getName() <<endl;
    s1.getissuedBook();

    cout<<"############################";

    void setGrade(Grade grade);
}