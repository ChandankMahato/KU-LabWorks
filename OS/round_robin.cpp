#include <iostream>
#include <stdio.h>
using namespace std;
 
struct Process {
    int PID; //Process ID
    int BT; //Burst Time
};
 
int main(){
    int QuantumSize = 5;
    int S[5];
    int R_T[5];
    int CT[5];
    int TotalTime=0;
    int currentTime=0;
    float average = 0;
    Process P[] = {{1, 2}, {2,3}, {3,4}, {4, 6}, {5,8}};
    for(int i=0; i<5; i++){
        R_T[i] = P[i].BT;
        S[i] = 0;
        TotalTime = TotalTime + P[i].BT;
    }
    while(currentTime != TotalTime){
         for (int i = 0; i<5; i++){
            if(S[i] == 0){
                if(R_T[i] > QuantumSize){
                    currentTime = currentTime + QuantumSize;
                    R_T[i] = R_T[i] - QuantumSize;
                    if(R_T[i] == 0){
                        S[i] = 1;
                        CT[i] = currentTime;
                    }
                }else{
                    currentTime = currentTime + R_T[i];
                    CT[i] = currentTime;
                    R_T[i] = 0;
                    if(R_T[i] == 0){
                        S[i] = 1;
                    }
                }
            }else{
                currentTime = currentTime + 0;
            }
        }
    }
 
 
     cout << "BT" << "  " << "CT" << "  " << "TAT" << "  " << "WT" << endl;
    for(int i=0; i<5; i++){
        int TAT = CT[i];
        int WT = TAT - P[i].BT;
        cout << P[i].BT << "   " << CT[i] << "   " << TAT << "   " << WT;
        cout << endl;
        average = average + WT;
    }
    cout << endl;
    cout << "AVERAGE WAITING TIME: " << average/5;
}