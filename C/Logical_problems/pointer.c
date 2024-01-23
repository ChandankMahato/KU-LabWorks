#include<stdio.h>
#include<conio.h>
void conversion(char *Ch);
int main()
{
	char Ch;
	printf("ENTER THE CHARACTER OF OUR COICE:");
	scanf("%c",&Ch);
	conversion(&Ch);
	printf("\nTHE CORRESPONDING CHARACTER IS:%c",Ch);
	printf("%c",Ch);
	getch();
	return 0;
}
void conversion(char *Ch)
{
	if(*Ch>=97 && *Ch<=122)
	*Ch=*Ch-32;
	else if(*Ch>=65 && *Ch<=90)
	*Ch=*Ch+32;
}
