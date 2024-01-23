#include<stdio.h>
struct courseRec{
	char subCode[7];
	char subTitle[30];
	int subCredit;
	int nofStudent;
}cRec;
int main()
{
	printf("ENTER THE SUBJECT CODE:");
	scanf("%s",cRec.subCode);
	
	printf("ENTER THE SUBJECT TITLE:");
	scanf("%[^\n]",cRec.subTitle);
	
	printf("ENTER THE SUBJECT CREDIT:");
	scanf("%d",&cRec.subCredit);
	
	printf("ENTER THE NO OF STUDENT ENROLLED:");
	scanf("%d",&cRec.nofStudent);
	
	printf("%s\t%s\t%d\t%d\t",cRec.subCode,cRec.subTitle,cRec.subCredit,cRec.nofStudent);
}
