#include <stdio.h>

int main()
{
int a[10],n,i,j,k,l;
printf("enter the no of elements:");
scanf("%d",&n);
printf("enter the %d elements:\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			for(k=i;k<n;k++)
			{
				for(l=k+1;k<n;k++)
				{
					a[k]=a[l];
				}
			}
		}
	}
}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}

    return 0;
}
