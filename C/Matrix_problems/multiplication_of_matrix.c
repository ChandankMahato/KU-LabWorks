#include<stdio.h>
int m(int [][20],int,int,char);
int dis(int [][20],int,int,char);
int mul(int [][20],int [][20],int [][20],int,int,char,char);
int main()
{
	int r,c,a[20][20],b[20][20],d[20][20];
	char A,B;
	printf("ENTER THE NUMBER OF ROWS AND COLUMNS:\n");
	scanf("%d%d",&r,&c);
	m(a,r,c,'A');
	dis(a,r,c,'A');
	m(b,r,c,'B');
	dis(b,r,c,'B');
	mul(d,a,b,r,c,'A','B');	
}
int m(int x[20][20],int r,int c,char A)
{
	int i,j;
	printf("ENTER THE ELEMENTS OF MATRIX %c:\n",A);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%c[%d][%d]=",A,i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
	
}
int dis(int x[20][20],int r,int c,char A)
{
	int i,j;
	printf("THE ENTERD MATRIX %C IS:\n",A);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",x[i][j]);
			if(j==(c-1))
			printf("\n");
		}
	}
}
int mul(int d[20][20],int a[20][20],int b[20][20],int r,int c,char A,char B)
{
	int i,j,k;
	printf("THE MULTIPLICATION OF MATRIX A AND B IS:\n");
	printf("%c*%c=\n",A,B);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=0;
			for(k=0;k<c;k++)
			{
				d[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%-3d   ",d[i][j]);
			if(j==(c-1))
			printf("\n\n");
		}
	}
	
}
