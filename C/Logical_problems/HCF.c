#include<stdio.h>
int GCD(int a,int b);
int main()
{
	int n,m;
	printf("ENTER THE FIRST NUMBER:");
	scanf("%d",&n);
	printf("ENTER THE SECOND NUMBER:");
	scanf("%d",&m);
	printf("THE GCD OF %d AND %d IS %d",n,m,GCD(n,m));
	return 0;
	
}
int GCD(int a,int b)
{
if(b==0)
return(a);
else
return GCD(b,a%b);

}
