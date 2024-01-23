#include<stdio.h>
/*
enter 4*4 matrix.vlues goes this way 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16;
or enter any values.
i want output like this:
1   2   3   4    SUM=10
5   6   7   8    SUM=26
9   10  11  12   SUM=42
13  14  15  15   SUM=58
but output is like this:
run the program and see....
*/
int main()
{
	int i,j,m[10][10],r,c,SUM[10];
	printf("ENTER THE NUMBER OF ROWS AND NUMBER OF COLUMN:\n");
	scanf("%d%d",&r,&c);
	printf("ENTER THE ELEMENT OF MATRIX M:\n");
	for(i=0;i<r;i++)
	{
		SUM[i]=0;
		for(j=0;j<c;j++)
		{
			printf("m[%d][%d]=",i+1,j+1);
			scanf("%d",&m[i][j]);
			SUM[i]=SUM[i]+m[i][j];
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d    ",m[i][j]);
			
			if(j==(c-1))
			{		
			printf("    SUM=%d",SUM[i]);
			printf("\n");
		    }
		}
	}
}
