#include<stdio.h>
int add(int [][20],int [][20],int [][20],int,int);
void m1(int [][20],int,int);
void m2(int [][20],int,int);
int a[20][20],b[20][20],c[20][20],R,C,i,j;
int main()
{
printf("ENTER THE NO OF ROWS AND COLUMAN:\n");
scanf("%d%d",&R,&C);
m1(a,R,C);
m2(b,R,C);
add(a,b,c,R,C);
}
void m1(int a[][20],int R,int C)
{
	printf("ENTER THE ELEMENTS OF MATRIX A:\n");
	for(i=0;i<R;i++)
		for(j=0;j<C;j++)
		{
			printf("ENTER THE ELEMENT a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	printf("MATRIX A=\n");
	for(i=0;i<R;i++)
		for(j=0;j<C;j++)
		{
			printf("%d ",a[i][j]);
			if(j==(C-1))
	         printf("\n");
	     }
}
void m2(int a[][20],int R,int C)
{
	printf("ENTER THE ELEMENTS OF MATRIX B:\n");
	for(i=0;i<R;i++)
		for(j=0;j<C;j++)
		{
			printf("ENTER THE ELEMENT b[%d][%d]=",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	printf("MATRIX B=\n");
	for(i=0;i<R;i++)
		for(j=0;j<C;j++)
		{
			printf("%d ",b[i][j]);
			if(j==(C-1))
	         printf("\n");;
		}
}
int add(int a[][20],int b[][20],int c[][20],int R,int C)
{
	for(i=0;i<R;i++)
		for(j=0;j<C;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("THE SUM OF MATRIX A AND MATRIX B IS:\n");
		for(i=0;i<R;i++)
		for(j=0;j<C;j++)
		{
		 printf("%d ",c[i][j]);
		 if(j==(C-1))
		 printf("\n");
	    }
}

