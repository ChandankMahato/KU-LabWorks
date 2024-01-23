#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  int count = 0, length;
  cout <<"PASSWORD:";
  getline(cin,input);

  length = (int)input.length();

  for(count =0;count<length;count++)
  {
    if(isalpha(input[count]))
    {
      input[count]=tolower(input[count]);
      for(int i=0;i<length;i++)
      {
        if(input[count]== 'z')
        {
          input[count]=='a';
        }
        else
        {
          input[count]++;
        }
      }
    }
  }
  cout<<"ENCRYPTED PASSWORD:"<<input<<endl;
}