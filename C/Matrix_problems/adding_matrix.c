#include<stdio.h>
int add(int [][20],int [][20],int [][20],int,int);
int main()
{
	int x[20][20],y[20][20],r,c,i,j,z;
	printf("ENTER THE ROWS AND COLUMAN OF MATRIX X:\n");
	scanf("%d%d",&r,&c);
	printf("ENTER THE ELEMENTS OF MATRIX:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("ENTER THE x[%d][%d]=",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
	printf("THE ENTERED MATRIX iS:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",x[i][j]);
			if(j==(c-1));
			printf("\n");
		}
	}
	printf("ENTER THE ROWS AND COLUMAN OF MATRIX Y:\n");
	scanf("%d%d",&r,&c);
	printf("ENTER THE ELEMENTS OF MATRIX:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("ENTER THE y[%d][%d]=",i+1,j+1);
			scanf("%d",&y[i][j]);
		}
	}
	printf("THE ENTERED MATRIX iS:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",y[i][j]);
			if(j==(c-1));
			printf("\n");
		}
	}
	add(x,y,z,r,c);
}
int add(int x[][20],int y[][20],int z[][20],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
    }
	printf("\n THE MATRIX AFTER ADDITION IS:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",z[i][j]);
			if(j==(c-1))
			printf("\n");
		}
	}
}
