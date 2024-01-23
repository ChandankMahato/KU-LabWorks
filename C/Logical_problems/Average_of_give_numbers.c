#include<stdio.h>
int n;
float avg(int a[]);
int main()
{
int a[n];
float z;
z=avg(a);
printf("THE AVERAGE OF %d NUMBERS IS %f.",n,z);
}
float avg(int a[])
{
	int i;
	float AVG,sum=0;
	printf("ENTER THE VALUE OF n:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
	printf("ENTER THE %d NUMBERS:",i+1);
	scanf("%d",&a[i]);
	printf("\n");
	sum+=a[i];
    }
	AVG=sum/n;
	return(AVG);
}
