#include<stdio.h>
struct Employee{
	char name[5][30];
	int salary[5];
	char year[5][15];
	int taxable[5];
}E;
int main()
{
	int i,j;
	float SUM=0.000000;
	for(i=0;i<5;i++)
	{
		printf("ENTER THE NAME OF EMPLOIYEE:");
		scanf(" %[^\n]",E.name[i]);
		printf("ENTER THE SALARY OF EMPLOYEE:");
		scanf("%d",&E.salary[i]);
		printf("ENTER THE YEAR OF JOINING:");
		scanf(" %[^\n]",E.year[i]);
		printf("ENTER THE 0 IF SALARY NOT TAXABLE AND 1 IF TAXABLE:");
		scanf("%d",&E.taxable[i]);
		printf("\n\n");
	}
	printf("NAME\t\t\t\tSALARY\t\t\tYEAR  \t\t  TAXABLE");
    printf("\n\n");
	for(i=0;i<5;i++)
	{
		printf("%-30s  %-10d \t\t%-20s %-2d",E.name[i],E.salary[i],E.year[i],E.taxable[i]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(E.taxable[i]==1)
		{
			SUM=SUM+(E.salary[i]*0.15);
		}
	}
	printf("THE TOTAL TAX COLLECTED FROM ALL THE EMPLOYEE IS %f",SUM);
}
