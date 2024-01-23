#include <iostream>
#include <string>
#include "enumclass.h"


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
    Student1.setname("Student1");
    Student1.setgrade(62);
    Student1.getgrade(); 
    return 0;
}