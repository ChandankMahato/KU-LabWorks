#include<stdio.h>
int main()
{
	int x,Score[5],sum=0,i;
	float avg,p,mark;
	printf("I AM THE STUDENT OF GRADE 10 AND STUDING 5 SUBJECTS.\n");
	Score[0]=86;
	Score[1]=45;
	Score[2]=51;
	Score[3]=61;
	printf("ENTER THE PERCENTAGE YOU WANT TO SCORE:");
	scanf("%f",&p);
    for(i=0;i<4;i++)
    {
    	sum=sum+Score[i];
	}
	avg=sum/5.0;
	if(avg<(p-20)) 
   	{
	 	printf("IMPOSSIBLE TO SCORE.");
    }
    else if(avg==(p-20))
    {
    	printf("THE MARKS YOU HAVE TO SCORE IN FIFTH SUBJECT IS 100.");
	}
	else
	{
		mark=((p*5)-sum);
		printf("THE MARK YOU HAVE TO SCORE IN FIFTH SUBJECT IS %f",mark);
	}
}
