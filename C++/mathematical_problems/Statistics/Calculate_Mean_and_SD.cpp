/*Write a program to input 10 double precision floating point
numbers from the user, store them in an array, and then
compute mean and standard deviation of the array.
Note that the standard deviation sigma of a collection of
numbers Xj, j=1,2,....,N is given by
    sigma=sqrt(ENj=1(Xj-xbar)^2)/N-1*/

#include <iostream>
#include <cmath>
using namespace std;
double calculatemean(double data[]);
double calculateSD(double data[],float m);

int main()
{
  int i;
  double data[10];

  cout<< "Enter 10 elements: \n";
  for(i=0;i<10;i++){
    cin>> data[i];
  }
  cout << endl<<"Mean=" <<calculatemean(data);
  cout << endl<<"SD=" << calculateSD(data,calculatemean(data));

  return 0;
}

double calculatemean(double data[])
{
  float sum=0.0, mean=0.0;
  int i;
  for(i=0; i<10;i++)
  {
    sum+=data[i];
  }
  mean=sum/10;
  return mean;
}

double calculateSD(double data[],float m)
{
  float standardDeviation=0.0;
  int i;
  for(i=0;i<10;i++)
  {
    standardDeviation+=pow(data[i]-m,2);
  }
  return sqrt(standardDeviation/10);
}