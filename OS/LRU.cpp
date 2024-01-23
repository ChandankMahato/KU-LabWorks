#include <stdio.h>
#include <iostream>
using namespace std;

int fr[3];
int main()
{
    void display();
    int p[21] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1}, i, j, fs[3];
    int index, k, l, flag1 = 0, flag2 = 0, pf = 0, frsize = 3;
    for (i = 0; i < 3; i++)
    {
        fr[i] = -1;
    }
    for (j = 0; j < 21; j++)
    {
        flag1 = 0, flag2 = 0;
        for (i = 0; i < 3; i++)
        {
            if (fr[i] == p[j])
            {
                flag1 = 1;
                flag2 = 1;
                break;
            }
        }
        if (flag1 == 0)
        {
            for (i = 0; i < 3; i++)
            {
                if (fr[i] ==
                    -1)
                {
                    fr[i] = p[j];
                    flag2 = 1;
                    break;
                }
            }
        }
        if (flag2 == 0)
        {
            for (i = 0; i < 3; i++)
                fs[i] = 0;
            for (k = j - 1, l = 1; l <= frsize - 1; l++, k--)
            {
                for (i = 0; i < 3; i++)
                {
                    if (fr[i] == p[k])
                        fs[i] = 1;
                }
            }
            for (i = 0; i < 3; i++)
            {
                if (fs[i] == 0)
                    index = i;
            }
            fr[index] = p[j];
            pf++;
        }
        display();
    }
    cout << "\n no of page faults :" << pf + frsize;
}
void display()
{
    int i;
    cout << "\n";
    for (i = 0; i < 3; i++)
        cout << "\t" << fr[i];
}
