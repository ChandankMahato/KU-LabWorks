#include<stdio.h>
struct stdinfo{
char name[80];
char dept[30];
int roll_no;
};
int main()
{
	//fflush(stdin);
	int n,i;
	struct stdinfo si[100];
	printf("HOW MANY STUDENT INFORMATION ARE YOU STORING:");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		printf("YOUR NAME:");
		scanf(" %[^\n]",si[i].name);
		printf("YOUR DEPARTMENT:");
		scanf(" %[^\n]",si[i].dept);
		printf("YOUR ROLL NUMBER:");
		scanf("%d",&si[i].roll_no);
	}
printf("*****************\n");
printf("*****************");
printf("\n");
for(i=0;i<n;i++)
{
	printf("\nYOUR NAME:%s",si[i].name);
	printf("\nYOUR DEPARTMENT:%s",si[i].dept);
	printf("\nYOUR ROLL NO:%d",si[i].roll_no);
	printf("\n******************");
}
}
