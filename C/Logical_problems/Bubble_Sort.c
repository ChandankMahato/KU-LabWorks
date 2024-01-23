#include<stdio.h>
void bubbleSort(int a[]);
int i,j,n;
int main()
{
	int b[n];
	printf("ENTER THE SIZE OF ARRAY:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("ENTER THE NUMBERS:");
	scanf("%d",&b[i]);
    }
    bubbleSort(b);
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
   
}
void bubbleSort(int a[])
{
	int x;
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
		    if(a[j]>a[j+1])
			{
               x=a[j];
               a[j]=a[j+1];
               a[j+1]=x;
			}
		}
	}
}
