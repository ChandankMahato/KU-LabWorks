#include <iostream>
#include <cstring>
#include <map>
using namespace std;
enum Grade{A, A_minus, B, B_minus, C, C_minus, D, F};
map<int,string> m {
    {0, "A"},
    {1, "A_minus"},
    {2, "B"},
    {3, "B_minus"},
    {4, "C"},
    {5, "C_minus"},
    {6, "D"},
    {7, "D_minus"}
};
class Student{
private:
    string name;
    long bookIds[10];
    Grade g;
public:
    static int num;
    void setName(string);
    string getName();
    void issueBook(long);
    void getIssuedBooks();
    void setGrade(Grade);
    void getGrade();
};
int Student::num=0;
void Student::setName(string a){
    name=a;
}
string Student::getName(){
return name;
}
void Student::issueBook(long bi){
if (num>=10){
    cout<<"Sorry, could not be issued."<<endl;
}
else{
    bookIds[num]=bi;
    num++;
}
}
void Student::getIssuedBooks(){
    for(int i=0;i<num;i++){
    cout<<bookIds[i]<<" ";
}
}
void Student::setGrade(Grade g){
this->g=g;
}
void Student::getGrade(){
cout<<endl<<"Grade of the student is "<< m[g];
    }
int main()
{
    Student s;
    long bookid;
    s.setName("Nirbhay Adhikari");
    cout<<"Name of the student is "<<s.getName()<<endl;
    cout<<endl;
 s.issueBook(12345);
 s.issueBook(98863);
 s.issueBook(40223);
    cout<<"Issued Books are: "<<endl;
   s.getIssuedBooks();
   s.setGrade(B);
   s.getGrade();
}