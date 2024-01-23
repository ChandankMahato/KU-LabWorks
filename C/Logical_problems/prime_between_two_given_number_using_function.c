#include<stdio.h>
int how_many_prime_between(int a,int b);
int main()
{
	int a,b,x;
	printf("ETNER THE TWO NUMBERS:\n");
	scanf("%d%d",&a,&b);
	x=how_many_prime_between(a,b);
	printf("THE NUMBER OF PRIME BETWEEN A AND B ARE:%d",x);
}
int how_many_prime_between(int a,int b)
{
	int i,j,count=0,c=0;
	for(i=a+1;i<b;i++)
	{
		count=0;
      for(j=2;j<=i;j++)
      {
      	if(i%j==0)
      	count++;
	  }
	   	if(count==1)
	   	c++;
	}
	return(c);
}
