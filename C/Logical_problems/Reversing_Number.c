#include<stdio.h>
#include<conio.h>
int rev(int);
int main()
{
	int n;
	printf("ENTER THE NUMEBER OF ANY DIGIT:");
	scanf("%d",&n);
	printf("REVERSED NUMBER IS:%d",rev(n));
	rev(n);
	getch();
	return 0;
}
int rev(int n)
{
	int reverse=0,rem;
	while(n!=0)
	{
	rem=n%10;
	reverse=reverse*10+rem;
	n=n/10;
	}
	return reverse;
}

