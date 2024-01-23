#include<stdio.h>
void info(int b);
int main()
{
	int i;
	for(i=1;i<30;i++)
	{
		info(i);
	}
}
void info(int b)
{
	struct student
	{
		char name[30];
		int roll_no;
		float marks;
	};
	struct student ai;
		printf("store information about %d stuedent\n",ai);
	//	puts(ai.name);
		gets(ai.name);
	    scanf("%d%f",&ai.roll_no,&ai.marks);
	    printf("ai.Name=%s\nROLL=%d\nMARKS=%f\n",ai.name,ai.roll_no,ai.marks);
}

