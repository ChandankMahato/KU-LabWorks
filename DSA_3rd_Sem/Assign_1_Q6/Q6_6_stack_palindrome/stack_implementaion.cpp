//A program to determine if the input string is a palindrome.

#include "stack.h"

void Stack::get_String() {
  cout<<"\n Enter a String: ";
  cin.getline(str,MAX);

  length=strlen(str);
}

void Stack::extract_String() {
  char temp[MAX];
  int i,j;
  for(i=0; i<length; i++) {
    temp[i]=str[i];
  }
  j=0;
  for(i=0; i<length; i++ )  {
    if(isalpha(temp[i]))  {
      str[j]=tolower(temp[i]);
      j++;
    }
  }
  length=j;
}

void Stack::check_Palindrome() {
  for(int i=0; i<length; i++)
    push(str[i]);

  for(int i=0; i<length; i++) {
    if(str[i]==pop())
      count++;
  }

  if(count==length) {
    cout<<"\n Entered string is a Palindrome. \n";
  }
  else  cout<<"\n Entered string is not a Palindrome. \n";
}

void Stack::display_Reverse()  {
  for(int i=length-1; i>=0; i--)
    cout<<str[i];
}

void Stack::push(char temp) {

  if(top==MAX-1)  {
    cout<<"\n Stack Overflow!!!";
    return;
  }

  top++;
  data[top]=temp;

}

char Stack::pop() {
  if(top==-1)  {
    cout<<"\n Stack Underflow!!!";
    char ch='\n';
    return ch;
  }
  char temp=data[top];
  top--;
  return temp;
}