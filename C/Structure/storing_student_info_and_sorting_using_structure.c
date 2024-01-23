#include<stdio.h>
#include<string.h>
struct student{
	int Roll_Num[100];
	char Name[100][30];
	char Dept[100][30];
}S;
int main()
{
	int n,i,j;
	char N[100];
	printf("ENTER NUMBER OF STUDENT:");
	scanf("%d",&n);
	printf("ENTER THE RECORD OF %d STUDENTS:\n",n);
	for(i=0;i<n;i++)
	{
		printf("ENTER THE NAME OF STUDENT:");
		scanf(" %[^\n]",S.Name[i]);
		printf("ENTER THE ROLL NUMBER OF STUDENT:");
		scanf(" %d",&S.Roll_Num[i]);
		printf("ENTER THE DEPARTMENT OF STUDENT:");
		scanf(" %[^\n]",S.Dept[i]);
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	    	if(strcmp(S.Name[i],S.Name[j])>0)
	    	{
	    		strcpy(N,S.Name[i]);
                strcpy(S.Name[i],S.Name[j]);
				strcpy(S.Name[j],N);       
			}
		}
	}
	printf("\n\n");
	printf("########################################################################\n");
	printf("NAME  \t\t\t\t ROLL_NUM \t DEPARTMENT \n      ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%-30s      %-3d \t  %-30s ",S.Name[i],S.Roll_Num[i],S.Dept[i]);
		printf("\n");
	}
	printf("#######################################################################\n");
}
