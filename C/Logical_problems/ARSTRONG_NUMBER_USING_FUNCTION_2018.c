#include<stdio.h>
#include<math.h>
int ArmstrongNumber(int);
int main()
{
	int n,m;
	printf("ENTER THE NUMBER TO CHECK WHETHER IT IS ARMSTRONG OR NOT:");
	scanf("%d",&n);
	m=ArmstrongNumber(n);
	if(n==m)
	printf("THE ENTERED NUMBER IS ARMSTRONG NUMBER.");
	else
	printf("THE ENTERED NUMBER IS NOT ARMSTRONG NUMBER.");
}
int ArmstrongNumber(int n)
{
	int num,count=0,sum=0,R;
	num=n;
	while(n!=0)
	{
		R=n%10;
		count++;
		n=n/10;
	}
	while(num!=0)
	{
		R=num%10;
		sum=sum+pow(R,3);
		num=num/10;
	}
	return(sum);
}
