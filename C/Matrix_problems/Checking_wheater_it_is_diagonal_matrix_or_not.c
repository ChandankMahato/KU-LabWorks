#include<stdio.h>
int main()
{
	int i,j,M[10][10],count=0;
	printf("THE ELEMENTS OF 10*10 MATRIX IS:\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("M[%d][%d]=",i+1,j+1);
			scanf("%d",&M[i][j]);
		}
		printf("\n");
	}
	printf("THE ENTERD 10*10 MATRIX IS:\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d  ",M[i][j]);
			if(j==9)
			{
				printf("\n\n");
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i!=j && M[i][j]==0)
			{
				count++;
			}
		}
	}
	if(count==90)
	printf("THE ENTERED MATRIX IS DIGONAL MATRIX.");
	else
	printf("THE ENTERD MATRIX IS NOT DIGONAL MATRIX.");
}
