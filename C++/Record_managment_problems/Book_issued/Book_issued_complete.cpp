#include <string>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Student 
{
    private:
    string name;
    vector<long> b1;

    public:
    string getName();
    void setName(string);
    void issueBook(long BOOKID);
    void getissuedBook();
};

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

    cout << "Name \t"  << s1.getName() <<endl;
    s1.getissuedBook();

    cout<<"############################";
}