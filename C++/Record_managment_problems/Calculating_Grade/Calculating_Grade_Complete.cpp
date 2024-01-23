#include <iostream>
#include <string>
#include <cstring>

enum Grade{A=80,A_minus=75,B_plus=70,B=65,B_minus=60,C_plus=55,C=50,C_minus=45,D=40,F=39};

class Student
{
    private:
        std::string name;
        double grade;

    public:
        void setName(const std::string &);
        void setGrade(double grade);
        void getName();
        void getGrade();
};

void Student::setName(const std::string &name)
{
    this->name=name;
}

void Student::setGrade(double grade)
{
    this->grade=grade;
}

void Student::getName()
{
    std::cout<<name<<std::endl;
}

void Student::getGrade()
{
    std::cout<<name<<std::endl;
    std::string G;

    if(grade>=Grade::A)
    {
        G="YOUR Grade = A";
    }
    else if(grade>=Grade::A_minus)
    {
        G="YOUR Grade = A-";
    }
    else if(grade>=Grade::B_plus)
    {
        G="YOUR Grade = B+";
    }
    else if(grade>=Grade::B)
    {
        G="YOUR Grade = B";
    }
    else if(grade>=Grade::B_minus)
    {
        G="Your Grade = B-";
    }
    else if(grade>=Grade::C_plus)
    {
        G="Your Grade = C+";
    }
    else if(grade>=Grade::C)
    {
        G="Your Grade = C";
    }
    else if(grade>=Grade::C_minus)
    {
        G="Your Grade = C-";
    }
    else if(grade>=Grade::D)
    {
        G="Your Grade = D";
    }
    else if(grade<=Grade::F)
    {
        G="Your Grade = F";
        std::cout<<"YOU HAVE FAILED"<<std::endl;
    }
    else
    {
        G="MARKS MUST BE ENTERED BETWEEN 0-100";
    }
    std::cout<<G<<std::endl;
}

int main()
{
    Student s1;

    std::cout<<"**********************************************"<<std::endl;
    std::string sname;
    std::cout<<"ENTER STUDENT NAME=";
    getline(std::cin,sname);

    s1.setName(sname);

    int smarks;
    std::cout<<"ENTER THE MARKS=";
    std::cin>>smarks;
    std::cout<<"\n";

    s1.setGrade(smarks);
    s1.getGrade();
    std::cout<<"**********************************************";
    return 0;
}