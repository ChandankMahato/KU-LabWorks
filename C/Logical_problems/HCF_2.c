#include<stdio.h>
int GCD(int a,int b);
int main()
{
	int n,m,z;
	printf("ENTER THE FIRST NUMBER:");
	scanf("%d",&n);
	printf("ENTER THE SECOND NUMBER:");
	scanf("%d",&m);
	z=GCD(n,m);
	printf("THE GCD OF GIVEN TWO NUMBERS IS:%d",z);
	
	
}
GCD(int a,int b)
{
	int n,m,min,i,gcd;
	min=(n<m)?n:m;
	for(i=1;i<=min;i++)
	{
		if(n%1==0 && m%i==0)
		{
			gcd=i;
		}
	}
	return(gcd);

}

