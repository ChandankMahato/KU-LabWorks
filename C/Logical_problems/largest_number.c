#include<stdio.h>
#include<conio.h>
int findmax(int,int);
main()
{
	int a,b,r;
	printf("ENTER TWO NUMBERS:\n");
	scanf("%d%d",&a,&b);
	r=findmax(a,b);
	printf("\nTHE LARGEST NUMBER IS %d",r);
}
int findmax(int a,int b)
{
	if(a>b)
	{
		return(a);
	}
	else
	{
		return(b);
	}
}
