//header1.h
#pragma once

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