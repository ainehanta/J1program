#include<stdio.h>
#include"graph.h"

#define START_X 100
#define START_Y 20
#define R 12
#define BLACKSTONE 1
#define WHITESTONE 2
#define BLANC 0

void drawBoard(void);
void drawWhite(int,int);
void drawBlack(int,int);
void drawQuit(void);
//void getPoint(int,int,int);
void quitLoop(int,int);

int point[19][19];

main(void)
{
	int x = 0,y = 0;

	initGraph();
	drawBoard();
	drawQuit();

	while(1)
	{
		waitButtonPress();
		getClickPoint(&x,&y);
		quitLoop(x,y);
	}
}

void drawBoard(void)
{
	int i,x,y;

	x = START_X;
	y = START_Y;
	for(i=0;i<=18;i++)
	{
		drawLine(x,y+24*i,x+432,y+24*i,GRAY);
	}
	for(i=0;i<=18;i++)
	{
		drawLine(x+24*i,y,x+24*i,y+432,GRAY);
	}
}
/*
void getPoint(int x1,int y1,int *point)
{	int	xt1,yt1,i;

	x1 = x1 - START_X;
	y1 = y1 - START_Y;

	for (i=0;i<3;i++)
	{
		point[i] = 0;
	}

	if (x1<=432&&y1<=432)
	{
		point[2] = 1;

		point[0] = x1/24;
		xt1 = x1%24;

		point[1] = y1/24;
		yt1 = y1%24;

		if (xt1>=13)
		{
			point[0] += 1;
		}
		if (yt1>=13)
		{
			point[1] += 1;
		}
	}

}
*/
void drawWhite(int x,int y)
{
	int xt,yt;

	xt = START_X + x * 24;
	yt = START_Y + y * 24;

	if (point[x][y] == BLANC)
	{
		fillCircle(xt,yt,R,WHITE);
		drawCircle(xt,yt,R,BLACK);

		point[x][y] = WHITESTONE;
	}
}

void drawBlack(int x,int y)
{
	int xt,yt;

	xt = START_X + x * 24;
	yt = START_Y + x * 24;

	if (point[x][y] == BLANC)
	{
		fillCircle(xt,yt,R,BLACK);

		point[x][y] = BLACKSTONE;
	}
}

void drawQuit(void)
{
	drawRectangle(10,10,70,50,BLACK);
	drawString(11,45,"END",BLACK);
}

void quitLoop(int x,int y)
{
	if (x > 10 && x < 60 && y >10 && y < 40)
	{
		closeGraph();
	}
}	
