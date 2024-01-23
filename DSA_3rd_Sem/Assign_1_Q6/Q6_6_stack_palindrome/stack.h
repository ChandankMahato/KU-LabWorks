//A program to determine if the input string is a palindrome.

#ifndef STACK_H
#define STACK_H

#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define MAX 100

class Stack  {
private:
  char data[MAX],str[MAX];
  int top,length,count;

  void push(char);
  char pop();

public:
  Stack() {
    top=-1;
    length=0;
    count=0;
  }
  void get_String();
  void check_Palindrome();
  void extract_String();
  void display_Reverse();
};

#endif
