#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int width=20,height=20,gameOver;
int x,y,furitX,furitY,score;
int direction;
int tailX[100],tailY[100];
int counttail=0;
void draw();
void setup();
void input();
void Makelogic();
int main()
{
	label5:
	int m,n;
	char c;
	setup();
	while(!gameOver)
{
	draw();
	input();
	Makelogic();
	for(m=0;m<1000;m++)
	{
	for(n=0;n<10000;n++)
	{
		
	}
	}

}
	printf("\nPRESS Y TO CONTINUE AGAIN.");
	scanf("%c",&c);
	if(c=='y'||c=='Y')
	goto label5;
	return 0;
}
void draw()
{
	int i,j,k;
	system("cls");
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(i==0||i==width-1||j==0||j==height-1)
			{
				printf("*");
			}
			else
			{
				if(i==x && j==y)
				{
					printf("O");
				}
				else if(i==furitX && j==furitY)
				{
					printf("@");
				}
				else
				{
					int ch=0;
				  for(k=0;k<counttail;k++)
				  {
				  	if(i==tailX[k] && j==tailY[k])
				  	{
				  	printf("o");
					  ch=1;	
				    }
				  }
			        if(ch==0)
			        printf(" ");
			    }
			}
		}
		printf("\n");
	}
	printf("YOUR SCORE=%d",score);
}
void setup()
{
	gameOver=0;
	x=height/2;
	y=width/2;
	label1:
	furitX=rand()%20;
	if(furitX==0)
	goto label1;
	label2:
	furitY=rand()%20;
	if(furitY==0)
	goto label2;
	score=0; 
}
void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case'a':
			direction=1;
			break;
			
			case'd':
			direction=2;
			break;
				
			case'w':
		    direction=3;
		    break;
		    
		    case's':
		    direction=4;
		    break;
		    
		    case'Q':
		    gameOver=1;
		    break;
		}
	}
}
void Makelogic()
{
	int i;
	int prevX=tailX[0];
	int prevY=tailY[0];
	int prev2X;
	int prev2Y;
	tailX[0]=x;
	tailY[0]=y;
	for(i=1;i<counttail;i++)
	{
		prev2X=tailX[i];
		prev2Y=tailY[i];
		tailX[i]=prevX;
		tailY[i]=prevY;
		prevX=prev2X;
		prevY=prev2Y;
		
	}
	switch(direction)
	{
		case 1:
		y--;
		break;
			
		case 2:
		y++;
		break;
		
		case 3:
		x--;
		break;
		
		case 4:
		x++;
		break;
			
		default:
		break;
	}
if(x<=0||x>=height||y<=0||y>=width)
{
	gameOver=1;
}
for(i=0;i<counttail;i++)
{
	if(x==tailX[i] && y==tailY[i])
	gameOver=1;
}
if(x==furitX && y==furitY)
{
	label3:
	furitX=rand()%20;
	if(furitX==0)
	goto label3;
	label4:
	furitY=rand()%20;
	if(furitY==0)
	goto label4;
	score+=5;
	counttail++;
}
}
