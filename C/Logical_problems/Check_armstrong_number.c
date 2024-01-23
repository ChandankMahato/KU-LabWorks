#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,rem,sum=0,a,count=0;
printf("ENTER THE NUMBER TO BE CHECKED:");
scanf("%d",&n);
a=n;
while(a!=0)
{
   	a=a/10;
	count+=count;
}
while(n>0);
{
	rem=n%10;
	sum=sum+pow(rem,count);
	n=n/10;
}
if(sum=n)
{
	printf("%d is armstrong number",sum);
}
}
