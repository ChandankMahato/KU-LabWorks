
//A program to determine if the input string is a palindrome.

#include "stack.h"

using namespace std;
int main()  {
  Stack s;
  s.get_String();
  s.extract_String();

  cout<<"\n String extracted after removing punctuations and symbols";
  cout<<"\n String converted to lower case";
  cout<<"\n Reverse of entered string: ";
  
  s.display_Reverse();
  s.check_Palindrome();
  return 0;
}