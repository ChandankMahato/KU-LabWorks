#include<stdio.h>
#include<string.h>
struct Studen{
	char name[10][30];
	int age[10];
	char birth_place[10][30];
}S;
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
			printf("ENTER THE NAME OF STUDENT %d:",i+1);
			scanf(" %[^\n]",S.name[i]);
			printf("ENTER THE AGE OF STUDENT %d:",i+1);
			scanf("%d",&S.age[i]);
			printf("ENTER THE BIRTH PLACE OF STUDENT %d:",i+1);
			scanf(" %[^\n]",S.birth_place[i]);
			printf("\n");
		
	}
	printf("NAME\t\t\t\tAGE     \tBIRTH_PLACE");
	printf("\n");
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%-30s  %-3d \t\t%-30s ",S.name[i],S.age[i],S.birth_place[i]);
		printf("\n");
    }

}
