#include<stdio.h>
int perfect(int n);
int main()
{
	int n,sum,a;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
    a=perfect(n);
      if(a==n)
     {
	 	printf("THE NUMBER IS A PERFECT NUMBER.");
     }
	else
	 {
		printf("THE NUMBER IS NOT A PERFECT NUMBER.");
     }
    return 0;
}
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
     return(sum);
	
}
