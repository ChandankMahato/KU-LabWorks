#include<stdio.h>
int get_salary(int);
int main()
{
	int x;
	printf("ENTER THE NUMBER OF PRODUCT SOLD IN A WEEK:");
	scanf("%d",&x);
	printf("THE WEEKLY SALARY OF THE SALESMAN IS %d",get_salary(x));
}
int get_salary(int a)
{
	if(a!=40)
	{
		if(a<40)
		{
			return(4*a+100);
		}
		else
		{
			return(4.5*a+150);
		}
	}
	else
	{
		return(300);
	}
}
