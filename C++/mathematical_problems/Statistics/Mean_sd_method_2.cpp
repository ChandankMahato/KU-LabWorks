/*
Lab1 exercise
Question 4: Write a program to input 10 double precision floating
point numbers from the user, store them in an array, and then compute
mean and standard deviation of the array. Note that the standard
deviation Sigma of a collection of numbers....
*/
#include <iostream>
#include <cmath>
using namespace std;

//function declaration
double findStandardDeviation(double *array, int count,double MN);
double mean(double *array, int count);

 //main function
int main() 
{
    int count, i;
    double inputArray[10],mn;

    count=10;
     
    cout << "Enter " << count <<" elements\n";
    for(i = 0; i < count; i++)
    {
     cin >> inputArray[i];
    }
    mn=mean(inputArray,count);
    cout << "Mean="<<mn<<endl;
    cout << "Standard Deviation = " << findStandardDeviation(inputArray, count,mn);

    return 0;
}
//function to find mean
double mean(double *array, int count)
{
    double sum=0.00, Mean=0.00;
    int i;

    for(i=0;i<count; i++)
    {
        sum+=array[i];
    }
    Mean=sum/count;
    return(Mean);
}

// Function to find standard deviation 
double findStandardDeviation(double *array, int count, double MN) {
    double sum = 0.00, sDeviation = 0.00;
    int i;

    for(i = 0; i < count; ++i) {
        sDeviation += pow(array[i] - MN, 2);
    }
 
    return sqrt(sDeviation/count);
}