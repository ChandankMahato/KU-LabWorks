// Imlementation of Non-Preemptive Shortest Job First scheduling.
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

struct Process
{
    int PID; // Process ID
    int BT;  // Burst Time
    int AT;  // Arrival Time
};

// for formating output
const char separator = ' ';
const int Width = 6;
template <typename T>
void printElement(T t)
{
    cout << left << setw(Width) << setfill(separator) << t;
}

// main function
int main()
{
    // initializing
    int N = 5;
    int A_T[N];
    int B_T[N];
    int CT[N];
    int TAT[N];
    int WT[N];
    int P_ID[N];
    int temp;
    float average = 0;
    Process P[] = {{1, 2, 5}, {2, 3, 0}, {3, 4, 4}, {4, 6, 2}, {5, 8, 1}};
    for (int i = 0; i < N; i++)
    {
        B_T[i] = P[i].BT;
        A_T[i] = P[i].AT;
        P_ID[i] = P[i].PID;
    }

    // sorting by Arriving time and arranging Brust time and Process_ID accordingly.
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A_T[j] < A_T[i])
            {
                temp = A_T[i];
                A_T[i] = A_T[j];
                A_T[j] = temp;

                temp = B_T[i];
                B_T[i] = B_T[j];
                B_T[j] = temp;

                temp = P_ID[i];
                P_ID[i] = P_ID[j];
                P_ID[j] = temp;
            }
        }
    }

    // excuting first process in the ready queue.
    CT[0] = B_T[0] + A_T[0];

    // sorting except 1st process (already excuted).
    // sorting by brust time and arraing Arriving time and Process_ID accordingly.
    for (int i = 1; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (B_T[j] < B_T[i])
            {
                temp = B_T[i];
                B_T[i] = B_T[j];
                B_T[j] = temp;

                temp = A_T[i];
                A_T[i] = A_T[j];
                A_T[j] = temp;

                temp = P_ID[i];
                P_ID[i] = P_ID[j];
                P_ID[j] = temp;
            }
        }
    }
     // if shortest job is not in the ready queue, excuting next shortest job.
    for (int i = 1; i < N; i++)
    { 
        if (CT[i - 1] < A_T[i])
        {
            for (int j = i + 1; j < N; j++)
            {
                if (CT[i - 1] < A_T[i])
                {
                    temp = B_T[i];
                    B_T[i] = B_T[j];
                    B_T[j] = temp;

                    temp = A_T[i];
                    A_T[i] = A_T[j];
                    A_T[j] = temp;
                }
            }
            CT[i] = B_T[i] + CT[i - 1];
        }
        else
        {
            CT[i] = CT[i - 1] + B_T[i];
        }
    }

    // Printing Output
    printElement("PID");
    printElement("AT");
    printElement("BT");
    printElement("CT");
    printElement("TAT");
    printElement("WT");
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        int TAT = CT[i] - A_T[i];
        int WT = TAT - B_T[i];
        printElement(P_ID[i]);
        printElement(A_T[i]);
        printElement(B_T[i]);
        printElement(CT[i]);
        printElement(TAT);
        printElement(WT);

        cout << endl;
        average = average + WT;
    }
    cout << endl
         << endl;
    cout << "AVERAGE WAITING TIME: " << average / N;
}
