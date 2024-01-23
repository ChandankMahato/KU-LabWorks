#include <iostream>

using namespace std;

void printArr(int arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void calcNeed(int max[][3], int alloc[][3], int size, int need[][3])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
}

void compareNeed(int available[3], int size, int need[][3], bool comp[], int alloc[][3])
{
    /* int count = 0; */
    while (true)
    {

        for (int i = 0; i < size; i++)
        {

            if (comp[i])
            {
                continue;
            }

            for (int j = 0; j < 3; j++)
            {
                if (need[i][0] <= available[0] && need[i][1] <= available[1] && need[i][2] <= available[2])
                {
                    comp[i] = 1;

                    available[j] += alloc[i][j];
                    if (j == 2)
                    {

                        printf("Completed process: #%d\n", i + 1);
                    }
                }
            }
        }

        if (comp[0] && comp[1] && comp[2] && comp[3] && comp[4])
        {
            break;
        }
    }
}

int main()
{
    // 5 processes and  resources
    // 1 avail
    int size = 5;

    int alloc[size][3] = {
        {0,
         1,
         0},
        {2,
         0,
         0},
        {3,
         0,
         2},
        {2,
         1,
         1},
        {0,
         0,
         2}}; // allocation matrix
    int max[size][3] = {
        {7,
         5,
         3},
        {3,
         2,
         2},
        {9,
         0,
         2},
        {2,
         2,
         2},
        {4,
         3,
         3}}; // max matrix
    int available[3] = {
        3,
        3,
        2}; // available matrix
    int need[size][3];
    bool completed[size] = {
        0,
        0,
        0,
        0,
        0};

    calcNeed(max, alloc, size, need);
    compareNeed(available, size, need, completed, alloc);
}