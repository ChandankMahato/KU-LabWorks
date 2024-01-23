#include "time.h"
#include <iostream>
Time& Time::operator++() {
 ++this->seconds;
 // If seconds > 60, update minutes accordingly
 this->minutes += this->seconds / 60;
 this->seconds = this->seconds % 60;
 // If minutes > 60, update hours accordingly
 this->hours += this->minutes / 60;
 this->minutes = this->minutes % 60;
 return *this;
}
Time& Time:: operator+(const Time & anothertime ) {
     this-> seconds =this -> seconds + anothertime.seconds;

     this-> minutes =this -> minutes + anothertime.minutes;

     this-> hours =this -> hours + anothertime.hours;

     this-> minutes += this -> seconds / 60;
     this -> seconds = this-> seconds % 60;

    this -> hours += this->minutes / 60;
    this -> minutes = this ->minutes % 60;
    return *this;
 }
void Time:: display(){
    std::cout << hours <<" hr. " << minutes << "min. " << seconds << "sec." << std::endl;
}