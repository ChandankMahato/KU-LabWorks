#pragma once 

class Time {
 private:
 short hours, minutes, seconds;
 public:
 Time() { }
 Time(short hours, short minutes, short seconds)
 : hours(hours), minutes(minutes), seconds(seconds) { }
 Time& operator++();
 Time& operator+(const Time & );

 void display();

}; 