#include<stdio.h>
int transpose(int [][100],int [][100],int,int,char);
int mat(int [][100],int,int,char);
int display(int [][100],int,int);
int main()
{
	int r,c,m[100][100],n[100][100];
	char p,q,T;
	printf("ENTER THE NO OF ROWS AND COLUMNS:\n");
	scanf("%d%d",&r,&c);
	mat(m,r,c,p);
	printf("THE ENTED MATRIX IS:\n");
	display(m,r,c);
	printf("THE TRNSPOSE MATRIX IS:\n");
	transpose(m,n,r,c,T);
}
int mat(int x[100][100],int r,int c,char a)
{
	int i,j;
	printf("ENTER THE ELEMENTS OF MATRIX:%c\n",a);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%c[%d][%d]=",a,i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
}
int display(int x[100][100],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",x[i][j]);
			if(j==(c-1))
			printf("\n");
		}
	}
}
int transpose(int x[100][100],int y[100][100],int r,int c,char T)
{
	int i,j;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			y[i][j]=x[j][i];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			y[i][j]=y[i][j]+5;
			printf("%d ",y[i][j]);
			if(j==(c-1))
			{
				printf("\n");
			}
		}
	}
	
}

