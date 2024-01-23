#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,n,*a,sum=0;
float avg;
printf("ENTER THE TOTAL NUMBER OF STUDENT:");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
	printf("enter the marks of %d sutdent",i+1);
	scanf("%d",a+i);
	sum+=*(a+i);
}
avg=sum/n;
printf("THE AVERAGE MARKS IS %f",avg);
free(a);
return 0;
}
