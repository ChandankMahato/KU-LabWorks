#include <iostream>
using namespace std;

struct student{
    char name[20];
    int roll;
    long reg_no;\

    public:

    static string university;

    student()
    {
        
    }

    student(char name[10],int roll,long reg_no)
    {
        this->name=name;
        this->roll=roll;
        this->reg_no=reg_no;
    }

    void set_regno(long reg_no)
    {
        this->reg_no = reg_no;

    }

};

int main()
{
    student s1;

    cout<<"Enter the name of the student";
    cin>>s1.name;

    cout<<"Enter the roll of the student";
    cin>>s1.roll;

    cout<<"Enter the registration no of the student";
    cin>>s1.reg_no;

    


    return 0;
}