#include<stdio.h>
int matrix(int [][20],int,int,char);
int display(int [][20],int,int,char);
int digonal(int [][20],int,int,char);
void CheckMatrix(int,int);
int i,j;
int main()
{
	int r,c;
	CheckMatrix(r,c);
}
void CheckMatrix(int r,int c)
{
	int a[20][20];
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&r);
	printf("ENTER THE NUMBER OF COLUMNS:");
	scanf("%d",&c);
	printf("\n");
	if(r==c)
	{
		printf("THIS IS SQUARE MATRIX.\n\n");
		printf("READY TO GO!\n\n");
		matrix(a,r,c,'A');
		printf("\n");
		display(a,r,c,'A');
		printf("\n");
		printf("THE SUM OF DIGONAL ELEMENTS IS:%d",digonal(a,r,c,'A'));
	}
	else
	{
		printf("PLEASE ENTER EQUAL NUMBERS OF ROWS AND COLUMNS!");
	}
}
int matrix(int x[20][20],int r,int c,char A)
{
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
int display(int x[20][20],int r,int c,char A)
{
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
int digonal(int x[20][20],int r,int c,char A)
{
	int sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum+=x[i][j];
			}
		}
	}
	return(sum);
}
