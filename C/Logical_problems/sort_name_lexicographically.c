#include<stdio.h>
#include<string.h>
int main()
{
	char name[10][8],tname[10][8],temp[8];
	int i,j,n;
	
	printf("ENTER THE VALUE OF n:\n");
	scanf("%d",&n);
	printf("ENTER %d names n \n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s", name[i]);
		strcpy(tname[i],name[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	    {
	    	if(strcmp(name[i],name[j])>0)
	    	{
	    		strcpy(temp,name[i]);
	    		strcpy(name[i],name[j]);
	    		strcpy(name[j],temp);
			}
		}
	}
	printf("\n--------------------------------------\n");
	printf("INPUT NAME\t\t\t SORTED NAMES\n");
	for(i=0;i<n;i++)
	{
		printf("%-30s\t\t%s\n",tname[i],name[i]);
	}
	
}
