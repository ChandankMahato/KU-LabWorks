#include<stdio.h>
struct student{
	int Roll_Num;
	char Name[100][30];
	char Dept[100][30];
}S;
int main()
{
	int i,j,n;
	printf("ENTER THE NUMBER OF STUDENT WHOSE RECORD YOU WANT TO KEEP:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER THE NAME OF %d STUDENT:",i+1);
		scanf(" %[^\n]",S.Name[i]);
		printf("ENTER THE Roll_NUM OF %d STUDENT:",i+1);
		scanf("%d",&S.Roll_Num);
		printf("ENTER THE DEPARTMENT OF %d STUDENT:",i+1);
		scanf(" %[^\n]",S.Dept);
		printf("\n\n");
	}	
}
