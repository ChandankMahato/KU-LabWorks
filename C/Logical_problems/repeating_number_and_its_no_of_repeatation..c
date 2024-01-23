#include<stdio.h>
int main()
{
	int n[10],i,j,count,freq[10];
	printf("ENTER THE NUMBERS:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	    freq[i]=-1;	
	}
	for(i=0;i<9;i++)
	{
		count=1;
		for(j=i+1;j<10;j++)
		{
			if(n[i]==n[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	for(i=0;i<10;i++)
    {
    	if(freq[i]!=0)
    	{
    		printf("NUMBER %d REPEATES FOR %d TIMES.",n[i],freq[i]);
		}
		printf("\n");
	}
}
