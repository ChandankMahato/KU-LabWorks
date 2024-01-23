#include <iostream>
#include <string>
#include<cstring>


enum Grades{A=80,A_minus=75,B_plus=70,B=65,B_minus=60,C_plus=55,C=50,C_minus=45,D=40,F=39};
class Student{
    private:
        std::string name;
        double Grade;
    public:
        void setname(const std::string &);
        void setgrade(double grade);
        void getname();
        void getgrade();
};

void Student::setname(const std::string &name){
    this->name=name;
}
void Student::setgrade(double grade){
    this->Grade=grade;
}
void Student::getname(){
    std::cout<<name<<std::endl;
}
void Student::getgrade(){
    std::cout<<name<<std::endl;
    std::string g;
    if(Grade>=Grades::A){
        g="Grade A";
        }
    else if(Grade>=Grades::A_minus){
        g="Grade A-";
        }
    else if(Grade>=Grades::B_plus){
        g="Grade B+";
        }
    else if(Grade>=Grades::B){
        g="Grade B";
        }
    else if(Grade>=Grades::B_minus){
        g="Grade B-";
        }
    else if(Grade>=Grades::C_plus){
        g="Grade C+";
        }
    else if(Grade>=Grades::C){
        g="Grade C";
        }
    else if(Grade>=Grades::C_minus){
        g="Grade C-";
        }
    else if(Grade>=Grades::D){
        g="Grade D";
        }
    else if(Grade<=Grades::F){
        g="Fail";
    } 
    else{
        g="Grade entered isn't correct";
    }
    std::cout<<g<<std::endl;
}


int main(){
    Student Student1;

    std::string sname;
    std::cout<<"ENTER STUDENT NAME:";
    getline(std::cin,sname);

    Student1.setname(sname);

    int marks;
    std::cout<<"ENTER THE MARKS=";
    std::cin>>marks;

    Student1.setgrade(marks);
    Student1.getgrade(); 
    return 0;
}