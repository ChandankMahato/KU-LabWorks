#include<stdio.h>
int main()
{
	int i,n,num,r,sum=0,x=1;
	printf("ENTER THE NUMBER TO CHECK WHETHER IT IS STORONG OR NOT.");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		for(i=r;i>0;i--)
		{
		x=x*i;
	    }
	    sum=sum+x;
	    n=n/10;
	    x=1;
	}
	if(sum==num)
		printf("ENTERED NUMBER IS STRONG NUMBER.");
    else
        printf("ENTERED NUMBER IS NOT STRONG NUMBER.");
}
