#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gamename();
void show();
void input();
void start();
void play();
int GameEnd();
int main()
{
int k;
char ch;
label1:
gamename();
show();
input();
start();
play();

label:
system("CLS");
show();
play();
k=GameEnd();
system("CLS");
show();
if(k==100)
printf("PLAYER 1 WON");
else if(k==200)
printf("PLAYER 2 WON");
else
goto label;
printf("\nDO YOU WANT TO PALY AGAIN.IF YES THE PRESS Y");
scanf("%c",ch);
if(ch=='y'||ch=='Y')
{
	a[0]='1';
	a[1]='2';
	a[2]='3';
	a[3]='4';
	a[4]='5';
	a[5]='6';
	a[6]='7';
	a[7]='8';
	a[8]='9';
	goto label1;
}
getch();	
}
void show()
{
	printf("\t  ___ ____ ___\n");
	printf("\t |%c  | %c  | %c | \n",a[0],a[1],a[2]);
	printf("\t |___|____|___|\n");
	printf("\t |%c  | %c  | %c |  \n",a[3],a[4],a[5]);
	printf("\t |___|____|___|\n");
	printf("\t |%c  | %c  | %c |  \n",a[6],a[7],a[8]);
	printf("\t |___|____|___|");
}
void gamename()
{
	printf("\n\n\n\n\n\n\n\n\\t\t  TIC TAC TOE\n");
}
void input()
{
	printf("\n\t PLAYER 1 SYMBOL=x\n");
	printf("\n\t PLAYER 2 SYMBOL=0\n");
}
void start()
{
	char player;
	printf("ENTER THE PLAYER NUMBER WHO WANTS TO START THE GAME\n");
	scanf("%c",&player);
}
void play()
{
	char p,s;
	printf("ENTER THE POSITION AND THE SYMBOL.\n");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
    int i;
    for(i=0;i<9;i++)
    {
	    if(a[i]==p)
	  {
		a[i]=s;
	  }
	}	
}
int GameEnd()
{
	if(a[0]=='X'&&a[1]=='X'&&a[2]=='X'||a[3]=='X'&&a[4]=='X'&&a[5]=='X'||a[6]=='X'&&a[7]=='X'&&a[8]=='X'||a[0]=='X'&&a[3]=='X'&&a[6]=='X'||a[1]=='X'&&a[4]=='X'&&a[7]=='X'||a[2]=='X'&&a[5]=='X'&&a[8]=='X'||a[0]=='X'&&a[4]=='X'&&a[8]=='X'||a[2]=='X'&&a[4]=='X'&&a[6]=='X')
	return(100);
   else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0'||a[3]=='0'&&a[4]=='0'&&a[5]=='0'||a[6]=='0'&&a[7]=='0'&&a[8]=='0'||a[0]=='0'&&a[3]=='0'&&a[6]=='0'||a[1]=='0'&&a[4]=='0'&&a[7]=='0'||a[2]=='0'&&a[5]=='0'&&a[8]=='0'||a[0]=='0'&&a[4]=='0'&&a[8]=='0'||a[2]=='0'&&a[4]=='0'&&a[6]=='0')
    return(200);
    else
    return(300);
}
