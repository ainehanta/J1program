#include<stdio.h>
#include"graph.h"

#define START_X 110
#define START_Y 30

void drawBoard(void);
void drawWhite(int,int);
void drawBlack(int,int);

main(void)
{
	int i = 10;

	initGraph();
	drawBoard();

	waitButtonPress();
	closeGraph();
}

void drawBoard(void)
{
	int i,x,y;

	x = START_X;
	y = START_Y;
	for(i=0;i<=18;i++)
	{
		drawLine(x,y+23*i,x+414,y+23*i,GRAY);
	}
	for(i=0;i<=18;i++)
	{
		drawLine(x+23*i,y,x+23*i,y+414,GRAY);
	}
}

void drawWhite(int x,int y)
{
	
