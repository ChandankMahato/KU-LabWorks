#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE DIMENSION OF SIDE AB:");
	scanf("%d",&c);
	printf("ENTER THE DIMENSION OF SIZE BC:");
	scanf("%d",&a);
	printf("ENTER THE DIMENSION OF SIDE CA:");
	scanf("%d",&b);
	if((a+b)>c && (b+c)>a && (a+c)>b)
	printf("THE TRIANGLE IS VALID.");
	else
    printf("THE TRIANGLE IS NOT VALID.");	
}
