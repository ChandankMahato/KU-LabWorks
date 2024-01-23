#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8
int main()
{
	int l,x;
	float T;
	printf("ENTER THE LENGTH OF SIMPLE PENDULUM:");
	scanf("%d",&l);
	// l is in metre(m).
	// g is in metre per second square(m/s^2).
	x=l/g;
	T=2*pi*sqrt(x);
	//T is in second(s).
	printf("THE TIME PERIOD OF SIMPLE PENDULUM OF LENGTH %dm IS :%fs",l,T);
	
}
