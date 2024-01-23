#include <iostream>
#include <cmath>

using namespace std;


double func_mean(const double x[10]){
    int sum = 0;
    double result;
    for (int i = 0; i < 10; ++i)
    {
        sum += x[i];
    }
    result = sum / 10.00;
    return result;
}

double func_sd(const double x[10], double mean){
    double SD;
    for(int i = 0; i < 10; ++i)
        SD += pow(x[i] - mean, 2);

    return sqrt(SD / 10);
}

int main(int argc, char const *argv[])
{
    double x[10], mean, stddev;
    cout << "Enter the numbers\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> x[i];
    }
    mean = func_mean(x);
    cout << "Mean = " << mean << endl;
    stddev = func_sd(x, mean);
    cout << "Standard Deviation = " << stddev << endl;
    return 0;
}
